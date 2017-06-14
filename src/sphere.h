#ifndef SPHERE_H
#define SPHERE_H

#include <GL/glew.h>

class Sphere {
public:
    Sphere();

    ~Sphere();

    void init(GLuint vertexPositionID);

    void cleanup();

    void draw();

private:
    int lats, longs;
    bool isInited;
    GLuint m_vao, m_vboVertex, m_vboIndex;
    int numsToDraw;
};

#endif // SPHERE_H
