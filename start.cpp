#include "start.h"
#include "ui_start.h"
#include"game.h"
start::start(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::start)
{
    ui->setupUi(this);
}

start::~start()
{
    delete ui;
}

void start::on_pushButton_clicked()
{

    game b;
    b.show();
    b.gamestart();
    a.exec();
    //停留視窗

}
