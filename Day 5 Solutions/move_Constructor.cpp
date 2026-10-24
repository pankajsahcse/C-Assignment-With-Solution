#include<iostream>
using namespace std;

class MyArray
{
    int len;
    int *arr;
public :
    MyArray()
    {
        cout<<"Default Constructor"<<endl;
        len = 5;
        arr = new int[len];
    }

    MyArray(int l)
    {
        cout<<"Parameter Constructor"<<endl;
        len = l;
        arr = new int[len];
    }

    ~ MyArray()
    {
        cout<<"Destructor Called"<<endl;
        delete arr;
    }

    MyArray(MyArray & m)
    {
        len = m.len;
        arr = new int[len];
        for(int i = 0; i <len; i++)
        {
            arr[i] = m.arr[i];
        }
        cout<<"Copy Constructor  Called"<<endl;
    }

    MyArray(MyArray && m)
    {
        len = m.len;
        arr =  m.arr;
        m.arr = nullptr;
        cout<<"Move Constructor  Called"<<endl;
    }

    void accept()
    {
        for(int i = 0; i < len; i++)
        {
            cout<<"Enter Number:"<<endl;
            cin>>arr[i];
        }
        cout<<endl;
    }
    void display()
    {
        for(int i = 0; i < len; i++)
        {
            cout<<arr[i] <<" ";
        }
        cout<<endl;
    }

};

int main()
{
    MyArray  obj1(3);
    obj1.accept();
    obj1.display();

    MyArray obj2 = std:: move(obj1); // Move Constructor

    MyArray obj3(obj2);

    obj2.display();
    //   obj1.display(); // Program will be crashed becouse already this pointer is nullptr

    obj3.display(); // Copy Constructor, All value of obj2 will be inside the obj3
    return 0;

}


