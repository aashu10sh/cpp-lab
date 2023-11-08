#include<iostream>
#include<fstream>
int main(){
    std::fstream file("hey.txt", std::ios::in);
    if (!file.is_open()){
        return -1;
    }
    std::string line;
    int line_count = 0;
    while(std::getline(file,line)){
        line_count++;
    }
    std::cout << line_count << std::endl;
    file.close();
    return 0;
}