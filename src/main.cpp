#include <QApplication>
#include <QLabel>
#include <QWidget>
#include <QVBoxLayout>
#include "database.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    // Initialize database
    Database db("farm.db");
    QString dbMessage;
    if (db.init()) {
        if (db.insertSamplePig()) {
            dbMessage = "Database ready. Sample pig inserted.";
        } else {
            dbMessage = "Database ready. Pig already exists or insert failed.";
        }
    } else {
        dbMessage = "Database error!";
    }

    // Main window
    QWidget window;
    window.setWindowTitle("PigFarm App");

    QVBoxLayout *layout = new QVBoxLayout(&window);

    QLabel *label("Hello, Farm!");
    QLabel *dbStatus(dbMessage);

    layout->addWidget(&label);
    layout->addWidget(&dbStatus);

    window.show();

    return app.exec();
}
