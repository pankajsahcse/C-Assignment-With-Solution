#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream fin("text1.1.txt");

    char ch;

    while(fin.get(ch))
    {
        cout<<ch;
    }

    fin.close();

    return 0;
}
