#pragma once
#include "shape.hpp"
#include <string>

class Circle : public Shape {
private:
    std::string name;
    int radius;

public:
    Circle(const std::string& name, int radius);
    void draw() override;
};