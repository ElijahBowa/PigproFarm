#ifndef DATABASE_H
#define DATABASE_H

#include <string>
#include <sqlite3.h>

class Database {
public:
    Database(const std::string &dbName);
    ~Database();

    bool init();
    bool insertSamplePig();

private:
    sqlite3 *db;
    std::string dbName;
};

#endif // DATABASE_H
