#include <iostream>
using namespace std;

class demo{
    int a;
    public:
    void get();
    void show();
};
void demo::get()
{
    cout << " Enter the number : ";
    cin >> a;
}
void demo :: show()
{
    cout << " You have entered : " << a << endl;
}

int main(){
    demo obj1;
    obj1.get();
    obj1.show();
    return 0;

}