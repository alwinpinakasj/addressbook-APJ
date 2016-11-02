#include <QApplication>
#include <QtWidgets>

int main(int argc, char *argv[])
{
  QApplication app(argc,argv);

  QWidget window;
  window.setFixedSize(300,200);

  QPushButton *welcomeButton = new QPushButton("Welocme to QT",&window) ;
  welcomeButton->setToolTip("Tool Tip to Welcome Button");
  welcomeButton->setGeometry(10,10,100,30);

  window.show();

    return app.exec();
}
