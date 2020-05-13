#include <iostream>
using namespace std;

int add(int x,int y){
    return x+y;
}
int main(){
    int x=5;
    int value = add(x,++x);
    cout << value;
    return 0;
}