#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> dq;

    dq.push_back(20);
    dq.push_back(30);
    dq.push_front(10);

    for(int x : dq)
    {
        cout<< x << " ";
    }
    return 0;
}
