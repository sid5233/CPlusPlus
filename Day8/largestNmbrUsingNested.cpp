#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout << "Enter three nmbers : ";
    cin >> a >> b >> c;
    if (a>=b)
    {
        if (a>=c)
            cout << "The largest nmbr is : " << a;
        else
            cout << "The largest nmbr is : " << c;
    }
    else
    {
         if (b>=c)
            cout << " The largest nmbr is : " << b;
        else
            cout << "The largest nmbr is  : " << c;
        
    }
    
}