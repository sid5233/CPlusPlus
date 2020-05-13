#include <iostream>
#include <string.h>
using namespace std;


class addstr{
    char s1[25],s2[25];

    public :
    addstr(&s){
        cin >>; 
    }
    addstr(char str1[],char str2[]){
            strcpy(this->s1,str1);
            strcpy(this->s2,str2);
        }
    void operator +(){
        cout << "\t Concatenation : " << strcat(s1,s2);
    }      
};
int main(){
    char str1(char &s1);

    char str2[] = " Bhamare";

    addstr a1(str1,str2);
    +a1;
}