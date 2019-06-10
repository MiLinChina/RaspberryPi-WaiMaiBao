#ifndef KEYNUM_H
#define KEYNUM_H

#include <QWidget>
#include"choice.h"
#include"input.h"

namespace Ui {
class Keynum;
}

class Keynum : public QWidget
{
    Q_OBJECT

public:
    explicit Keynum(QWidget *parent = 0);
    ~Keynum();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Keynum *ui;
    choice *ChoiceView;
    input *InputView;
};

#endif // KEYNUM_H
