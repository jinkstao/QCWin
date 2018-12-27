#include "MainForm.h"
#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFile style(":/qss/theme/style.qss");
    if(style.open(QIODevice::ReadOnly))
    {
        qApp->setStyleSheet(style.readAll());
        style.close();
    }
    MainForm mainForm;
    mainForm.show();
    return a.exec();
}
