#include <iostream>
using namespace std;

int main()
{
    int arr[10] ={22,2,21,97,98,11,24,28,47,21};
    int num,temp;
    cout << "Enter Nth element : \n";
    cin >> num;

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
     for (int i=0;i<=9;i++)
     {
         cout << arr[i] << " "; 
     }
 
    return 0;
}