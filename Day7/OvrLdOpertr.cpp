#include <iostream>
using namespace std;

class counter {
    int a;
        public :
        counter()
            {
                a=0;
            }
        counter operator++();
        void show();
};
counter :: counter (int input){
        a = input ;
}
counter :: counter operator ++ (){
    
}
