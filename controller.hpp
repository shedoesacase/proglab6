#pragma once
#include "document.hpp"
#include "userView.hpp"

class Controller{
private:
    std::shared_ptr<Document> doc;
    UserView view = UserView();

public:
    void createDoc();
    void importDoc(std::string& path);
    void exportDoc(std::string& path);
    void createShape(std::shared_ptr<Shape> shape);
    void removeShape(std::shared_ptr<Shape> shape);
    void docView();
};