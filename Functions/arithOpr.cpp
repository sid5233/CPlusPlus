#include <iostream>
using namespace std;

int add(int a,int b)
{
    return a+b;
}
int sub(int j,int k)
{
    return j-k;
}
int mul(int h,int i)
{
    return h*i;
}
int div1(int c,int d)
{
    return c/d;
}
int main(){
    int l= 10,m=5;
    int s = add(l,m);
    int su = sub(l,m);
    int t = mul(l,m);
    int d = div1(l,m);
    cout << s << su << t << d;
return 0;
}