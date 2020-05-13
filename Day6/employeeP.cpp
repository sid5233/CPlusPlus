#include <iostream>
#include <string>
using namespace std;

class employee{
    int age;
    static int id;
    string name;

    public :
    
    employee(){
        cout << "Enter Employee Details : " << endl;
        getline(cin,name);
        cin >> age;
        cin.clear();
        fflush(stdin);
        id++;
    }
    void counter (){
        cout << endl <<  "Total Employee : " << id << endl;
    }

    void display()
        {   cout << "Company : Infosys" << endl;
            cout << "Id : " << id << "\tname : " << name  << "\tage :" << age << endl;  
        }


    employee(employee &p)
    {
        name = p.name;
        age = p.age;
        id++;
    }
    employee (string p,int ae){
        name = p;
        age = ae;
        id++;
    }
   
    ~employee(){
        --id;

    }
};
int employee :: id;
int main(){
    employee e1;
    employee e2;
    employee e3;
    e1.display();
    e2.display();
    e3.display();
    employee e4("sud",25);
    e4.display();
    e4.counter();
        {
            employee e4;
            e4.counter();
            e4.display();
        }
    e4.counter();
    return 0;
}