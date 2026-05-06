#ifndef IMAGE_H
#define IMAGE_H
#include <vector>
#include <string>
struct Color{
    int r, g, b;
};
struct Image{
    size_t width, height;
    std::vector<std::vector<Color>> pixels;
};

Image create_image(int w, int h);
void set_pixel(Image& img, int x, int y, Color c);
void save_ppm(const std::string filename, Image& img);
void fill_image(Image& img, Color Col);
#endif