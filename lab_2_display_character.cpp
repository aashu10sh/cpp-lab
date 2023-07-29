#include<iostream>

int main(void){
    char character;
    std::cout << "Enter Your Character : ";
    std::cin>>character;
    std::cout<<"Characters value in ASCII is : ";
    // print the character's ASCII value
    std::cout << int(character) << std::endl;

}