#include <iostream>
using namespace std;

class Student
{
    int rollNo;
    int dobYear;
    int totalMarks;

public:
    Student()
    {
        rollNo = 0;
        dobYear = 0;
        totalMarks = 0;
    }

    void accept()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter dobYear (YYYY): ";
        cin >> dobYear;

        cout << "Enter Total Marks: ";
        cin >> totalMarks;
    }

    ~Student()
    {
        // Destructor
    }

    int getRollNo()
    {
        return rollNo;
    }

    int getTotalMarks()
    {
        return totalMarks;
    }

    int getYear()
    {
        return dobYear;
    }

    void sortedByRollNo(Student *s, int n)
    {
        // Sort by roll number
        for (int i = 0; i < n -1; i++)
        {
            for (int j = 0; j < n- i- 1; j++)
            {
                if (s[j].rollNo > s[j + 1].rollNo)
                {
                    Student temp = s[j];
                    s[j] = s[j + 1];
                    s[j + 1] = temp;
                }
            }
        }
    }

    void display()
    {
        cout << rollNo << "\t"
             << dobYear << "\t"
             << totalMarks << endl;
    }

};

int main()
{
    Student s[3];
    Student temp;

    cout << "Enter details of 3 students:\n";

    for (int i = 0; i < 3; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        s[i].accept();
    }

    cout << "\nSorted Student Records:\n";

    temp.sortedByRollNo(s,3);

    for (int i = 0; i < 3; i++)
    {
        s[i].display();
    }

    return 0;
}
