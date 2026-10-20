
#include <iostream>
using namespace std;

int main()
{

    // Break Statement
    cout << "Break Statement " << endl;

    for (int i = 1; i <= 5; i++)
    {
        if (i == 3)
        {
            break;
        }
        cout << i << " ";
    }

    cout  << endl;


    //  Continue Statement
    cout << "Continue Statement" << endl;

    for (int i = 1; i <= 5; i++)
    {
        if (i == 3)
        {
            continue;
        }
        cout << i << " ";
    }

    cout  << endl;


    //  Return Keyword
    cout << "Return Keyword" << endl;

    for (int i = 1; i <= 5; i++)
    {
        if (i == 4)
        {
            return 0;
        }
        cout << i << " ";
    }


    return 0;
}
