#include <iostream>
using namespace std;

class circle {
    int r;
    const float pie;
    public :
        circle (int input,float i) : pie(3.14)
        {
            r=input;
        }
        void show (){
            cout << "radius is = " << r << "\t" << "pie - " << pie;
        }
};
int main(){
    circle c1(10,3.14);
    c1.show();
    return 0;
}