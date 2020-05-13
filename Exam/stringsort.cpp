#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main()
{

     clrscr();
    char str[5][20], t[20];
    int i,j;
    cout << "Ente five name : \n";
    for (int i=0; i<5;i++)
    {
        cin >> str[i];
    }
    for (j=1; j<5; j++)
    {
        for (j=1;j<5;j++)
        {
            if (strcmp(str[j-1], str[j]) > 0)
            {
                strcpy (t,str[j-1]);
                strcpy (str[j-1], str[j]);
                strcpy (str[j], t);
            }
        }
    }
    cout << "Names in alphabetical order are : \n";
    for (int i=0;i<5;i++)
    {
        cout <<str[i]<<"\n";
    }

}