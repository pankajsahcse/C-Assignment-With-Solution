
#include <iostream>
using namespace std;

// Abstract base class
class Printer
{
public:
    // Pure virtual function
    virtual void print() = 0;

    // Virtual function
    virtual void displayType()
    {
        cout << "This is a computer printer." << endl;
    }

    // Virtual destructor
    virtual ~Printer()
    {
        cout << "Printer destructor called" << endl;
    }
};

// Derived class 1
class DerivedPrinter : public Printer
{
public:
    void print() override
    {
        cout << "Derived printer is printing " << endl;
    }

    void displayType()
    {
        cout << "Derived Printer Display" << endl;
    }

    ~DerivedPrinter() override
    {
        cout << "DerivedPrinter destructor called" << endl;
    }
};

// Derived class 2
class LaserPrinter : public Printer
{
public:
    void print() override
    {
        cout << "Laser printer is printing." << endl;
    }

    void displayType() override
    {
        cout << "Laser Printer called " << endl;
    }

    ~LaserPrinter() override
    {
        cout << "LaserPrinter destructor called" << endl;
    }
};

int main()
{
    Printer * p = new DerivedPrinter;

    cout << "Derived Printer:" << endl;

    p->displayType();
    p->print();

    delete p;

    cout << endl;

    cout << "Laser Printer:" << endl;

    Printer* p2 = new LaserPrinter;
    p2->displayType();
    p2->print();

    delete p2;

    return 0;
}
