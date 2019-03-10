#include "chooselevel.h"
#include "ui_chooselevel.h"
#include "chooselevelsence.h"


ChooseLevel::ChooseLevel(int posX, int posY, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ChooseLevel)
{
    ui->setupUi(this);
    this->resize(170, 210);
    //设置窗口边框不显示
    this->setWindowFlags(Qt::FramelessWindowHint);

    this->move(QPoint(590, 220));
    //选择关卡窗口设置;
    chooseLevelSence *sence = new chooseLevelSence;
    //level6
    connect(ui->level6, &QPushButton::clicked, [=](){
        emit Level6();
        this->close();
    });
    //level4
    connect(ui->level4, &QPushButton::clicked, [=](){
        emit Level4();
        this->close();
    });
}

ChooseLevel::~ChooseLevel()
{
    delete ui;
}