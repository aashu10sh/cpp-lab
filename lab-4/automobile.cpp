#include<iostream>

class AutoMobile{
protected:
    int date;
    int price;
public:
    AutoMobile(int date, int price){
        this->date = date;
        this->price = price;
    }
};

class Lorry : public AutoMobile{
protected:
    int weight_capacity;
public:
    Lorry(int date, int price, int weight_capacity) : AutoMobile(date, price){
        this->weight_capacity = weight_capacity;
    }
    void getData(){
        std::cout << date << price << weight_capacity << std::endl;
    }
    void setData(int date, int price, int weight_capacity){
        this->date = date;
        this->price = price;
        this->weight_capacity = weight_capacity;
    }
};

class Taxi : public AutoMobile{
protected:
    int seats;
public:
    Taxi(int date, int price, int seats) : AutoMobile(date, price ){
        this->seats = seats;
    }
    void getData(){
        std::cout << date << price << seats << std::endl;
    }
    void setData(int date, int price, int seats){
        this->date = date;
        this->price = price;
        this->seats = seats;
    }

};


int main(void){
    Taxi travis(21,4000,3);
    travis.getData();
    travis.setData(34,7000,5);
    travis.getData();
    Lorry lorry(10,3000,30);
    lorry.getData();
    lorry.setData(13,4000,45);
    lorry.getData();
}