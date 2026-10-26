#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream out("text.txt");

    char ch;

    while(out.get(ch))
    {
        cout<<ch;
    }

    out.close();

    return 0;
}
