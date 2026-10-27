#include<iostream>
using namespace std;

template <typename T>
T mymax(T x, T y)
{
    return x > y ? x : y;
}

int main()
{
    cout<<"My Max is "<< mymax<int>(8,9) <<endl;
    cout<<"My Charcter Max is "<< mymax<char>('p','q')<<endl;
}
