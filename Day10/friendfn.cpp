#include <iostream>
using namespace std;

class distanc{
    int meter;

    public :
        distanc(){
            meter = 0;
        }
        void display(){
            cout << "Meter value :" << meter; 
        }
        friend void addvalue(distanc &d);
};
void addvalue(distanc &d){
    d.meter =d.meter+5;
}    
int main(){
    distanc d1;
    d1.display();
    addvalue(d1);
    d1.display();
}