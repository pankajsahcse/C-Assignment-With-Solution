#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l = {10, 20, 40};

    auto it = l.begin();


    ++it;                // points to 20
    l.insert(it, 15);
    for (int x : l)
        cout<< x << " ";

    return 0;
}
