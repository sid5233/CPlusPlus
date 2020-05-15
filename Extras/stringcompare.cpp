#include <iostream>
using namespace std;

int main()
{
    char str[20],str1[20],i=0,j=0,flag;
    cout << "Enter string one : \n";
    cin >> str;
    cout << "Enter string two : \n";
    cin >> str1;
    while (str[i]!='\0')
    {
        i++;
    }
    while (str1[j]!='\0')
    {
        j++;
    }
    if (i!=j)
    {
        flag =0;
    }
    else
    {
        for (i=0,j=0;str[i]!='\0',str1[j]!='\0';i++,j++)
        {
            if (str[i]==str1[j])
            {
                flag = 1;
            }
        }
    }
    if (flag == 0 )
        {
            cout << "The string is not equal.\n ";
        }
    else
        {
            cout << " The string is equal.\n";
        }
}