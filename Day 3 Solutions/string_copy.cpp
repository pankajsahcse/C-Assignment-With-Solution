#include <iostream>
using namespace std;


// String comparision
int compstr(char *str1,char *str2)
{
    int i =0;
    while(*str1 != '\0' && *str2 != '\0'  )
    {
        if(str1[i] != str2[i] )
        {
            break;
        }
        i++;
    }
    return str1[i]-str2[i];
}

// String concatenation  with version 1

char * myStringConcatenate(char *dest, char *source)
{
    int i, j;
    for(i = 0; dest[i] != '\0'; i++);

    for(j = 0; source[j] != '\0'; j++)
    {
        dest[i] = source[j];
    }
    dest[i] = '\0';

    return dest;
}

// concatenate with version 2
char * mystrconcat(char * dest, char * source)
{
    char * add = dest;
    while(*dest++);
    dest = dest - 1;
    while(*dest ++ = *source++);
    return add;
}

// copy String one to another
char* copyString(char *dest,  char *source)
{
    char *add = dest;
    while ((*dest++ = *source++) != '\0');
    return add;
}

// findout the string length version 1

int mystrlength(char *s)
{
    int length = 0;
    int i ;
    for(i = 0; s[i] != '\0'; i++)
    {
        length = length + 1;
    }
    return length;
}

// findout the string length version 2

int mystrlen(char * s)
{
    int lenth;
    for(lenth = 0; s[lenth] != '\0'; lenth++);
    return lenth;
}


int main()
{
    char str1[100], str2[100];
    int ch ;

    do
    {

        cout<<"1.String comparison  "<<endl;
        cout<<"2.String concatenate "<<endl;
        cout<<"3.String copy  "<<endl;
        cout<<"4.String length"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>ch;

        switch(ch)
        {
        case 1:
        {
            cout << "Enter a string: ";
            cin>>str1;
            cout << "Enter a string: ";
            cin>>str2;

            cout<<"The difference is :"<<compstr(str1,str2)<<endl;


            break;
        }

        case 2:
        {

            cout << "Enter a string: ";
            cin>>str1;
            cout << "Enter a string: ";
            cin>>str2;
            cout<<"After Concatenate our string is " <<mystrconcat(str1, str2)<<endl;
            cout<<"After Concatenate our string is " <<myStringConcatenate(str1, str2)<<endl;
            break;
        }

        case 3:
        {
            cout << "Enter a string: ";
            cin>>str1;

            copyString(str2, str1);

            cout << "Copied string: " << str2 << endl;
            break;
        }
        case 4:
        {

            cout << "Enter a string: ";
            cin>>str1;

            cout<<"Our String Length is  by version 1 " <<mystrlength(str1)<<endl;
            cout<<"Our String Length is  by version 2 " <<mystrlen(str1)<<endl;

            break;
        }
        case 5:
        {
            break;
        }
        }

    }
    while(ch != 5);


    return 0;
}
