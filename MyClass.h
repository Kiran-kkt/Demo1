#include<iostream>
#include<string>
#ifndef MYCLASS_H
#define MYCLASS_H

using namespace std;

class MyClass
{
    public:
        MyClass();
        virtual ~MyClass();

        void getmsg();

        void printmsg();
    protected:

    private:
        string msg;
};

#endif // MYCLASS_H
