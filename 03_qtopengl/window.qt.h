#ifndef WINDOW_QT_H
#define WINDOW_QT_H

#include <QOpenGLWindow>
#include <QOpenGLFunctions>
#include <QTimer>

class Window : public QOpenGLWindow, protected QOpenGLFunctions 
{
    Q_OBJECT

public:
    Window();
    ~Window();

protected:
    void initializeGL();
    void resizeGL(int w, int h);
    void paintGL();

private:
    GLfloat angle;
    QTimer* timer;
};

#endif // WINDOW_QT_H

