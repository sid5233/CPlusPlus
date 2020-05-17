#include <iostream>
using namespace std;

int main()
{
    int arr[10] ={22,2,21,97,98,11,24,28,47,21};
    for (int i = 0; i < 10; i++)
    {
        if (arr[i]>arr[i+1])
        {
            int temp = arr[i];
            arr[i]= arr[i+1];
            arr[i+1]= temp;
        }
    }
       for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " " ;
    }   
    return 0;
}