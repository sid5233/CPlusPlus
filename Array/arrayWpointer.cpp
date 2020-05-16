#include <iostream>
using namespace std;

void processArra(int number[])
{
    cout << "inside function: size in byte is "
         << sizeof(number) << endl;
}
int main(int argc, char *argv[])
{
    int mynumber[] = {1,2,3,4,5,6,7,8,9,10};
    cout << "outside function : size in bytes is ";
    cout << sizeof(mynumber) << endl;
    processArra(mynumber);
    return 0;
}