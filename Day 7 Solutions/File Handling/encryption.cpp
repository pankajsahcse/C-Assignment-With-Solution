#include<iostream>
#include<fstream>
using namespace std;

int main()
{

//    ofstream f1("alternate.txt");
//
//    f1<<"hello good morning alternate"<<endl;

    ifstream f1("alternate.txt");

    char ch;
    int i = 1;

    while(f1.get(ch))
    {
        if(i % 2 != 0)
        {
            cout<<ch <<endl;
        }
        i++;
    }




    return 0;
}
