#include<iostream>
#include "Computer.h"
using namespace std;

int main(){
    string deviceBrand;
    string typeofDevice;

    Computer computers[5];

    for(int i = 0; i < 5; i++){
        cout<< "Enter the brand of your computer for position "<< i+1<<endl;
        getline(cin,deviceBrand);

        cout<< "Enter the type of computer for position "<< i+1<<endl;
        getline(cin,typeofDevice);

        Computer objectHolder(deviceBrand, typeofDevice);

        computers[i] = objectHolder;
    }

    for(int i = 0; i < 5; i++){
        computers[i].displayDeviceInfo();
    }
}

