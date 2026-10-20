
#include <iostream>
using namespace std;

int main()
{

    // For Loop
    cout << "For Loop " << endl;

    for (int i = 1; i <= 5; i++)
    {
        cout << i << " ";
    }

    cout << endl;


    // While Loop
    cout << "While Loop " << endl;

    int j = 1;

    while (j <= 5)
    {
        cout << j << " ";
        j++;
    }

    cout << endl;


    //  Do While Loop
    cout << "Do-While Loop " << endl;

    int k = 1;

    do
    {
        cout << k << " ";
        k++;
    }
    while (k != 5);



    return 0;
}
