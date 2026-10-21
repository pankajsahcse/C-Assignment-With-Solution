#include <iostream>
using namespace std;

void sum(int,int);

int main()
{
    int a;
    int b;
    sum(a,b);
}

void sum(int a,int b)
{
    int s =0;
    cout<<"Enter two number"<<endl;
    cin>>a;
    cin>>b;
    s =a+b;
    cout<<"Total sum is : "<<s<<endl;
}
