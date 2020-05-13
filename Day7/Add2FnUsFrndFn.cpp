#include <iostream>
using namespace std;

class dist {
    int feet;
    int inches;

        public :
            void get();
            void show();
        friend dist add(dist&, dist&);
};
void dist :: show(){
    cout << "The distance are : " << feet << "\t" << inches ;
}

void dist :: get(){
    cout << endl << "Enter the detaials :";
    cin >> feet >> inches ; 
}

dist add(dist &p, dist &q)
{
    dist temp;
        temp.feet = p.feet + q.feet;
        temp.inches = p.inches + q.inches ;
        return temp;
}
int main(){
    dist d1,d2,d3;
    d1.get();
    d2.get();
    d3 = add(d1,d2);
    d3.show();

    return 0;
}