#include<iostream>

class Car{
private:
    int year_model;
    int make;
    int speed;
public:
    Car(int year_model, int make, int speed){
        this->year_model = year_model;
        this->make = make;
        this->speed = speed;
    }
    int getMake(){
        return this->make;
    }
    int getSpeed(){
        return this->speed;
    }
    int getYearModel(){
        return this->year_model;
    }
    void setMake(int make){
        this->make  = make;
    }
    void setSpeed(int speed){
        this->speed = speed;
    }
    void setYearModel(int year_model){
        this->year_model = year_model;
    }
    int accelerate(){
        this->speed = this->speed + 5;
        return this->speed;
    }
    int brake(){
        this->speed = this->speed -5;
        return this->speed;
    }
    
};

int main(void){
    Car car(2012,4,90);
    std::cout << car.getSpeed() << std::endl;
    std::cout << car.accelerate() << std::endl;
    std::cout << car.accelerate() << std::endl;
    std::cout << car.brake() << std::endl;
    return 0;
}
