#include <iostream>
using namespace std;

class box {
    int l,b,h;

    public :
        int get(){
            cout << "Enter values  : " << endl;
            cin >> l>> b >> h;
        }
       int compare(box *p){
           int area1;
           int area2;
           area1 = l*b*h;
           area2 = p->l * p->b * p->h;

        if (area1==area2)
            return 0;
        else 
            return -1;
        }
};
int main(){
    box b1,b2,b3;
    b1.get();
    b2.get();
    int r = b1.compare(&b2);
    if (r==0)
        cout << "Area is equal.";
    else
    {
         cout << "Area is uneqal.";
    }
    
}