#ifndef DRAW_H
#define DRAW_H
#include <vector>
#include "image.h"

struct Point{
    int x, y;
};

bool is_valid_p(Image &img, Point p);
void draw_rectangle(Image &img, Point p1, int w, int h, Color col);
void draw_circle(Image &img, Point c, int radiu, Color col);
void draw_line_2P(Image &img, Point p1, Point p2, Color col);
void draw_triangle(Image &img, Point p1, Point p2, Point p3);
#endif