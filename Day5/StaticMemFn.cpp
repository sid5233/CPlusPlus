#include <iostream>
using namespace std;

class student {
    static int count;
    int roll;

    public :
        student(int input){
            roll=input;
            count++;
        }
        void show(){
            cout << "roll no = :" << roll << endl ;
        }
        void stdcounter(){
            cout << "Totl std : " << count << endl;
        }
        ~student(){
            --count;
        }
};
int student :: count;

int main(){
    student s1(1);
    student s2(2);
    student s3(3);
    s1.show();
    s2.show();
    s3.show();
    s3.stdcounter();
    {
        student s4(4);
        student s5(5);
        s3.stdcounter();
    }
    s3.stdcounter();

    return 0;    
}