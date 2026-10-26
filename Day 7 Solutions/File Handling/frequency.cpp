#include<iostream>
#include<fstream>
using namespace std;

int main()
{

//    ofstream f1("frequency.txt");

// f1<<"hello good morning "<<endl;

    ifstream f1("frequency.txt");

     if(!f1)
    {
        cout << "File not found" << endl;
        return 1;
    }

    int check[256] = {0};
    char ch;

    while(f1.get(ch))
    {
        if((ch>='0' && ch <='9') || (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            check[ch]++;
        }
    }

    for(int i = 0; i < 255; i++)
    {
        if(check[i] != 0)
        {
            cout<<(char)i<< " : "<<check[i] <<endl;
        }
    }

    return 0;
}
