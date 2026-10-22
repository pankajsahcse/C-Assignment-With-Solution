#include <iostream>
using namespace std;

void acceptMatrix(int (*ptr) [3])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout<<"Enter Number :";
            cin>>ptr[i][j];
        }
    }
}

void displayMatrix(int (*ptr) [3])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout<<ptr[i][j]  <<" , " ;
        }
        cout<<endl;

    }
}

void calculateSum(int (*ptr) [3])
{
    int sum = 0;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            sum = sum + ptr[i][j];
        }
    }
    cout<<"Sum of the Array is "<<sum<<endl;
}


void calculateSumEachRow(int (*ptr) [3])
{

    for(int i = 0; i < 3; i++)
    {
        int sum = 0;
        for(int j = 0; j < 3; j++)
        {
            sum = sum + ptr[i][j];
        }
        cout<<"Sum of the Array is "<<sum<<endl;
    }

}

void calculateSumEachColumn(int (*ptr) [3])
{

    for(int i = 0; i < 3; i++)
    {
        int sum = 0;
        for(int j = 0; j < 3; j++)
        {
            sum = sum + ptr[j][i];
        }
        cout<<"Sum of the Array is "<<sum<<endl;
    }

}


void findLargest(int (*ptr) [3])
{
    int maxVal = INT_MIN;
    for(int i = 0; i < 3; i++)
    {

        for(int j = 0; j < 3; j++)
        {
            if(ptr[i][j] > maxVal)
            {
                maxVal = ptr[i][j];
            }

        }
        cout<<"Maxium of the Array is "<<maxVal<<endl;
    }
}

void findSmallest(int (*ptr) [3])
{
    int minVal = INT_MAX;
    for(int i = 0; i < 3; i++)
    {

        for(int j = 0; j < 3; j++)
        {
            if(ptr[i][j] < minVal)
            {
                minVal = ptr[i][j];
            }
        }
        cout<<"Minimum Value of the Array is "<<minVal<<endl;
    }
}

void subtractMatrix(int (*ptr) [3],int (*ptr1) [3])
{
    int resultarr[3][3];

    for(int i = 0; i < 3; i++)
    {

        for(int j = 0; j < 3; j++)
        {
            resultarr[i][j] = ptr[i][j] - ptr1[i][j];
        }
    }
    displayMatrix(resultarr);
}

void multiplyMatrix(int (*ptr)[3], int (*ptr1) [3])
{
    int resultarr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            resultarr[i][j] = 0;

            for (int k = 0; k < 3; k++)
            {
                resultarr[i][j] += ptr[i][k] * ptr1[k][j];
            }
        }
    }
    displayMatrix(resultarr);
}

int main()
{

    int ch;
    int arr[3][3];
    int arr1[3][3];
    do
    {

        cout<<"1. Accept matrix elements from the user.  "<<endl;
        cout<<"2. Display the matrix."<<endl;
        cout<<"3. Calculate the sum of all elements.  "<<endl;
        cout<<"4. Calculate the sum of each row. "<<endl;
        cout<<"5. Calculate the sum of each column. .  "<<endl;
        cout<<"6. Find the largest element. "<<endl;
        cout<<"7. Find the smallest element.  "<<endl;
        cout<<"8. Subtract the second matrix from the first."<<endl;
        cout<<"9. Multiply two matrices.   "<<endl;
        cout<<"10. Exit. "<<endl;

        cin>>ch;

        switch(ch)
        {
        case 1:
        {
            acceptMatrix(arr);
            break;
        }
        case 2:
        {
            displayMatrix(arr);
            break;
        }
        case 3:
        {
            calculateSum(arr);
            break;
        }
        case 4:
        {
            calculateSumEachRow(arr);
            break;
        }
        case 5:
        {
            calculateSumEachColumn(arr);
            break;
        }
        case 6:
        {
            findLargest(arr);
            break;
        }
        case 7:
        {
            findSmallest(arr);
            break;
        }
        case 8:
        {
            acceptMatrix(arr);
            acceptMatrix(arr1);
            subtractMatrix(arr,arr1);

            break;
        }
        case 9:
        {
            acceptMatrix(arr);
            acceptMatrix(arr1);
            multiplyMatrix(arr,arr1);
            break;
        }
        case 10:
        {
            break;
        }
        default :
            {
                cout<<"Invalid Choice"<<endl;
            }
        }

    }
    while(ch != 5);


    return 0;
}
