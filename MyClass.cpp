#include<iostream>
#include<string>
#include "MyClass.h"

using namespace std;

MyClass::MyClass()
{
    //ctor
    //getmsg();
    //cout<< "This is MyClass constructor"<< endl;
}

MyClass::~MyClass()
{
    //dtor
    cout<< "This is MyClass destructor"<< endl;
}

void MyClass::getmsg(){
            cin>> this->msg;
        }

void MyClass::printmsg(){
            cout<< this->msg << endl;
        }
