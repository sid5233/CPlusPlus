#include <iostream>
using namespace std;

class city{
    public:
    int a,b,x,y;

    public :
        city(){
            a=50;
            b=12;
            cout<<"You are in constructor" << endl;
        };        
};
int main(){
    city c;
    cout << "a = : " << c.a << endl;
    return 0;
}