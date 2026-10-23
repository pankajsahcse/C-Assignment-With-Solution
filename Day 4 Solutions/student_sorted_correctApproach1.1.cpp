#include <iostream>
using namespace std;

class Student
{
    int rollNo;
    int totalMarks;

public:
    void accept()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;


        cout << "Enter Total Marks: ";
        cin >> totalMarks;
    }

    void display()
    {
        cout << rollNo << " "

             << totalMarks << endl;
    }

    int getRollNo()
    {
        return rollNo;
    }

    int getTotalMarks()
    {
        return totalMarks;
    }

    ~Student ()
    {
        cout<<"Destructor Called "<<endl;
    }

};

void sortByRoll(Student *s, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (s[j].getRollNo() > s[j + 1].getRollNo())
            {
                Student temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
}



void sortByMarks(Student s[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (s[j].getTotalMarks() > s[j + 1].getTotalMarks())
            {
                Student temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
}

void displayAll(Student s[], int n)
{
    cout << "\nRoll No \tTotal Marks\n";

    for (int i = 0; i < n; i++)
    {
        s[i].display();
    }
}

int main()
{
    Student s[3];

    for (int i = 0; i < 3; i++)
    {
        cout << "\nEnter details of Student " << i + 1 << ":\n";
        s[i].accept();
    }

    sortByRoll(s, 3);
    cout << "\nSorted by Roll Number:";
    displayAll(s, 3);


    sortByMarks(s, 3);
    cout << "\nSorted by Total Marks:";
    displayAll(s, 3);

    return 0;
}
