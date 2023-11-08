#include<iostream>

class Shape{
protected:
    int radius;
public:
    Shape(int radius) : radius(radius){

    }   
    virtual int getArea() = 0;  
};

class Circle : public Shape{
public:
    Circle(int radius) : Shape(radius){

    }
    int getArea(){
        return 2*3.14*this->radius*this->radius;
    }
};

class Sphere : public Shape{
public:
    Sphere(int radius) : Shape(radius){

    }
    int getArea(){
        return 4*3.14*this->radius*this->radius;
    }
};

int main(void){
    Circle cir(20);
    std::cout << cir.getArea() << std::endl;
    Sphere sph(10);
    std::cout << sph.getArea() << std::endl;
}