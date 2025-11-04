#include "controller.hpp"
#include <iostream>

void Controller::createDoc(){
    doc = std::make_shared<Document>();
    std::cout << "document has been created" << std::endl;
}

void Controller::importDoc(std::string& path){
    std::cout << "document import from: " << path << std::endl;
}

void Controller::exportDoc(std::string& path){
    std::cout << "document export in: " << path << std::endl;
}

void Controller::createShape(std::shared_ptr<Shape> shape){
    doc->createShape(shape);
    std::cout << "a shape has been created" << std::endl;
}

void Controller::removeShape(std::shared_ptr<Shape> shape){
    doc->deleteShape(shape);
}

void Controller::docView(){
    view.docView(*doc);
}