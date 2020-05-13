#include <iostream>
using namespace std;

int main()
{
    int x[3][2][3] = {{0,1,1},{2,3,3},{4,5,6}};
    for (int i = 0; i < 3; i++)
    {
       for ( int j = 0; j < 2; j++)
       {
           cout << "Element at x[" << i 
                 << "][" << j << "]: "; 
            cout << x[i][j]<<endl; 
       }
       
    }
    
}