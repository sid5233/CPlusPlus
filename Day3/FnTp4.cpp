#include <iostream>
using namespace std;

class epl{
    int a,b,c,d,e,g,l;
    
    public: 
    void fun();
    int fun1(int);
    void fun3(int d,int e);
    int fun4(int,int);
};
    void epl :: fun(){
        cout << "this takes nothing gives nothing FUN()"<< endl;
    }
    int epl :: fun1(int a){
        b=a+a;
        cout<< "This takes int returns int FUN1" << endl;
        cout << a << "--" << b;
        return a;
    }
    void epl :: fun3(int d,int e)
    {
        g=d+e;
        cout << endl << "The addition is =: " << g << " _FUN3 " << endl;
        
    }
    int epl :: fun4(int h,int i){
        l=h*i;
        cout << " L is = " << l << " _FUN4";
        return l;
    }

    int main(){
        epl l1,l2,l3,l4;
        l1.fun();
        l2.fun1(5);
        l3.fun3(5,88);
        l4.fun4(12,15);
        return 0;
    }
