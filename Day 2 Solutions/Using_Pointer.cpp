#include<iostream>
using namespace std;
int main()
{

    int val = 10;

    cout<<"value of: "<<val<<endl;
    cout<<"value for address: "<<&val<<endl;

    int *ptr = &val;
    *ptr = 30;


    cout<<"value of: "<<val<<endl;
    cout<<"value for address: "<<&val<<endl;
    cout<<"ptr: "<<ptr<<endl;

    cout<<"value of ptr "<< *ptr <<endl;

    cout<<"Address of ptr: "<< &ptr <<endl;

    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(val)<<endl;
    cout<<sizeof(&val)<<endl;

    return 0;
}
