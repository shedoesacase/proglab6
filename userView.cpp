#include "userView.hpp"
#include <iostream>
void UserView::docView(Document& doc){
    std::cout << "Rendering a document containing: ";
    auto shapes = doc.getShapes();
    for(auto& shape : shapes){
        shape->draw();
    }
    std::cout << std::endl;
}