#include <iostream>
using namespace std;

class beta;
class alpha{
    int a;

    public :
     alpha(){
        cin >> a;
    }
        int show(){
            cout << a;
            return 0;
        }
    friend void compare(alpha,beta);

};
class beta{
    int b;

    public :
        beta (){
            cin >> b;
        }
        void display(){
            cout << b;
        }
    friend void compare(alpha,beta);
};
void compare (alpha obj1,beta obj2)
{
    int alpha_a = obj1.a;
    int beta_b = obj2.b;
    if (alpha_a == beta_b)
    {cout  << "alpha and beta are equal.";}
    else
    {
         cout << "are not equal.";
    }
}

int main(){
    alpha obj1;
    beta obj2;
    compare(obj1,obj2);
    return 0;
}