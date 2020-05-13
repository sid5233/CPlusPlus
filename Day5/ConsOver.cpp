#include <iostream>
using namespace std;

class demo{
    int a;
    public :
        demo(int);
        demo();
    void show();
};
void demo :: show(){
    cout << a ;
}
demo :: demo (int i) 
{
    a = i;
    cout << "The value is : " << a; 
}
demo :: demo (){
    cout << "Enter an int : ";
    cin >> a;
}
int main(){
    demo d1;
    demo d2(15);
    return 0;
}