#include<iostream>
using namespace std;
int main()
{
	int num;
	
	
	while(1)
	{
	cout<<"enter number between 1 and 7:" << endl;
	cin>>num;
	switch(num)
	{
		case 1:
			cout<<"monday" << endl;
			break;
		case 2:
			cout<<"tuesday"<< endl;
			break;
	    case 3:
			cout<<"wed" << endl;
			break;
        case 4:
			cout<<"thuresday" << endl;
			break;
	    case 5:
			cout<<"friday" << endl;
			break;
		case 6:
			cout<<"satday"<< endl;
			break;
		case 7:
			cout<<"sunday"<< endl;
			break;
		default:
		 cout<<"invalid number" << endl;										
		exit(1);
	}
	
	}
	return 0;
}