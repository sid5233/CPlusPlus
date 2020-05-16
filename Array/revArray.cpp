#include <iostream>
using namespace std;

int main()
{
    int a[9]= {21,65,81,32,48,12,32,87,12};
    int i;

    for (i = 0; i < 9; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    //reverse order 
    for (i=8;i>=0;i--)
    {
        cout << a[i] << " ";
    }
    return 0;
}