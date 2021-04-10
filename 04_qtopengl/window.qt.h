#ifndef WINDOW_QT_H
#define WINDOW_QT_H

#include <QOpenGLWindow>
#include <QOpenGLFunctions_3_3_Core>
#include <QTimer>

class Window : public QOpenGLWindow, protected QOpenGLFunctions_3_3_Core
{
    Q_OBJECT

public:
    Window();
    ~Window();

protected:
    virtual void initializeGL() override;
    virtual void resizeGL(int w, int h) override;
    virtual void paintGL() override;

private:
    GLfloat angle;
    QTimer* timer;
};

#endif // WINDOW_QT_H

