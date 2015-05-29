#ifndef GAME_H
#define GAME_H

#include <QMainWindow>
#include "set.h"
namespace Ui {
class game;
}

class game : public QMainWindow
{
    Q_OBJECT

public:
    explicit game(QWidget *parent = 0);
    ~game();
    void gamestart(void);
    void setboard(set & b);
    void setrandom(void);
    void SetObstacle(void);
    void keyPressEvent(QKeyEvent * event);
    void initialized(void);
    bool AnyMoved();
    bool IsWined();
    bool Islosed();
    bool trigger;
    QString str;
    int score;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();


private:
    Ui::game *ui;
    set b[17];

};

#endif // GAME_H
