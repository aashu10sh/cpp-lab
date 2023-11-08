#include<iostream>

class Circle{
    private:
        int radius;
        const double PI = 3.14159;
    public:
        Circle(){
            radius = 0;
        }
        Circle(int radius){
            this->radius = radius;
        }
        void setRadius(int radius){
            this->radius = radius;
        }
        int getRadius(){
            return this->radius;
        }
        double getArea(){
            return 2*PI*radius*radius;
        }
        int getDiameter(){
            return radius*2;
        }
        double getCircumference(){
            return 2*PI*radius;
        }
};

int main(void){
    Circle cir(20);
    std::cout << cir.getArea() << " " << cir.getDiameter() << " " << cir.getCircumference() << std::endl;
    return 0;
}