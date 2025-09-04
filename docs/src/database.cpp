#include "database.h"
#include <iostream>

Database::Database(const std::string &dbName) : db(nullptr), dbName(dbName) {}

Database::~Database() {
    if (db) {
        sqlite3_close(db);
    }
}

bool Database::init() {
    int rc = sqlite3_open(dbName.c_str(), &db);
    if (rc) {
        std::cerr << "Error opening database: " << sqlite3_errmsg(db) << std::endl;
        return false;
    }

    const char *createTableSQL =
        "CREATE TABLE IF NOT EXISTS Pigs ("
        "id INTEGER PRIMARY KEY AUTOINCREMENT, "
        "name TEXT NOT NULL, "
        "weight REAL, "
        "health_status TEXT);";

    char *errMsg = nullptr;
    rc = sqlite3_exec(db, createTableSQL, nullptr, nullptr, &errMsg);
    if (rc != SQLITE_OK) {
        std::cerr << "Error creating table: " << errMsg << std::endl;
        sqlite3_free(errMsg);
        return false;
    }

    return true;
}

bool Database::insertSamplePig() {
    const char *insertSQL =
        "INSERT INTO Pigs (name, weight, health_status) "
        "VALUES ('Piggy', 50.0, 'Healthy');";

    char *errMsg = nullptr;
    int rc = sqlite3_exec(db, insertSQL, nullptr, nullptr, &errMsg);
    if (rc != SQLITE_OK) {
        std::cerr << "Error inserting pig: " << errMsg << std::endl;
        sqlite3_free(errMsg);
        return false;
    }

    return true;
}
