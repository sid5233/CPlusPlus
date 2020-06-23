#include <iostream>
using namespace std;
int main(){
    int n1;
    cout << "Enter a num : ";
    cin >> n1;
    for (int i = 1; i <= n1; i++)
    {
         if (n1%i == 0)
            {
                cout << "\t" << i;
            }
    }
    
return 0;
}