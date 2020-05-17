#include <iostream>
using namespace std;


int main(){

    int arr[10] ={22,2,21,97,98,11,24,28,47,21};
    
    int lar =arr[0];
    int sec = arr[1];
    for (int i = 0; i < 10; i++)

    {
        if (arr[i] > lar)
        {
            sec = lar;
            lar = arr[i];
        }
        
        
    }
    cout << sec << endl;
    return 0;
}
