#include <iostream>
using namespace std;

class conOver{
    int a,b;
    
    public:
        conOver();
        conOver(int);
    void show();
};
conOver :: conOver(){
    cout << "Constructor overloaded";
}
conOver :: conOver(int j){
    cout << "Enter a number : ";
    cin >> j;
    cout<< endl << "You Entered : " << j << endl ;
}
int main(){
    int j;
    conOver c2(10);
    conOver c1;
    return 0;
}