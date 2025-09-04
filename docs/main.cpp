#include <QApplication>
#include <QLabel>
#include <QWidget>
#include <QVBoxLayout>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QWidget window;
    window.setWindowTitle("PigFarm App");

    QVBoxLayout *layout = new QVBoxLayout(&window);

    QLabel *label("Hello, Farm!");
    layout->addWidget(&label);

    window.show();

    return app.exec();
}
