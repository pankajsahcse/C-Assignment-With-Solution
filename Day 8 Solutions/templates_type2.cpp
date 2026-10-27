#include<iostream>
using namespace std;

template <class type1, class type2>
void myfun(type1 x, type2 y)
{
    cout<<"First = "<<x << " Second = "<<y<<endl;
}

int main()
{
    myfun(15,"Pankaj");
    myfun("Paras ", 20);
}
