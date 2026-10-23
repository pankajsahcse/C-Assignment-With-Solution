#include <iostream>
using namespace std;

class Student
{
    int rollNo;
    char dob[11];
    int totalMarks;

public:
    Student()
    {
        rollNo = 0;
        dob[0] = '\0';
        totalMarks = 0;
    }

    void accept()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter DOB (DD-MM-YYYY): ";
        cin >> dob;

        cout << "Enter Total Marks: ";
        cin >> totalMarks;
    }

    int getRollNo()
    {
        return rollNo;
    }

    void display()
    {
        cout << rollNo << "\t"
             << dob << "\t"
             << totalMarks << endl;
    }

    ~Student()
    {
        // Destructor
    }
};

int main()
{
    Student s[2];
    Student temp;

    cout << "Enter details of 2 students:\n";

    for (int i = 0; i < 2; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        s[i].accept();
    }

    // Sort by roll number
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 2 - i; j++)
        {
            if (s[j].getRollNo() > s[j + 1].getRollNo())
            {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }

    cout << "\nSorted Student Records:\n";
    cout << "RollNo\  DOB   \   Marks\n";

    for (int i = 0; i < 2; i++)
    {
        s[i].display();
    }

    return 0;
}
