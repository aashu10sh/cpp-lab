#include<iostream>

// for triangle
int area(int height,int base, bool isTriangle){
    return 0.5*base*height;
}
// for square
int area(float side){
    return side*side;
}
// for rectangle
int area(float length, float breadth){
    return length*breadth;
}
// for circle
int area(int radius, bool isCircle){
    return 3.14*radius*radius;
}

int main(void){
    std::cout << "Square " << area(21.02) << std::endl;
    std::cout << "Rectangle" << area(10.01,20.02) << std::endl;
    std::cout << "Triangle" << area(20,30,true) << std::endl;
    std::cout << "Circle" << area(12,true) << std::endl;
    return 0;
}
