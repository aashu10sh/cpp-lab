#include<iostream>

template <typename T1,typename T2>
class Main{
    private:
        T1 data1;
        T2 data2;
    public:
    Main(T1 data1, T2 data2) : data1(data1), data2(data2){

    }
    void getData(){
        std::cout << "data 1" << data1 << std::endl;
        std::cout << "data 2" << data2 << std::endl;
    }
};

int main(void){
    Main<int,float> data1(21,3.2);
    data1.getData();
    Main<std::string, char> data2("hey",'c');
    data2.getData();

}