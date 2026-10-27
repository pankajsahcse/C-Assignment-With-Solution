#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

int main()
{
    array<int,5> arr = {10,20,30,40,50};

    auto it = find(arr.begin(),arr.end(), 360);

    if(it != arr.end())
    {
        cout<<"Element found "<<endl;
    }
    else
    {
        cout<<"Elem not Found"<<endl;
    }

    return 0;
}
