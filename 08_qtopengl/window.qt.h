#ifndef WINDOW_QT_H
#define WINDOW_QT_H

#include <QOpenGLWindow>
#include <QOpenGLFunctions_3_3_Core>

#include <glm/ext/matrix_float4x4.hpp>

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

private: // inner config
    GLuint programID; // shader id
    glm::mat4 mvp;    // mvp

private: // common functions
    GLuint loadShaders(const char* vertex_file_path, const char* fragment_file_path);
};

#endif // WINDOW_QT_H

