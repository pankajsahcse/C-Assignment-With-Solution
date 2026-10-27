#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct Student
{
    string name;
    int rollno;
    int marks;
};
vector <Student>student;

void addStudent()
{
    Student s;
    cout<<"Enter Student Name"<<endl;
    cin>>s.name;
    cout<<"Enter Student Roll Number"<<endl;
    cin>>s.rollno;
    cout<<"Enter stud marks"<<endl;
    cin>>s.marks;

    student.push_back(s);
}

void displayStudents()
{
    for(const auto &s : student)
    {
        cout<<"Name"<<s.name<<endl;
        cout<<"RollNO"<<s.rollno<<endl;
        cout<<"Marks"<<s.marks<<endl;
        cout<<endl;
    }

}


void sortByMarks()
{
    sort(student.begin(),student.end(),[](const Student &a,const Student &b)
    {
        return a.marks>b.marks;
    }
        );

}

void searchStudent()
{
    int roll;
    cout<<"Enter student rollno"<<endl;
    cin>>roll;

    auto it = find_if(student.begin(),student.end(),[roll](Student &a)
    {
        return a.rollno= roll;
    }
                     );

    if(it!= student.end())
    {
        cout<<"Name"<<it->name<<endl;
        cout<<"RollNO"<<it->rollno<<endl;
        cout<<"Marks"<<it->marks<<endl;
    }
}

void displayTop3Scorers()
{

    sortByMarks();

    for(int i = 0;i<3;i++)
    {
        cout<<student[i].name<<endl;
        cout<<student[i].rollno<<endl;
        cout<<student[i].marks<<endl;
        cout<<endl;
    }

}

int main()
{

    int choice;
    do
    {
        cout << "\n===== STUDENT RECORD MANAGEMENT =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Sort Students By Marks\n";
        cout << "4. Search Student By Roll Number\n";
        cout << "5. Display Top 3 Scorers\n";
        cout << "6. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addStudent();
            break;

        case 2:
            displayStudents();
            break;

        case 3:
            sortByMarks();
            break;

        case 4:
            searchStudent();
            break;

        case 5:
            displayTop3Scorers();
            break;

        case 6:
            cout << "\nThank You!\n";
            break;

        default:
            cout << "\nInvalid Choice!\n";
        }

    }
    while (choice != 6);

    return 0;
}
