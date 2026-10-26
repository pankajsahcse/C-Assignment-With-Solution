
#include<iostream>
#include<exception>

using namespace std;
class MyException : public exception
{

public:
    const char * what() const noexcept override
    {
        return "Its my Excpetion";
    }

};

class Bank
{

    int bal;
public:
    Bank(int amt)
    {
        if(amt < 0)
        {
            throw MyException();
        }
        else
        {
            cout<<"Account created:"<<endl;
        }
    }
};

int main()

{

    try
    {
        Bank b(-10);
    }
    catch(MyException &e)

    {
        cout<<"Exception Generate "<<e.what() <<endl;
    }

    return 0;
}
