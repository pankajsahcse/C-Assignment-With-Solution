// Write a menu-driven C++ program to perform the following operations on a 3 × 3 matrix.

#include<iostream>
using namespace std;

void acceptMatrix(int (*ptr)[3], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <n; j++)
        {
            cout<<"Enter the Value for "<<(i+1) << " and " << (j + 1) <<endl;
            cin>>ptr[i][j];
        }
    }
}

void displayMatrix(int (*ptr)[3], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <n; j++)
        {

            cout<<ptr[i][j] <<" " ;
        }
        cout<<endl;
    }
}

void displayMainDiagonal(int (*ptr)[3], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <n; j++)
        {
            if(i == j )
            {
                cout<<ptr[i][j] <<" " ;
            }
        }

    }
    cout<<endl;
}

void calculateMainDiagonalSum(int (*ptr)[3], int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <n; j++)
        {
            if(i == j )
            {
                sum = sum + ptr[i][j];
            }
        }
    }
    cout<<"Diagonal Sum is "<<sum<<endl;
}

void transposeMatric(int (*ptr)[3], int n)
{
    int arr[3][3];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <n; j++)
        {
            arr[j][i] = ptr[i][j];
        }

    }
    displayMatrix(arr,3);
}

bool identityMatrix(int (*ptr)[3], int n)
{
    bool isIdentity = true;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <n; j++)
        {
            if( i == j && ptr[i][j] != 1 )
            {
                isIdentity = false;
            }
            else if(i != j && ptr[i][j] != 0)
            {
                isIdentity = false;
            }
        }
    }
    return isIdentity;
}

void checkSymmetric(int (*ptr)[3], int n)
{
    bool isSymmetric = true;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(ptr[i][j] != ptr[j][i])
            {
                isSymmetric = false;
                break;
            }
        }

        if(isSymmetric == false)
        {
            break;
        }
    }

    if(isSymmetric)
    {
        cout << "Matrix is Symmetric" << endl;
    }
    else
    {
        cout << "Matrix is not Symmetric" << endl;
    }
}

void countPosNegZero(int (*ptr)[3], int n)
{
    int pos= 0, neg = 0, zero=0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <n; j++)
        {
            if(ptr[i][j] > 0)
            {
                pos ++;
            }
            else if(ptr[i][j] < 0)
            {
                neg ++;
            }
            else
            {
                zero++;
            }
        }

    }
    cout<<"Positive = "<<pos <<"Negative = "<<neg <<"Zero = "<<zero <<endl;
}

void searchElement(int (*ptr)[3], int n)
{
    int key;
    bool found = false;

    cout << "Enter element to search: ";
    cin >> key;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(ptr[i][j] == key)
            {
                cout << "Element found at position "<< i << ", " << j << endl;
                found = true;
            }
        }
    }

    if(!found)
    {
        cout << "Element not found" << endl;
    }
}

void replaceElement(int (*ptr)[3], int n)
{
    int row, col, value;

    cout << "Enter row number (1-3): ";
    cin >> row;

    cout << "Enter column number (1-3): ";
    cin >> col;

    cout << "Enter new value: ";
    cin >> value;

    if(row >= 1 && row <= n && col >= 1 && col <= n)
    {
        ptr[row - 1][col - 1] = value;

        cout << "Element replaced successfully" << endl;
        displayMatrix(ptr, n);
    }
    else
    {
        cout << "Invalid position" << endl;
    }
}

void interchangeFirstAndThirdRows(int (*ptr)[3], int n)
{
    for(int j = 0; j < n; j++)
    {
        int temp = ptr[0][j]; // first row in temp
        ptr[0][j] = ptr[2][j]; // put 3rd row at 1th row
        ptr[2][j] = temp;  // put 3rd row our 1st row
    }

    cout << "After interchanging first and third row " << endl;
    displayMatrix(ptr, n);
}

void interchangeFirstAndThirdColumns(int (*ptr)[3], int n)
{
    for(int i = 0; i < n; i++)
    {
        int temp = ptr[i][0]; /// first column in temp
        ptr[i][0] = ptr[i][2]; /// put 3rd column at 1th row
        ptr[i][2] = temp;  /// put 3rd column our 1st row
    }

    cout << "After interchanging first and third column " << endl;
    displayMatrix(ptr, n);
}

int main()
{
    int ch;
    int arr[3][3] ;
    int n = 3;

    do
    {
        cout<<"1. Accept matrix elements from the user. "<<endl;
        cout<<"2. Display the main diagonal elements.  "<<endl;
        cout<<"3. Calculate the sum of the main diagonal elements.. "<<endl;
        cout<<"4. Find the transpose of the matrix. "<<endl;
        cout<<"5. Check whether the matrix is an identity matrix. "<<endl;
        cout<<"6. Check whether the matrix is a symmetric matrix "<<endl;
        cout<<"7. Count the positive, negative, and zero elements. . "<<endl;
        cout<<"8. Search for a given element in the matrix.  "<<endl;
        cout<<"9. Replace a specified element at a given position. "<<endl;
        cout<<"10. Interchange the first and third rows."<<endl;
        cout<<"11.  Interchange the first and third columns.  "<<endl;
        cout<<"12. Exit."<<endl;
        cout<<"Enter Choice "<<endl;
        cin>>ch;

        switch(ch)
        {
        case 1:
        {
            acceptMatrix(arr,n);
            displayMatrix(arr,n);
            break;
        }
        case 2:
        {
            displayMainDiagonal(arr,3);
            break;
        }
        case 3:
        {
            calculateMainDiagonalSum(arr,3);
            break;
        }
        case 4:
        {
            transposeMatric(arr,3);
            break;
        }
        case 5:
        {
            bool result= identityMatrix(arr,3);
            result ? cout<<"Identity Matrix "<<endl :

                         cout<< "Not Identity Matrix" <<endl;
            break;
        }
        case 6:
        {
            checkSymmetric(arr,3);
            break;
        }
        case 7:
        {
            countPosNegZero(arr,3);
            break;
        }
        case 8:
        {
            searchElement(arr,3);
            break;
        }
        case 9:
        {
            replaceElement(arr,3);
            break;
        }
        case 10:
        {
            interchangeFirstAndThirdRows(arr,3);
            break;
        }
        case 11:
        {
            interchangeFirstAndThirdColumns(arr,3);
            break;
        }


        case 12:
        {
            break;
        }
        default :
        {
            cout<<"Invalid Choice "<<endl;
        }
        }

    }
    while(ch != 12);

    return 0;
}
