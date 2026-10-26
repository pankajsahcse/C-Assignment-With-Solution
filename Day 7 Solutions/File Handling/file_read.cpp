#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream out("text.txt");

    char ch;

    while(out)
    {
        out>>ch;
        cout<<ch;
    }

    out.close();

    return 0;
}
