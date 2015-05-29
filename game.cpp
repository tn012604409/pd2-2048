#include "game.h"
#include "ui_game.h"
#include <cstdlib>
#include <ctime>
#include <QDebug>
#include <QKeyEvent>
#include <QString>
game::game(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::game)
{
    ui->setupUi(this);
    for(int i=0;i<17;i++){
        b[i].position=i;
        b[i].number=0;
        b[i].isAdded=false;
        b[i].isMoved=false;
        setboard(b[i]);
    }//初始化
    score=0;
    str=QString::number(score,10);
    ui->score->setText(str);
    srand(time(NULL));
    trigger=true;
}

game::~game()
{
    delete ui;
}
void game::setboard(set & b){
    switch (b.position) {
    case 1:
        switch (b.number) {
        case 0:ui->b1->setPixmap(QPixmap(":/pic/0.png"));break;
        case 2:ui->b1->setPixmap(QPixmap(":/pic/2.png"));break;
        case 4:ui->b1->setPixmap(QPixmap(":/pic/4.png"));break;
        case 8:ui->b1->setPixmap(QPixmap(":/pic/8.png"));break;
        case 16:ui->b1->setPixmap(QPixmap(":/pic/16.png"));break;
        case 32:ui->b1->setPixmap(QPixmap(":/pic/32.png"));break;
        case 64:ui->b1->setPixmap(QPixmap(":/pic/64.png"));break;
        case 128:ui->b1->setPixmap(QPixmap(":/pic/128.png"));break;
        case 256:ui->b1->setPixmap(QPixmap(":/pic/256.png"));break;
        case 512:ui->b1->setPixmap(QPixmap(":/pic/512.png"));break;
        case 1024:ui->b1->setPixmap(QPixmap(":/pic/1024.png"));break;
        case 2048:ui->b1->setPixmap(QPixmap(":/pic/2048.png"));break;
        }break;
    case 2:
        switch (b.number) {
        case 0:ui->b2->setPixmap(QPixmap(":/pic/0.png"));break;
        case 2:ui->b2->setPixmap(QPixmap(":/pic/2.png"));break;
        case 4:ui->b2->setPixmap(QPixmap(":/pic/4.png"));break;
        case 8:ui->b2->setPixmap(QPixmap(":/pic/8.png"));break;
        case 16:ui->b2->setPixmap(QPixmap(":/pic/16.png"));break;
        case 32:ui->b2->setPixmap(QPixmap(":/pic/32.png"));break;
        case 64:ui->b2->setPixmap(QPixmap(":/pic/64.png"));break;
        case 128:ui->b2->setPixmap(QPixmap(":/pic/128.png"));break;
        case 256:ui->b2->setPixmap(QPixmap(":/pic/256.png"));break;
        case 512:ui->b2->setPixmap(QPixmap(":/pic/512.png"));break;
        case 1024:ui->b2->setPixmap(QPixmap(":/pic/1024.png"));break;
        case 2048:ui->b2->setPixmap(QPixmap(":/pic/2048.png"));break;
        }break;
    case 3:
        switch (b.number) {
        case 0:ui->b3->setPixmap(QPixmap(":/pic/0.png"));break;
        case 2:ui->b3->setPixmap(QPixmap(":/pic/2.png"));break;
        case 4:ui->b3->setPixmap(QPixmap(":/pic/4.png"));break;
        case 8:ui->b3->setPixmap(QPixmap(":/pic/8.png"));break;
        case 16:ui->b3->setPixmap(QPixmap(":/pic/16.png"));break;
        case 32:ui->b3->setPixmap(QPixmap(":/pic/32.png"));break;
        case 64:ui->b3->setPixmap(QPixmap(":/pic/64.png"));break;
        case 128:ui->b3->setPixmap(QPixmap(":/pic/128.png"));break;
        case 256:ui->b3->setPixmap(QPixmap(":/pic/256.png"));break;
        case 512:ui->b3->setPixmap(QPixmap(":/pic/512.png"));break;
        case 1024:ui->b3->setPixmap(QPixmap(":/pic/1024.png"));break;
        case 2048:ui->b3->setPixmap(QPixmap(":/pic/2048.png"));break;
        }break;
    case 4:
        switch (b.number) {
        case 0:ui->b4->setPixmap(QPixmap(":/pic/0.png"));break;
        case 2:ui->b4->setPixmap(QPixmap(":/pic/2.png"));break;
        case 4:ui->b4->setPixmap(QPixmap(":/pic/4.png"));break;
        case 8:ui->b4->setPixmap(QPixmap(":/pic/8.png"));break;
        case 16:ui->b4->setPixmap(QPixmap(":/pic/16.png"));break;
        case 32:ui->b4->setPixmap(QPixmap(":/pic/32.png"));break;
        case 64:ui->b4->setPixmap(QPixmap(":/pic/64.png"));break;
        case 128:ui->b4->setPixmap(QPixmap(":/pic/128.png"));break;
        case 256:ui->b4->setPixmap(QPixmap(":/pic/256.png"));break;
        case 512:ui->b4->setPixmap(QPixmap(":/pic/512.png"));break;
        case 1024:ui->b4->setPixmap(QPixmap(":/pic/1024.png"));break;
        case 2048:ui->b4->setPixmap(QPixmap(":/pic/2048.png"));break;
        }break;
    case 5:
        switch (b.number) {
        case 0:ui->b5->setPixmap(QPixmap(":/pic/0.png"));break;
        case 2:ui->b5->setPixmap(QPixmap(":/pic/2.png"));break;
        case 4:ui->b5->setPixmap(QPixmap(":/pic/4.png"));break;
        case 8:ui->b5->setPixmap(QPixmap(":/pic/8.png"));break;
        case 16:ui->b5->setPixmap(QPixmap(":/pic/16.png"));break;
        case 32:ui->b5->setPixmap(QPixmap(":/pic/32.png"));break;
        case 64:ui->b5->setPixmap(QPixmap(":/pic/64.png"));break;
        case 128:ui->b5->setPixmap(QPixmap(":/pic/128.png"));break;
        case 256:ui->b5->setPixmap(QPixmap(":/pic/256.png"));break;
        case 512:ui->b5->setPixmap(QPixmap(":/pic/512.png"));break;
        case 1024:ui->b5->setPixmap(QPixmap(":/pic/1024.png"));break;
        case 2048:ui->b5->setPixmap(QPixmap(":/pic/2048.png"));break;
        }break;
    case 6:
        switch (b.number) {
        case 0:ui->b6->setPixmap(QPixmap(":/pic/0.png"));break;
        case 2:ui->b6->setPixmap(QPixmap(":/pic/2.png"));break;
        case 4:ui->b6->setPixmap(QPixmap(":/pic/4.png"));break;
        case 8:ui->b6->setPixmap(QPixmap(":/pic/8.png"));break;
        case 16:ui->b6->setPixmap(QPixmap(":/pic/16.png"));break;
        case 32:ui->b6->setPixmap(QPixmap(":/pic/32.png"));break;
        case 64:ui->b6->setPixmap(QPixmap(":/pic/64.png"));break;
        case 128:ui->b6->setPixmap(QPixmap(":/pic/128.png"));break;
        case 256:ui->b6->setPixmap(QPixmap(":/pic/256.png"));break;
        case 512:ui->b6->setPixmap(QPixmap(":/pic/512.png"));break;
        case 1024:ui->b6->setPixmap(QPixmap(":/pic/1024.png"));break;
        case 2048:ui->b6->setPixmap(QPixmap(":/pic/2048.png"));break;
        }break;
    case 7:
        switch (b.number) {
        case 0:ui->b7->setPixmap(QPixmap(":/pic/0.png"));break;
        case 2:ui->b7->setPixmap(QPixmap(":/pic/2.png"));break;
        case 4:ui->b7->setPixmap(QPixmap(":/pic/4.png"));break;
        case 8:ui->b7->setPixmap(QPixmap(":/pic/8.png"));break;
        case 16:ui->b7->setPixmap(QPixmap(":/pic/16.png"));break;
        case 32:ui->b7->setPixmap(QPixmap(":/pic/32.png"));break;
        case 64:ui->b7->setPixmap(QPixmap(":/pic/64.png"));break;
        case 128:ui->b7->setPixmap(QPixmap(":/pic/128.png"));break;
        case 256:ui->b7->setPixmap(QPixmap(":/pic/256.png"));break;
        case 512:ui->b7->setPixmap(QPixmap(":/pic/512.png"));break;
        case 1024:ui->b7->setPixmap(QPixmap(":/pic/1024.png"));break;
        case 2048:ui->b7->setPixmap(QPixmap(":/pic/2048.png"));break;
        }break;
    case 8:
        switch (b.number) {
        case 0:ui->b8->setPixmap(QPixmap(":/pic/0.png"));break;
        case 2:ui->b8->setPixmap(QPixmap(":/pic/2.png"));break;
        case 4:ui->b8->setPixmap(QPixmap(":/pic/4.png"));break;
        case 8:ui->b8->setPixmap(QPixmap(":/pic/8.png"));break;
        case 16:ui->b8->setPixmap(QPixmap(":/pic/16.png"));break;
        case 32:ui->b8->setPixmap(QPixmap(":/pic/32.png"));break;
        case 64:ui->b8->setPixmap(QPixmap(":/pic/64.png"));break;
        case 128:ui->b8->setPixmap(QPixmap(":/pic/128.png"));break;
        case 256:ui->b8->setPixmap(QPixmap(":/pic/256.png"));break;
        case 512:ui->b8->setPixmap(QPixmap(":/pic/512.png"));break;
        case 1024:ui->b8->setPixmap(QPixmap(":/pic/1024.png"));break;
        case 2048:ui->b8->setPixmap(QPixmap(":/pic/2048.png"));break;
        }break;
    case 9:
        switch (b.number) {
        case 0:ui->b9->setPixmap(QPixmap(":/pic/0.png"));break;
        case 2:ui->b9->setPixmap(QPixmap(":/pic/2.png"));break;
        case 4:ui->b9->setPixmap(QPixmap(":/pic/4.png"));break;
        case 8:ui->b9->setPixmap(QPixmap(":/pic/8.png"));break;
        case 16:ui->b9->setPixmap(QPixmap(":/pic/16.png"));break;
        case 32:ui->b9->setPixmap(QPixmap(":/pic/32.png"));break;
        case 64:ui->b9->setPixmap(QPixmap(":/pic/64.png"));break;
        case 128:ui->b9->setPixmap(QPixmap(":/pic/128.png"));break;
        case 256:ui->b9->setPixmap(QPixmap(":/pic/256.png"));break;
        case 512:ui->b9->setPixmap(QPixmap(":/pic/512.png"));break;
        case 1024:ui->b9->setPixmap(QPixmap(":/pic/1024.png"));break;
        case 2048:ui->b9->setPixmap(QPixmap(":/pic/2048.png"));break;
        }break;
    case 10:
        switch (b.number) {
        case 0:ui->b10->setPixmap(QPixmap(":/pic/0.png"));break;
        case 2:ui->b10->setPixmap(QPixmap(":/pic/2.png"));break;
        case 4:ui->b10->setPixmap(QPixmap(":/pic/4.png"));break;
        case 8:ui->b10->setPixmap(QPixmap(":/pic/8.png"));break;
        case 16:ui->b10->setPixmap(QPixmap(":/pic/16.png"));break;
        case 32:ui->b10->setPixmap(QPixmap(":/pic/32.png"));break;
        case 64:ui->b10->setPixmap(QPixmap(":/pic/64.png"));break;
        case 128:ui->b10->setPixmap(QPixmap(":/pic/128.png"));break;
        case 256:ui->b10->setPixmap(QPixmap(":/pic/256.png"));break;
        case 512:ui->b10->setPixmap(QPixmap(":/pic/512.png"));break;
        case 1024:ui->b10->setPixmap(QPixmap(":/pic/1024.png"));break;
        case 2048:ui->b10->setPixmap(QPixmap(":/pic/2048.png"));break;
        }break;
    case 11:
        switch (b.number) {
        case 0:ui->b11->setPixmap(QPixmap(":/pic/0.png"));break;
        case 2:ui->b11->setPixmap(QPixmap(":/pic/2.png"));break;
        case 4:ui->b11->setPixmap(QPixmap(":/pic/4.png"));break;
        case 8:ui->b11->setPixmap(QPixmap(":/pic/8.png"));break;
        case 16:ui->b11->setPixmap(QPixmap(":/pic/16.png"));break;
        case 32:ui->b11->setPixmap(QPixmap(":/pic/32.png"));break;
        case 64:ui->b11->setPixmap(QPixmap(":/pic/64.png"));break;
        case 128:ui->b11->setPixmap(QPixmap(":/pic/128.png"));break;
        case 256:ui->b11->setPixmap(QPixmap(":/pic/256.png"));break;
        case 512:ui->b11->setPixmap(QPixmap(":/pic/512.png"));break;
        case 1024:ui->b11->setPixmap(QPixmap(":/pic/1024.png"));break;
        case 2048:ui->b11->setPixmap(QPixmap(":/pic/2048.png"));break;
        }break;
    case 12:
        switch (b.number) {
        case 0:ui->b12->setPixmap(QPixmap(":/pic/0.png"));break;
        case 2:ui->b12->setPixmap(QPixmap(":/pic/2.png"));break;
        case 4:ui->b12->setPixmap(QPixmap(":/pic/4.png"));break;
        case 8:ui->b12->setPixmap(QPixmap(":/pic/8.png"));break;
        case 16:ui->b12->setPixmap(QPixmap(":/pic/16.png"));break;
        case 32:ui->b12->setPixmap(QPixmap(":/pic/32.png"));break;
        case 64:ui->b12->setPixmap(QPixmap(":/pic/64.png"));break;
        case 128:ui->b12->setPixmap(QPixmap(":/pic/128.png"));break;
        case 256:ui->b12->setPixmap(QPixmap(":/pic/256.png"));break;
        case 512:ui->b12->setPixmap(QPixmap(":/pic/512.png"));break;
        case 1024:ui->b12->setPixmap(QPixmap(":/pic/1024.png"));break;
        case 2048:ui->b12->setPixmap(QPixmap(":/pic/2048.png"));break;
        }break;
    case 13:
        switch (b.number) {
        case 0:ui->b13->setPixmap(QPixmap(":/pic/0.png"));break;
        case 2:ui->b13->setPixmap(QPixmap(":/pic/2.png"));break;
        case 4:ui->b13->setPixmap(QPixmap(":/pic/4.png"));break;
        case 8:ui->b13->setPixmap(QPixmap(":/pic/8.png"));break;
        case 16:ui->b13->setPixmap(QPixmap(":/pic/16.png"));break;
        case 32:ui->b13->setPixmap(QPixmap(":/pic/32.png"));break;
        case 64:ui->b13->setPixmap(QPixmap(":/pic/64.png"));break;
        case 128:ui->b13->setPixmap(QPixmap(":/pic/128.png"));break;
        case 256:ui->b13->setPixmap(QPixmap(":/pic/256.png"));break;
        case 512:ui->b13->setPixmap(QPixmap(":/pic/512.png"));break;
        case 1024:ui->b13->setPixmap(QPixmap(":/pic/1024.png"));break;
        case 2048:ui->b13->setPixmap(QPixmap(":/pic/2048.png"));break;
        }break;
    case 14:
        switch (b.number) {
        case 0:ui->b14->setPixmap(QPixmap(":/pic/0.png"));break;
        case 2:ui->b14->setPixmap(QPixmap(":/pic/2.png"));break;
        case 4:ui->b14->setPixmap(QPixmap(":/pic/4.png"));break;
        case 8:ui->b14->setPixmap(QPixmap(":/pic/8.png"));break;
        case 16:ui->b14->setPixmap(QPixmap(":/pic/16.png"));break;
        case 32:ui->b14->setPixmap(QPixmap(":/pic/32.png"));break;
        case 64:ui->b14->setPixmap(QPixmap(":/pic/64.png"));break;
        case 128:ui->b14->setPixmap(QPixmap(":/pic/128.png"));break;
        case 256:ui->b14->setPixmap(QPixmap(":/pic/256.png"));break;
        case 512:ui->b14->setPixmap(QPixmap(":/pic/512.png"));break;
        case 1024:ui->b14->setPixmap(QPixmap(":/pic/1024.png"));break;
        case 2048:ui->b14->setPixmap(QPixmap(":/pic/2048.png"));break;
        }break;
    case 15:
        switch (b.number) {
        case 0:ui->b15->setPixmap(QPixmap(":/pic/0.png"));break;
        case 2:ui->b15->setPixmap(QPixmap(":/pic/2.png"));break;
        case 4:ui->b15->setPixmap(QPixmap(":/pic/4.png"));break;
        case 8:ui->b15->setPixmap(QPixmap(":/pic/8.png"));break;
        case 16:ui->b15->setPixmap(QPixmap(":/pic/16.png"));break;
        case 32:ui->b15->setPixmap(QPixmap(":/pic/32.png"));break;
        case 64:ui->b15->setPixmap(QPixmap(":/pic/64.png"));break;
        case 128:ui->b15->setPixmap(QPixmap(":/pic/128.png"));break;
        case 256:ui->b15->setPixmap(QPixmap(":/pic/256.png"));break;
        case 512:ui->b15->setPixmap(QPixmap(":/pic/512.png"));break;
        case 1024:ui->b15->setPixmap(QPixmap(":/pic/1024.png"));break;
        case 2048:ui->b15->setPixmap(QPixmap(":/pic/2048.png"));break;
        }break;
    case 16:
        switch (b.number) {
        case 0:ui->b16->setPixmap(QPixmap(":/pic/0.png"));break;
        case 2:ui->b16->setPixmap(QPixmap(":/pic/2.png"));break;
        case 4:ui->b16->setPixmap(QPixmap(":/pic/4.png"));break;
        case 8:ui->b16->setPixmap(QPixmap(":/pic/8.png"));break;
        case 16:ui->b16->setPixmap(QPixmap(":/pic/16.png"));break;
        case 32:ui->b16->setPixmap(QPixmap(":/pic/32.png"));break;
        case 64:ui->b16->setPixmap(QPixmap(":/pic/64.png"));break;
        case 128:ui->b16->setPixmap(QPixmap(":/pic/128.png"));break;
        case 256:ui->b16->setPixmap(QPixmap(":/pic/256.png"));break;
        case 512:ui->b16->setPixmap(QPixmap(":/pic/512.png"));break;
        case 1024:ui->b16->setPixmap(QPixmap(":/pic/1024.png"));break;
        case 2048:ui->b16->setPixmap(QPixmap(":/pic/2048.png"));break;
        }break;
    }
}
void game::initialized(){
    for(int i=0;i<17;i++){
        b[i].isMoved=false;
        b[i].isAdded=false;
    }
    trigger=true;
}
bool game::AnyMoved(){          //已經移動過
    for(int i=0;i<17;i++){
        if(b[i].isMoved==true){
            return true;
        }
    }
    return false;
}

