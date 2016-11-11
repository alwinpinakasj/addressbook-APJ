#include <QTWidgets/QApplication>
#include <QtSql/QSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlDriver>
#include <QtSql/QSqlQuery>
#include <QtGui>
#include <QtSql>
#include <QTableView>
#include <QWidget>
#include <QTableWidget>
#include <QDebug>
#include <QMessageBox>

//using namespace std;




int main(int argc, char *argv[])
{
    QApplication app(argc, argv);


    QTableWidget* table = new QTableWidget();
    table->setWindowTitle("Connect to Mysql Database Example");

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("addressbook");
    db.setUserName("root");
    db.setPassword("root");

    if (!db.open()) {
        qDebug() << "Database error occurred";
        return false;
    }

            qDebug() << "Connected!";

            QSqlQuery query;
            query.exec("SELECT * FROM newaddress1");

            table->setColumnCount(query.record().count());
            table->setRowCount(query.size());
            int index = 0;
            while (query.next()) {
                /*QString Name = query.value(0).toString();
                qDebug() << "Name:" << Name;
                QString Age = query.value(1).toString();
                qDebug() << "Age:" << Age;*/
                table->setItem(index,0,new QTableWidgetItem(query.value(0).toString()));
                table->setItem(index,1,new QTableWidgetItem(query.value(1).toString()));
                index++;
            }
            table->show();

           return app.exec();
}


