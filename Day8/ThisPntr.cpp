#include <iostream>
using namespace std;

class box {
    int l,b,h;

    public :
        void show()
        {
            cout << endl << "The values are : " ;
            cout << l << "\t" << b << "\t" << h;
        }
        box(){
            cout << "Enter the values : ";
            cin >> l >> b >> h;
        }
        box (int i,int j,int k)
        {
            this->l=i;
            this->b=j;
            this->h=k;
        }
};
int main(){
    box b1;
    b1.show();
    box b2(20,30,40);
    b2.show();
    return 0;

}