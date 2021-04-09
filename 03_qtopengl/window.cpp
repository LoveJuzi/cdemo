#include "window.qt.h"

Window::Window()
{
    timer = new QTimer();
    angle = 0;
    connect(timer, SIGNAL(timeout()), this, SLOT(update));
    timer->start(100);
}

Window::~Window()
{

}

void Window::initializeGL()
{
    initializeOpenGLFunctions();
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glClearDepth(0.0);
}

void Window::resizeGL(int w, int h)
{
    Q_UNUSED(w);
    Q_UNUSED(h);
}

void Window::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    glRotated(angle, 0.0, 1.0, 0.0);
    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(0.0, 0.8, 0.0);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(0.5, 0.0, 0.0);
    glColor3f(0.0, 1.0, 0.0);
    glVertex3f(-0.5, 0.8, 0.0);
    glEnd();
}
