#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string word;
    cout<<"Enter a Word ";
    cin>>word;

    ofstream out("text.txt");
    out<<word;


    out.close();

    return 0;
}
