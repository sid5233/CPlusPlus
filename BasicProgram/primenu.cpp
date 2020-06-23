#include <iostream>
using namespace std;
int main(){
int num,i;
int count = 0;
    cout << "enter num : ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        if (num%i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        cout << "Num is prime.";
    }
    else
    {
        cout << "Not prime.";
    }
    
return 0;
}