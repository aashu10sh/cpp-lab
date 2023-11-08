#include<iostream>
#include<fstream>

int main(){
    std::ofstream newFile("hey.txt");
    if (! newFile.is_open()){
        return -1;
    }
    newFile << "Hello World!, My name is Aashutosh" << std::endl;
    newFile.close();
    return 0;
}