#include <iostream>
using namespace std;


int main(){

    int arr[10] ={22,2,21,9,98,91,24,28,47,21};
    
    int lar =arr[0];
    int sec = arr[1];
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > lar)
        {
            sec = lar;
            lar = arr[i];
        }
            else if (arr[i] > sec && arr[i] != lar)
        {
            sec = arr[i];
        }

    }
    cout << sec << endl;
    return 0;
}
