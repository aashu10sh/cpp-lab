#include<iostream>

class PayRoll{
private:
    int rate;
    int hoursWorked;
    int totalPay;
public:
    PayRoll(){}
    PayRoll(int rate, int hoursWorked) :rate(rate){
        if (hoursWorked>60){
            throw 1;
        }
        this->hoursWorked = hoursWorked;
    } 
    int getPay(){
        return hoursWorked*rate;
    }
};

int main(void){
    PayRoll payments[3];
    try {
        PayRoll pay(20,30);
        PayRoll pay2(30,50);
        PayRoll pay3(50,21);
        payments[0] = pay;
        payments[1] = pay2;
        payments[2] = pay3;
    }catch(int x){
        std::cout<< "Work Hour above 60 not allowed" << std::endl;

    }
    for (int i=0;i<3;i++){
        std::cout << payments[i].getPay() <<  std::endl;
    }

}