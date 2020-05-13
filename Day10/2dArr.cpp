#include <iostream>
using namespace std;

int main(){
    int arr[5][5];
    int arr1[2][2]={1,2,3,4};
    int arr2[3][3]={{1,2,3},{3,4,5},{5,6,7}};

    cout << "enter for arr : " << endl                                 ;
    for (int i=0;i<=2;i++)
    {
        for (int j=0;j<=2;j++)
        {
            cout << arr2[i][j] << " ";
        }
    cout << endl;
    } 
    
    return 0;

}