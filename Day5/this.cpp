#include <iostream>
using namespace std;

class demo{
    int a;

    public :
        void get()
        {
            cout << "Enter an int : " << endl ;
            cin >> a;
        }  
        void show(){
            cout << a;
            cout << "Address of Callng fn : " << this;
        }
};

int main(){
    demo d1;
    d1.get();
    d1.show();
    demo d2;
    d2.get();
    d2.show();

    return 0;
}