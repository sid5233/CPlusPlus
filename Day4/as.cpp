#include<iostream>

using namespace std;

class demo
{
    int a=10;
    public:
    void display();
    void show();
};
void demo::display()
{
    cout<<a << endl;
    a++;
}
void demo::show()
{
    cout<<a;
}

int main()
{
    demo d1;
    d1.display();
    d1.show();
}