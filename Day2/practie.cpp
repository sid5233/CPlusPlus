
#include <iostream>
using namespace std;

class demo
{
    int a;
public:
    void get ();
    void show();
};
void demo :: get()
{
    cout <<"Enter an int : ";
    cin >> a;
}
void demo :: show()
{
    cout << a << endl;
}
int main()
{
    demo obj1;
    obj1.get();
    obj1.show();

    demo obj2;
    obj2.get();
    obj2.show();
}