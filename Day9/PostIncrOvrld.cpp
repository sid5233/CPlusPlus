#include <iostream>
using namespace std;

class counter {
    int a;
    public :
        counter(){
            a=0;
        }
        counter(int input);
        counter operator++(int);
        void show();
};
counter :: counter (int input){
    a=input;
}
counter counter :: operator++(int)
    {
        counter temp;
        int count;
        a++;
        count =a++;
        temp=count;
        return temp;
    }
void counter :: show(){
    cout << "a = " << a;
}
int main(){
    counter c1(10),c2;
    c1++;
    c1.show();
    c2.show();
    return 0;
}