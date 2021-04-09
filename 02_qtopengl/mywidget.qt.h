#ifndef MYWIDGET_QT_H
#define MYWIDGET_QT_H

#include <QWidget>
#include <QPushButton>

class MyWidget : public QWidget
{
    Q_OBJECT
public:
    MyWidget(QWidget *parent = 0);
    virtual ~MyWidget();

    QPushButton button;
    // add a test
    int a;
};
#endif // MYWIDGET_QT_H

