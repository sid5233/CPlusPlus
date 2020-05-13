#include <iostream>
using namespace std;

class mall{
    int a,b,c;

    public :
        mall();
        void grossery();
        void clothes();
        void stationary();
        void extras();
};
mall :: mall(){
    cout << "Enter the value : ";
    cin >> b;
    cout << "In constructor  " << b;
}
void mall :: grossery(){
    cout << "Enter Grossery number : ";
    cin >> a;
}
void mall :: clothes(){
    cout << endl << "Clothes are not available ";
}
void mall :: stationary (){
    cout << endl << "Stationary ";
}
void mall :: extras (){
    cout << endl << "Abstraction.";
}

int main(){
    mall dep;
    dep.clothes();
    dep.extras();
    dep.grossery();
    return 0;
}