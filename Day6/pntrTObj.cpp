#include <iostream>
using namespace std;

class complexNumber{

    int real;
    float imaginary;

    public :
        complexNumber(){
        
        }
        complexNumber(int r,float i){
            real = r;
            imaginary = i;
        }
        void display(){
            cout << "Complex number is : " << real<< "+" << imaginary<< "i " << endl;
         }
};


int main(){
    complexNumber comp1(5,4),comp2(5,4),comp3;
    comp1.display();
    return 0;


}