#include <iostream>
using namespace std;

class cdac{
    int a,b,c,d,e,k;

    public : 
        int mul();
        int mul(int );
        int mul(int ,int );
};
int cdac :: mul(){
    cout<<"with no argument";
    return 0;
}
int cdac :: mul(int c,int d){
    cout << "The addition is : ";
    return c+d;
}
int cdac :: mul(int k){
    cout << " You Entered : " << k;
    return 0;
}
int main(){
    cdac f1;
    f1.mul(12,12);
    f1.mul(15);
}