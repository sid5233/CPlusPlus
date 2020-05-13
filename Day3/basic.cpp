#include <iostream>
using namespace std;

class demo{
    int a;
    float b;

    public:
        void show();
        void get();
};

void demo :: show()
{
    cout << "int is = " << a << endl << "float is = " << b;
}
void demo :: get(){
    cout << "Enter an int and float" << endl;
    cin >> a >> b ;
}
int main(){
    demo d1;
    d1.get();
    d1.show();
    return 0;
}