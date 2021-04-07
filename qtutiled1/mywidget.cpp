#include "mywidget.qt.h"

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
    button.setText("^_^");
    button.setParent(this);
}

MyWidget::~MyWidget()
{

}
