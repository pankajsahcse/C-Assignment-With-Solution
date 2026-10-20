
#include <iostream>
using namespace std;

int main()
{

    //  If statement
    int num ;

    cout << "Enter a Number" << endl;
    cin>>num;
    if (num > 0)
    {
        cout << "Number is positive" << endl;
    }

    //  If-else if-else statement
    int marks ;

    cout << "Enter a Marks" << endl;
    cin>>marks;

    if (marks >= 75)
    {
        cout << "Distinction" << endl;
    }
    else if (marks >= 40)
    {
        cout << "Pass" << endl;
    }
    else
    {
        cout << "Fail" << endl;
    }

    //  Switch statement
    int day = 3;

    switch (day)
    {
    case 1:
        cout << "Monday" << endl;
        break;

    case 2:
        cout << "Tuesday" << endl;
        break;

    case 3:
        cout << "Wednesday" << endl;
        break;

    default:
        cout << "Invalid day" << endl;
    }

    return 0;
}
