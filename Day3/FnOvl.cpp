#include <iostream>
using namespace std;
class cal {
    int a,b,c;

    public :
        int sum(int,int);
        int sum(int,int,int);
};
int cal :: sum(int i,int j){
    c = i+ j;
    cout << "The sum is : " << c;
    return 0;
}
int cal :: sum(int k,int l,int m){
    cout << endl <<  "The sum is 2nd " << k+l+m;
    return 0;
}
int main(){
    cal c1;
    c1.sum(10,20);
    c1.sum(10,20,30);
    return 0;
}