#include <iostream>
#include "controller.hpp"
#include "circle.hpp"
#include "rectangle.hpp"
int main(){
    Controller controller_;
    controller_.createDoc();
    
    controller_.createShape(std::make_shared<Circle>());
    controller_.createShape(std::make_shared<Rectangle>());
    controller_.createShape(std::make_shared<Rectangle>());

    controller_.docView();
    std::string path = "path/path2/path3/exe.exe";

    controller_.exportDoc(path);
    controller_.importDoc(path);

    return 0;
}
