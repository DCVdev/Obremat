#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtCore/QString>
#include "empleado.h"
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);//Inicializo QApplication
    Employee emp; //Creo un empleado
    int id;
    std::string user;
    std::string password;
    add_employee(emp,emp.id,emp.user,emp.password);
    QString text = QString("ID: %1, User: %2, Password: %3").arg(emp.id).arg(QString::fromStdString(emp.user)).arg(QString::fromStdString(emp.password));
    QLabel employees(text);//QLabel solo acepta valores QString
    employees.resize(200,100);
    employees.setWindowTitle("Qt employee");
    employees.show();

    return app.exec();
}
