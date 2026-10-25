#include <iostream>
using namespace std;

// abstract class
class Printer
{
public:
    virtual void print() = 0;

    virtual ~Printer()
    {
        cout << "Printer destructor called" << endl;
    }
};

// derived class 1
class DerivedPrinter : public Printer
{
public:
    void print()
    {
        cout << "Derived printer is called" << endl;
    }

     ~DerivedPrinter()
    {
        cout << "DerivedPrinter destructor called" << endl;
    }
};

// derived class 2
class LaserPrinter : public Printer
{
public:
    void print()
    {
        cout << "Laser printer is called" << endl;
    }
};

int main()
{

/*
    Printer *p = new DerivedPrinter;  // polymorphism
    p -> print();
    delete p;
    */

    DerivedPrinter dp1; // Inheritance
    LaserPrinter lp1; // Inheritance

    dp1.print();
    lp1.print();

    return 0;
}
