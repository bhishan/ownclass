#include<iostream>
using namespace std;

class Computer{
    private:
        string deviceType;
        string nameofBrand;
    public:
        Computer(string brandName="lenovo",string typeofDevice="laptop");
        void setBrandName(string brandName);
        void setDeviceType(string typeofDevice);
        string getBrandName();
        string getDeviceType();
        void displayDeviceInfo();
};
