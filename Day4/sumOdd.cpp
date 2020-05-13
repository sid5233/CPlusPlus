#include <iostream>
using namespace std;

class sum{
    int n,s=0;

    public : 
        void calc();
        void display();     
};
void sum :: calc(){
    for (n=1;n<=100;n+=2)
    s=s+n;
}
void sum :: display()
{
    cout << "Sum of number is " << s;
}
int main()
{ 
    sum s;
    s.calc();
    s.display();
}