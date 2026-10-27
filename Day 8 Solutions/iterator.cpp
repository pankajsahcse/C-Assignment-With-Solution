#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> nums = {10,20,50,30,60};

    /// Iterator
    vector<int>::iterator it;

    // Traverse
    cout<<"Before Sort "<<endl;
    for(it = nums.begin(); it != nums.end(); it++)
    {
        cout<< *it << " " ;
    }

    sort(nums.begin(), nums.end());

    // Traverse
    cout<<"\nAfter Sort "<<endl;
    for(it = nums.begin(); it != nums.end(); it++)
    {
        cout<< *it << " ";
    }

    /// Using enhance for loop

    cout<<"\nUsing enhance for loop"<<endl;
    for( int x : nums)
    {
        cout <<x << " ";
    }

    return 0;

}
