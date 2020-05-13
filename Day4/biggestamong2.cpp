#include <iostream>
using namespace std;

class big{
    int a,b;

    public :
        void biggest();
};
void big :: biggest(){
    cout << "Enter the number : ";
    cin >> a >> b;
    if (a > b)
        cout << "The bigger nmber is : " << a;
    else
    {
        cout << "The bigger nmbr is : " << b;
    }
}
int main(){
    big o1;
    o1.biggest(); 
}