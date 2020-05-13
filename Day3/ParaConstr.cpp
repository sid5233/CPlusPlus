#include <iostream>
using namespace std;

class ParaConstr{

    int a,b,sum;

    public : 
        ParaConstr(int a,int b);
        void show();
};
void ParaConstr :: show(){
    cout << endl << a << " -- " << b;
}
ParaConstr :: ParaConstr(int a,int b){
    sum= a +b ;
    cout << "The sum is = " << sum;
}
int main(){
    ParaConstr d1(15,88);
    d1.show();
    return 0;
}
