#include<iostream>
#include<unordered_set>

using namespace std;

int main()
{
    int arr[] = {1,2,1,3,1,4,2};

    unordered_multiset<int> ums(arr, arr+7);

    cout<<"Frequency of 1 is :"<<ums.count(1)<<endl;
    cout<<"Frequency of 2 is :"<<ums.count(2)<<endl;
    cout<<"Frequency of 3 is :"<<ums.count(3)<<endl;
    cout<<"Frequency of 4 is :"<<ums.count(4)<<endl;


    return 0;
}
