#include<iostream>
// 2. Write a function using reference variables as arguments to swap the values of a pair of integers (Lab).
void swap(int &num1, int &num2);

int main(void){
    int num1 = 2;
    int num2 = 5;
    std::cout << "Initially num1=" << num1 << " num2=" << num2 << " " << std::endl;
    swap(num1, num2);
    std::cout << "Finally num1=" << num1 << " num2=" << num2 << " "<< std::endl;
    return 0;
}
void swap(int &num1, int &num2){
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}