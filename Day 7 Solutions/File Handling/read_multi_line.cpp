#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char str[20];

    cout<<"Enter Sentences:"<<endl;

    cin.read(str,20);
    cout<<str;

    int a = 0;
    int i ;

    while(str[i] != '\0')
    {
        if(str[i] == 'a') a++;
        i++;
    }

    cout<<"No of a in this word "<<a<<endl;

    return 0;
}