bool game::IsWined(){           //出現2048(勝利)
    for(int i=0;i<17;i++){
        if(b[i].number==2048){
            return true;
        }
    }
    return false;
}

bool game::Islosed(){           //出現(死局)

    for(int i=1;i<17;i++){
        if(b[i].number==0){     //還有空格所以return false
            return false;
        }
    }
    for(int j=0;j<4;j++){       //左右相同所以false
        for(int k=1+4*j;k<4+4*j;k++){
            if(b[k].number==b[k+1].number){
                return false;
            }
        }
    }
    for(int m=0;m<4;m++){       //上下相同所以false
        for(int n=1+m;n<10+m;n+=4){
            if(b[n].number==b[n+4].number){
               return false;
            }
        }
    }

    return true;
}

void game::setrandom()//random空格填2
{
    while(1){
      int t=rand()%16+1;
      if (b[t].number==0){
          b[t].number=2;
          setboard(b[t]);
          return;
      }
    }
}

void game::keyPressEvent(QKeyEvent *event)
{
    if(trigger){
    if(event->key() == Qt::Key_Left){


        for(int j=0;j<4;j++){
            for(int i=2+j*4;i<=4+j*4;i++){
                for(int k=i;k>1+(4*j);k--){
                //跟前一個數字相同
                    if(b[k].number!=0&&b[k].number==b[k-1].number&&b[k-1].isAdded==false&&b[k].isAdded==false){
                        b[k-1].number=b[k-1].number+b[k-1].number;
                        b[k].number=0;
                        b[k-1].isAdded=true;    //數字往前一格
                        b[k].isAdded=false;     //原空格變為零
                        setboard(b[k-1]);
                        setboard(b[k]);
                        b[k-1].isMoved=true;
                        b[k].isMoved=false;
                        score=score+b[k-1].number;
                 }
                //前一個空格為0
                else if(b[k].number!=0&&b[k-1].number==0){
                        b[k-1].number=b[k].number;
                        b[k].number=0;
                        b[k-1].isMoved=true;
                        b[k].isMoved=false;
                        b[k-1].isAdded=b[k].isAdded;
                        b[k].isAdded=false;
                        setboard(b[k-1]);
                        setboard(b[k]);
                  }
                }
            }
       }
    }
    else if(event->key() == Qt::Key_Right){
       for(int j=0;j<4;j++){
            for(int i=3+j*4;i>=1+j*4;i--){
                 for(int k=i;k<(1+j)*4;k++){
                if(b[k].number!=0&&b[k].number==b[k+1].number&&b[k+1].isAdded==false&&b[k].isAdded==false){
                    b[k+1].number=b[k+1].number+b[k+1].number;
                    b[k].number=0;
                    b[k+1].isAdded=true;
                    b[k].isAdded=false;
                    setboard(b[k+1]);
                    setboard(b[k]);
                    b[k+1].isMoved=true;
                    b[k].isMoved=false;
                    score=score+b[k+1].number;
                    }
                else if(b[k].number!=0&&b[k+1].number==0){
                    b[k+1].number=b[k].number;
                    b[k].number=0;
                    b[k+1].isMoved=true;
                    b[k].isMoved=false;
                    b[k+1].isAdded=b[k].isAdded;
                    b[k].isAdded=false;
                    setboard(b[k+1]);
                    setboard(b[k]);
                }
                 }
            }
       }
    }
    else if(event->key() == Qt::Key_Up){
       for(int j=0;j<4;j++){
            for(int i=5+j;i<=13+j;i+=4){
                 for(int k=i;k>1+j;k-=4){
                if(b[k].number!=0&&b[k].number==b[k-4].number&&b[k-4].isAdded==false&&b[k].isAdded==false){
                    b[k-4].number=b[k-4].number+b[k-4].number;
                    b[k].number=0;
                    b[k-4].isAdded=true;
                    b[k].isAdded=false;
                    setboard(b[k-4]);
                    setboard(b[k]);
                    b[k-4].isMoved=true;
                    b[k].isMoved=false;
                    score=score+b[k-4].number;
                    }
                else if(b[k].number!=0&&b[k-4].number==0){
                    b[k-4].number=b[k].number;
                    b[k].number=0;
                    b[k-4].isMoved=true;
                    b[k].isMoved=false;
                    b[k-4].isAdded=b[k].isAdded;
                    b[k].isAdded=false;
                    setboard(b[k-4]);
                    setboard(b[k]);
                }
                 }
            }
       }
    }
    else if(event->key() == Qt::Key_Down){
       for(int j=0;j<4;j++){
            for(int i=9+j;i>=1+j;i-=4){
                 for(int k=i;k<13+j;k+=4){
                if(b[k].number!=0&&b[k].number==b[k+4].number&&b[k+4].isAdded==false&&b[k].isAdded==false){
                    b[k+4].number=b[k+4].number+b[k+4].number;
                    b[k].number=0;
                    b[k+4].isAdded=true;
                    b[k].isAdded=false;
                    setboard(b[k+4]);
                    setboard(b[k]);
                    b[k+4].isMoved=true;
                    b[k].isMoved=false;
                    score=score+b[k+4].number;
                    }
                else if(b[k].number!=0&&b[k+4].number==0){
                    b[k+4].number=b[k].number;
                    b[k].number=0;
                    b[k+4].isMoved=true;
                    b[k].isMoved=false;
                    b[k+4].isAdded=b[k].isAdded;
                    b[k].isAdded=false;
                    setboard(b[k+4]);
                    setboard(b[k]);
                }
                 }
            }
       }
    }
    if(AnyMoved()){
        setrandom();
        initialized();
        score+=2;
        if(IsWined()){
            trigger=false;
            ui->win->setPixmap(QPixmap(":/pic/win.png"));
        }
        if(Islosed()){
            trigger=false;
            ui->win->setPixmap(QPixmap(":/pic/lose.png"));
        }
        str=QString::number(score,10);
        ui->score->setText(str);
    }
   }
}

void game::gamestart(){
    for(int i=0;i<17;i++){
        b[i].position=i;
        b[i].number=0;
        setboard(b[i]);
    }//初始化
    score=0;
    str=QString::number(score,10);
    ui->score->setText(str);
    setrandom();
    setrandom();
    ui->win->clear();
    ui->lose->clear();
}

void game::on_pushButton_clicked()
{
    gamestart();
    trigger=true;
}

void game::on_pushButton_2_clicked()
{
    this->close();
}
