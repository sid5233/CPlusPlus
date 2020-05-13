#include <iostream>
using namespace std;

void display();
int main(){
    cout << "Call 1 display : " << endl ;
    display();
}
void display(){
    static int a=10;
    cout << a << endl ;
    a++;
    cout << a;
}