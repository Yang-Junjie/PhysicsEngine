#ifndef RENDERER_H
#define RENDERER_H

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <vector>
#include <cmath>
#include "math.h"

class Renderer {
public:
    void setClearColor(float r, float g, float b, float a);
    void clear();
    void drawArrays(GLenum mode, GLint first, GLsizei count);
    void drawRectangle(float x, float y, float width, float height, const float* color);
    void drawCircle(float centerX, float centerY, float radius, const float* color, int segments = 36);
    void drawCircle(oeVec2 center, float radius, const float* color, int segments = 36);
    void drawLine(float startX, float startY, float endX, float endY, const float* color);
    void drawLine(oeVec2 start, oeVec2 end, const float* color);
};

#endif // RENDERER_H