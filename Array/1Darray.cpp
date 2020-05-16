#include <iostream>
#include <stdio.h>
#define N 10
using namespace std;

//defining array size using macro is considered as the best practice.

int main()
{
    int arr[N]={1,2,3,4,5,6};
    cout << sizeof(int) << "\n";
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
    
    
    //int arr1[10]={1,0,0,0,0,2,3,0};
    int arr1[10] = {[0]=1,[5]=2,[6]=3};
    int arr2[10] = {1,2,3, [6]=6,[9]=9};

    
}