#include<iostream>
using namespace std;
class Student
{
public:
    void fun(int num)
    {
        if(num<0)
        {
            throw num;
        }
        else
        {
            cout<< "Num " <<num <<endl;
            throw 'p';

        }
    }

};


int main()
{
    Student obj;
    try
    {
        obj.fun(-8);
    }
    catch(int num)
    {
        cout<<"Exception Generated "<<num<<endl;
    }
    catch(char ch)
    {
        cout<<"Charcter exception generated "<<endl;
    }

    return 0;
}
