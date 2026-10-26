#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream out("text1.1.txt");

    string word;

    cout<<"Enter a sentances : for stop type 'end' ";

  while(1)
  {
      cin>>word;
      if(word == "end")
      {
         break;
      }
     out<<word;
     out<<" ";
  }

    out.close();

    return 0;
}
