//INCOMPLETE

#include <iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

int main()
{
    int i,j=0,k=0;
    char str[100],str1[10][20],word[20];
    cout << "enter any string : ";
    cin.getline(str,sizeof(str));

    for (i=0;str[i]='\0';i++)
    {
        if (str[i]= ' ')
        {
            str1[k][j] = '\0';
            k++;
            j=0; 
        }
        else
        {
            str1[k][j]=str[i];
            j++;
        }
    }
    
        
}