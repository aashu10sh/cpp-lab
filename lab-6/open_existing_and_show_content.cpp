#include<iostream>
#include<fstream>
int main(){
    std::fstream file("hey.txt", std::ios::in);
    if (!file.is_open()){
        return -1;
    }
    std::string line;
    while(std::getline(file,line)){
        std::cout << line << std::endl;
    }
    file.close();
    return 0;
}