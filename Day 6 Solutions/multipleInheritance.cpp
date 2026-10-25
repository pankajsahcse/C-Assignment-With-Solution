#include <iostream>
using namespace std;

// Base class 1
class Printer
{
public:
    void print()
    {
        cout << "Printing document  " << endl;
    }

    ~Printer()
    {
        cout<<"descturctor of base1"<<endl;
    }
};

// Base class 2
class Scanner
{
public:
    void scan()
    {
        cout << "Scanning document   " << endl;
    }

    ~Scanner()
    {
        cout<<"descturctor of base2"<<endl;
    }
};


class MultifunctionPrinter : public Printer, public Scanner
{
public:
    void photocopy()
    {
        cout << "Photocopying document    " << endl;
    }

    ~MultifunctionPrinter()
    {
        cout<<"descturctor of Derived class"<<endl;
    }
};

int main()
{
    MultifunctionPrinter p;  // object child class

    p.print();   // Base1 Class Mehod call by using derived class obj
    p.scan();   ///Base2 Class Mehod call by using derived class obj
    p.photocopy();  // Derived Class Mehod call by using derived class obj

    return 0;
}
