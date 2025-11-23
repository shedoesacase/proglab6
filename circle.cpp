#include "circle.hpp"
#include <iostream>
#include <string>

Circle::Circle(const std::string& name, int radius): name(name), radius(radius) {}

void Circle::draw(){
    std::cout << "circle" << "(name: " << name << ", radius: " << radius << "),";
}