#include <iostream>
#include <string>
#include <istream>
using namespace std;

class student{
    int roll_no;
    string name;
    char grade;
    float per;

    public:
    void get();
    void show();
};

void student :: get(){
    cout << " Enter the roll no,name,greade and per : ";
    cin >> roll_no >> grade >> per ;
    getline(cin,name);
    }
void student :: show(){
    cout << "The details are as follows: " ;
    cout << roll_no << endl << name << endl << grade << endl << per;
}
int main(){
    student s1;
    s1.get();
    s1.show();
    return 0;
}
