#include "addressbook.h"
#include <QCoreApplication>
#include <QApplication>
#include <QtSql/QSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlDriver>
#include <QtSql/QSqlQuery>
#include <QDebug>

bool createConnection();

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    addressbook w;

    if (!createConnection()){

            qDebug() << "Not connected!";
            return 1;
        }
        else{

            qDebug() << "Connected!";

            QSqlQuery query;
            query.exec("SELECT name FROM newaddress");

            while (query.next()) {
                QString name = query.value(0).toString();
                qDebug() << "name:" << name;
                int age = query.value(1).toInt();

            }

            return 0;
        }
    w.show();

    return a.exec();
}

bool createConnection(){
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("addressbook");
    db.setUserName("root");
    db.setPassword("root");
    if (!db.open()) {
        qDebug() << "Database error occurred";
        return false;
    }
    return true;
}
