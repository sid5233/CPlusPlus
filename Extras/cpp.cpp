#include<iostream>
//#include<conio.h>
#include<string.h>
using namespace std;

int main()
{
 char str[5][20], t[20];
 int i, j;
 cout<<"Please Enter Any Five Name: ";
 for(i=0; i<5; i++)
  {
	cin>>str[i];
  }
	for(i=1; i<5; i++)
	{
		for(j=1; j<5; j++)
		{
			if(strcmp(str[j-1], str[j])>0)
			{
				strcpy(t, str[j-1]);
				strcpy(str[j-1], str[j]);
				strcpy(str[j], t);
			}
		}
	}
	cout<<"Names in Alphabetical Order are: \n";
	for(i=0; i<5; i++)
	{
		cout<<str[i]<<"\n";
	}
	//getch();
}