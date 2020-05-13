#include <iostream>
using namespace std;

class student {
    int roll;
    char grade;
    float per;

    public :
        void get()
        {
            cout << "Enter the roll no,grade,per : ";
            cin >> roll >> grade >> per;
        }
        friend void show (student &);
};
void show(student &s)
{
    cout << s.roll << "\t" << s.grade << "\t" << s.per; 
}
int main (){
    student s1;
    s1.get();
    show(s1);
    return 0;
}