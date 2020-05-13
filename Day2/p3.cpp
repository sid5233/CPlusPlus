#include <iostream>
using namespace std;

class student
{
    int roll;
    float per;
    char grade;
    
    public :
        void show();
        void get();
};
void student :: get()
{
    cout << "enter the roll no,grade,per";
    cin >> roll >> grade >> per;
}
void student :: show()
{
    cout << "Student details : \n";
    cout << roll <<" "<<  grade << " " <<  per ;
}
int main(){
    student s1;
    s1.get();
    s1.show();
}

