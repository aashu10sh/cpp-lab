#include<iostream>

class Lecturer{
protected:
    int id;
    std::string name;
public:
    Lecturer(int id, std::string name){
        this->id = id;
        this->name = name;
    }
};

class PartTime : public Lecturer{
private :
    float pay_per_hr;
public:
    PartTime(int id, std::string name, float pay_per_hr) : Lecturer(id, name){
        this->pay_per_hr = pay_per_hr;
    }
    void getData(){
        std::cout << "." << this->id  << " " << this->name << "Makes" << this->pay_per_hr << std::endl;
    }
    void setData(int id, std::string name, float pay_per_hr){
        this->id = id;
        this->name = name ;
        this->pay_per_hr = pay_per_hr;
    };
};


class FullTime : public Lecturer{
private:
    float pay_per_month;
public:
    FullTime(int id, std::string name, float pay_per_month) : Lecturer(id, name) {
        this->pay_per_month = pay_per_month;
    }
     void getData(){
        std::cout << "." << this->id  << " " << this->name << "Makes" << this->pay_per_month << std::endl;
    }
    void setData(int id, std::string name, float pay_per_month){
        this->id = id;
        this->name = name ;
        this->pay_per_month = pay_per_month;
    };

};

int main(void){
    FullTime madhu(1, "Madhu Sudhan Bhusal",3000);
    madhu.getData();
    madhu.setData(2, "Madhu Sudhan Bhusal",40000);
    madhu.getData();
    PartTime prakash(3,"Prakash",4000);
    prakash.getData();
    prakash.setData(4,"Prakash Khanal",5000);
    prakash.getData();
}