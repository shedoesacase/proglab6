#pragma once
#include "shape.hpp"
#include <string>

class Rectangle : public Shape {
private:
    std::string name;
    int a;
    int b;

public:
    Rectangle(const std::string& name, int a, int b);
    void draw() override;
};