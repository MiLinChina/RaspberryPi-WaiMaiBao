#include "keynum.h"
#include "ui_keynum.h"
#include<QApplication>
#include<QPushButton>
#include<QWidget>
#include <QGridLayout>
#include <QLabel>
#include <QLineEdit>
#include <QTextEdit>
#include <QHBoxLayout>
#include <QDialog>
#include"choice.h"
#include"input.h"

Keynum::Keynum(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Keynum)
{
    ui->setupUi(this);
}

Keynum::~Keynum()
{
    delete ui;
}

void Keynum::on_pushButton_clicked()
{
    int status = 1;//存
    ChoiceView = new choice(this);
    ChoiceView->show();
}

void Keynum::on_pushButton_2_clicked()
{
    int status = 0;//取
    InputView = new input(this);
    InputView->show();
}
