#include<iostream>
// cube of a given number using inline function
inline int cube(int number){
        return number*number*number;
}
int main(void){
    int user_number;
    std::cout<< "Enter Your Number : ";
    std::cin>>user_number;
    std::cout<< cube(user_number) << std::endl;
}
