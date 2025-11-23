#include <iostream>
#include "controller.hpp"
#include "circle.hpp"
#include "rectangle.hpp"
int main(){
    Controller controller_;
    controller_.createDoc();
    
    controller_.createShape(std::make_shared<Circle>("first circle", 10));
    controller_.createShape(std::make_shared<Rectangle>("first rectangle", 20, 30));
    controller_.createShape(std::make_shared<Rectangle>("second rectangle", 50, 100));

    controller_.docView();
    std::string path = "path/path2/path3/exe.exe";

    controller_.exportDoc(path);
    controller_.importDoc(path);

    return 0;
}
