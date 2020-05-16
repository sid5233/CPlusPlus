#include <iostream>
using namespace std;

int main(){
    int arr[10]={1,8,35,0,8,13,54,8,6};
    int count=0,no=8;
    for (int i=0;i<10;i++)
    {
        if (arr[i]==no)
        {
            count++;
        }
    }
     cout << count << endl;

return 0;
}