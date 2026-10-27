#include<iostream>
#include<map>

using namespace std;
int main()
{
    map<int, string> m;

    m[0] = "pankaj";
    m[1] = "paras";
    m[2] = "IET Pune";

    auto it = m.find(0);

    if(it != m.end())
    {
        cout<<"Found " <<it->second;
    }
    else

    {
        cout<<"Not Found "<<endl;
    }

    return 0;
}
