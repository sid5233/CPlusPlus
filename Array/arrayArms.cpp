#include <iostream>
using namespace std;
int main(){
    int arr[100],i,n;
    cout << "Enter size" << endl;
    cin >> n;

    for (int i=0 ; i<=n-1;i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i <= n-1; i++)
    {
        int rem=0,sum=0,k;
        k=arr[i];
        while (k!=0)
        {          
            rem = k %10;
            sum = sum + rem*rem*rem;
            k = k / 10;
        }
        if (sum==arr[i])
            cout << arr[i] << " is armstrong" << endl;
        else
        {
             cout << arr[i] << " is not armstrong" << endl;
        }
        
    }
    
return 0;
}