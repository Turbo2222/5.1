#include <iostream>
#include<iostream>
class shapes {
public:
    std::string name;
    int side = 0;
    shapes(int s):side(s) {
        name= "Фигура:" ;
        if (side > 0 || side < 0) {
            side = 0;
        }
    }
    virtual int sideShapes() {
        return side;
    }
};
class triangle :public shapes {
public:
    triangle(int s):shapes(s){
        name = "Треугольник:";
        if (side > 3 || side < 3) {
            side = 3;
        }
    }
    int sideShapes()override{
        return side ;
    }

};

class quadrangle :public shapes {
public:
    quadrangle(int s) :shapes(s) {
        name = "Четерёхугольник:";
        if (side > 4 || side <4 ) {
            side = 4;
        }

    }
    int sideShapes()override {
        return side ;
    }

};


int main()
{
    setlocale(LC_ALL, "ru");
    shapes* shap[3];
    shap[0] = new shapes{ 0 };
    shap[1] = new triangle{ 3 };
    shap[2] = new quadrangle{ 4 };

    for (int i = 0; i < 3;i++) {
        std::cout << shap[i]->name << " " << shap[i]->sideShapes() << std::endl;
    }

    for (int i = 0; i < 3;i++) {
        delete shap[i];
    }
    return 0;
}