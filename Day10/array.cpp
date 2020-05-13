#include <iostream>
using namespace std;

int main(){

    int arr[3]= {1,2,3};
    double arr1[4];
    arr1[0]=1.456;
    arr1[1]=23.51;
    char arr2[5];
    cout << "Enter 5 char : " << endl;

    for (int i=0;i<=5;i++){
        cin >> arr2[i];
    }
    for (int i=0;i<=5;i++)
     cout << arr2[i];
 
    return 0;
}