#include<iostream>
#include<stdio.h>
//#include<conio.h>
using namespace std;

 int main()
 {
   int i,count=0;
   char ch[20],c;
   //clrscr();
   cout<<"Enter Any String: ";
   cin >> ch;
   cout<<"Enter any Character form string: \n";
   cin>>c;
   for(i=0;ch[i]!='\0';i++)
   {
   if(ch[i]==c)
   count++;
   }
   if(count==0)
   {
   cout<<"Given character not found";
   }
   else
   {
   cout<<"Repetition of " <<c<<" "<<count<<" times";
   }
   //getch();
 }