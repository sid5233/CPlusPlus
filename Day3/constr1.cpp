#include <iostream>
using namespace std;

class demo{
    
    int a;

    public :
        demo();
        void show();
};
void demo :: show(){
    cout << "The value of a is = "<<a;
}
demo :: demo(){
    cout << endl << "enter an int : ";
    cin >> a;
}
int main(){
    demo d1;
    d1.show();
    return 0;
}