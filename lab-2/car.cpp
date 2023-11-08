#include<iostream>

class Car{
    private:
        std::string model;
        int make;
        double speed;
    public:
        Car(std::string model, int make, double speed){
            this->model = model;
            this->make = make;
            this->speed = speed;
        }
        std::string getModel(){
            return this->model;
        }
        int getMake(){
            return this->make;
        }
        double getSpeed(){
            return this->speed;
        }
        double accelerate(){
            this->speed = this->speed + 5;
            return this->speed;
        }
        double break_(){
            this->speed = this->speed -5 ;
            return this->speed;
        }

};

int main(void){
    Car benz("Benz",2023,2000);
    std::cout << benz.getSpeed() << std::endl;
    benz.accelerate();
    std::cout << benz.getSpeed() << std::endl;
    benz.break_();
    benz.break_();
    std::cout << benz.getSpeed() << std::endl;
}