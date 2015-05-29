#include "game.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    game w;     //呼叫constructor
    w.show();
    w.gamestart();

    return a.exec();
}
