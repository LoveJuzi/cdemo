#ifndef WINDOW_QT_H
#define WINDOW_QT_H

#include <QOpenGLWindow>
#include <QOpenGLFunctions_3_3_Core>

class Window : public QOpenGLWindow, protected QOpenGLFunctions_3_3_Core
{
    Q_OBJECT
public:
    Window();
    ~Window();

protected:
    void initializeGL() override;
    void resizeGL(int w, int h) override;
    void paintGL() override;

private: // inner common function
    GLuint LoadShaders(const char * vertex_file_path,const char * fragment_file_path);

private: // inner config
    GLuint programID; // shader id
};

#endif // WINDOW_QT_H

