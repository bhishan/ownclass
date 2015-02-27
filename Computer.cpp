#include<iostream>
#include "Computer.h"
using namespace std;

Computer::Computer(string brandName,string typeofDevice){
    setBrandName(brandName);
    setDeviceType(typeofDevice);
}

void Computer::setBrandName(string brandName){
    nameofBrand = brandName;
}

void Computer::setDeviceType(string typeofDevice){
    deviceType = typeofDevice;
}

string Computer::getBrandName(){
    return nameofBrand;
}

string Computer::getDeviceType(){
    return deviceType;
}

void Computer::displayDeviceInfo(){
    cout<< "It is a   " << getDeviceType() << "and belongs to  "<< getBrandName()<<endl;
}

