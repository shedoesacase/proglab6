#include "document.hpp"

void Document::createShape(std::shared_ptr<Shape>& shape){
    shapes.push_back(shape);
}

void Document::deleteShape(std::shared_ptr<Shape>& shape){
    for(int i = 0; i < shapes.size(); i++){
        if(shapes[i] == shape){
            shapes.erase(shapes.begin() + i);
        }
        break;
    }
}

std::vector<std::shared_ptr<Shape>> Document::getShapes(){
    return shapes;
}