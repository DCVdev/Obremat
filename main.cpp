#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QLabel hello("Hello, world!");
    hello.resize(200, 100);
    hello.setWindowTitle("Qt Hello World");
    hello.show();

    return app.exec();
}
