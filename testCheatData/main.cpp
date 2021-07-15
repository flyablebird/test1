#include "testCheatData.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    testCheatData w;
    w.show();
    return a.exec();
}
