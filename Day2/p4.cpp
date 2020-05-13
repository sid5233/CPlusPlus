#include <iostream>
using namespace std;

class demo
{
    int a;
    public :
    void get(int input);
    void show();
};
void demo :: show()
{
    cout << a;
}
void demo :: get(int i)
{
    a=i;
}
int main(){
    demo d1;
    d1.get(50);
    d1.show();
    return 0;   
}