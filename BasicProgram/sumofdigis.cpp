#include <iostream>
using namespace std;
int main(){
    int num;
    int rem,sum=0,rev;

    cout << "Enter num";
    cin >> num;

    while (num>0)
    {    
        rem = num%10;
        sum = sum + rem;
        num = num / 10;
    }
    cout << sum;
return 0;
}

