#include <iostream>
using namespace std;

class complex{
    int data1;
    float data2;

    public :
        void IntData(int d){
            data1 = d;
            cout << "Number : " << data1 << endl;
        
        }
        float insertFloat(){
            cout << "enter float data : ";
            cin >> data2;
            return data2;
        }
};
int main(){
    complex o1,o2;
    float secondData;
    o1.IntData(18);
    secondData = o2.insertFloat();
    cout << " You Entered : " << secondData;
    return 0;
}