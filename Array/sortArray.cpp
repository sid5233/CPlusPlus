#include <iostream>
using namespace std;

int main()
{

    int arr[10] = {12,68,12,74,96,129,43,79,25,46}; 
    int temp;
    for (int j = 0; j <=9; j++)
    {
    
      for (int i=0;i<=9;i++)
    {
        if (arr[i] > arr[j+1])
        {
            temp = arr[i];
            arr[i]= arr[j+1];
            arr[j+1]=temp;
        }
        }   
    } 
    for (int j=0;j<=9;j++)
    {
        cout << arr[j] << " ";
    }
    
    return 0;

}