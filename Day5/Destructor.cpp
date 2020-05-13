#include <iostream>
using namespace std;

class demo{
    int a;

    public :
    demo();
    ~demo();
    void show();
};
demo :: demo (){
    cout << "Enter th nmbr : "<< endl;
    cin >> a;
}
void demo :: show(){
    cout << " The value of a is : " << a << endl;
}
demo ::~ demo(){
        cout << "You are in destructor : ";
}
int main (){
    demo d1;
    d1.show();
}