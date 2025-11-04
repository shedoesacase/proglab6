#pragma once
#include <vector>
#include <memory>
#include "shape.hpp"
class Document{
    private:
    std::vector<std::shared_ptr<Shape>> shapes;

    public:

    void createShape(std::shared_ptr<Shape>& shape);
    void deleteShape(std::shared_ptr<Shape>& shape);
    std::vector<std::shared_ptr<Shape>> getShapes();
};