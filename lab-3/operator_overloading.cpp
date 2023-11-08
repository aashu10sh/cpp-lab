#include<iostream>
class Imaginary{
    private:
        int real;
        int imaginary;
    public:

    Imaginary(int _real, int _imaginary){
        real = _real;
        imaginary = _imaginary;
    }
    Imaginary operator+ (Imaginary other){
        return Imaginary(real+ other.real,imaginary + other.imaginary);
    }
    Imaginary operator- (Imaginary other){
        return Imaginary(real-other.real,imaginary-other.imaginary );
    }
    Imaginary operator++(int ){
        real++;
        imaginary++;
        return *this;
    }
    Imaginary operator--(int ){
        real--;
        imaginary--;
        return *this;
    }
    Imaginary operator++(){
        real++;
        imaginary++;
        return *this;
    }
    Imaginary operator--(){
        real--;
        imaginary--;
        return *this;
    }
    void printData(){
        std::cout << "Real : " << real << " Imaginary : "<< imaginary << std::endl;
    }

};

int main(void){
    Imaginary i1(12,1);
    Imaginary i2 (21,1);
    Imaginary i3 = i1 + i2;
    i3.printData();
    Imaginary i4 = i3++;
    Imaginary i7 = ++i4;
    i4.printData();
    i7.printData();
}