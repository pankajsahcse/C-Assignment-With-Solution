#include<iostream>
#include<map>

using namespace std;
int main()
{
    multimap<int, string> mm;
    mm.insert({10,"Pankaj"});
    mm.insert({20,"pooja"});
    mm.insert({10,"Mohini"});

    for(auto m : mm)
    {
        cout<<m.first <<" : " << m.second<<endl;
    }
//
//    for(auto i : mm)
//    {
//        auto it = mm.find(10);
//        cout <<it->first <<" : " <<it->second<<endl;
//
//    }



    return 0;
}
