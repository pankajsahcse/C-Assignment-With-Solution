#include<iostream>
#include<fstream>
using namespace std;

int strlen(string s)
{
    int len;
    int i ;
    while(s[i] != '\0')
    {
        i++;
        len ++;
    }
    return len;
}

int main()
{

//    ofstream f1("encryption_dec.txt");
//
//
//
//    string data = "hello good morning encryption data";
//    int lengthofstr =  strlen(data);
//
//
//    for(int i = 0; i < lengthofstr; i++)
//    {
//        char ch = data[i];
//        f1<<char(ch+2);
//    }
//


    ifstream f1("encryption_dec.txt");


    while(! f1.eof() )
    {
        char ch = f1.get() - 2 ;

        cout<<ch;
    }



    return 0;
}
