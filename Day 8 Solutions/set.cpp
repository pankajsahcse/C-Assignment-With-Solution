#include<iostream>
#include<set>
using namespace std;
int main()
{
    int arr[] = {2,1,3,1,2,4,3,5};

    set<int> s(arr,arr+5);



    for(int x : s)
        cout<< x << " ";

    return 0;
}
