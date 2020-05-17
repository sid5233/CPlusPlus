#include <iostream>
using namespace std;

int main(){
 
    int arr[10] ={22,2,21,68,98,11,24,28,47,21};
    int i,lar;
    lar=arr[0];
    for (i=0;i<10;i++)
    {
        if (arr[i]> lar)
        {
            lar = arr[i];
        }
    }
    cout << lar << endl;

    return 0;
}