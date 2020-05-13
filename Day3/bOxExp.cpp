#include <iostream>
using namespace std;

class box{
    int l,b,h;

    public : 
        box(int);
        box(int,int);
        box(int,int,int);
        void show();
};

void box :: show(){
    cout << " ";
}
box :: box (int i){
    l=b=h=i;
}
box :: box (int a,int p){
    h=l=a;
    b=p;
}