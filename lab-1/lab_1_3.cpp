#include<iostream>

// example of function overloading.

void sayHi(){
    std::cout << "Hi Stranger!" << std::endl;
}

void sayHi(std::string name){
    std::cout << "Hi " << name << std::endl;
}

int main(void){
    sayHi();
    sayHi("Suresh");
}