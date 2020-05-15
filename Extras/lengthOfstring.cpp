#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string str;
    cout << " Enter a string : \n";
    getline(cin,str);
    int count=0;
    for (int i=0;str[i]!='\0';i++ )
    {
        count++;
    }
    cout << "\ncount is : " << count;
}