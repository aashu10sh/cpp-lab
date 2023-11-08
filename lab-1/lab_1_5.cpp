#include<iostream>

void sayGreatest(std::string greatest = "Messi"){
    std::cout << "The Greatest of all Time is " << greatest << std::endl;
}

int main(void){
    sayGreatest();
    sayGreatest("Ronaldo");
}