#include "rectangle.hpp"
#include <iostream>
#include <string>

Rectangle::Rectangle(const std::string& name, int a, int b): name(name), a(a), b(b) {}

void Rectangle::draw(){
    std::cout << "rectangle" << "(name: " << name << ", a: " << a << ", b: " << b << "), ";
}