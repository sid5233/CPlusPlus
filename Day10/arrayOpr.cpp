#include <iostream>
using namespace std;

int main(){
    int a[3];
    int b[3];
    int add[3],sub[3],mul[3];

    cout << "Enter array :" << endl;

    for (int i=0;i<3;i++)
    {
        cin >> a[i];
    }
        for (int i=0;i<3;i++)
    {
        cin >> b[i];
    }
      for (int i=0;i<3;i++)
      {
          add[i]=a[i]+b[i];
          cout << add[i]<< " " << endl;
      }
}