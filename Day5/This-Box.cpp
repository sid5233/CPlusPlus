#include <iostream>
using namespace std;

class box {
    int l,b,h;

    public :
        box()
        {
            cout << "Enter l,b,h";
            cin >> l >> b >> h;
        }
        box(int input)
        {
            l=b=h=input;
            cout << "The l=b=h= : " << input ;
        }
        box (int x,int y,int z){
            this->l=x;
            this->b=y;
            this->h=z;
            cout << "l = : " << x;
            cout << "h = : " << y;
            cout << "b = : " << z;
        }
        box (box &p)
        {
            l=p.l;
            b=p.b;
            h=p.h;
        }
        void show ()
        {
            cout << "The value are " << l << endl << b << endl << h;
        }
};

int main()
{
    box b1;
    b1.show();
    box b2(20,30,40);
    b2.show();
    box b3;
    b3.show(); 
}