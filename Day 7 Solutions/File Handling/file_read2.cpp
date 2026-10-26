#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream out("text.txt");

    char ch;

    while(! out.eof())
    {
        ch = out.get();
        cout<<ch;
    }

    out.close();

    return 0;
}
