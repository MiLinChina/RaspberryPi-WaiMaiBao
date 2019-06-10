#ifndef CHOICE_H
#define CHOICE_H

#include <QWidget>
#include <QDialog>
#include"input.h"

namespace Ui {
class choice;
}

class choice : public QDialog
{
    Q_OBJECT

public:
    explicit choice(QWidget *parent);
    ~choice();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::choice *ui;
    input *InputView;
};

#endif // CHOICE_H
