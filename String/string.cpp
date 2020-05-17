#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    //string name;
   /*  cout << "Enter your name : " ;
    cin >> name;
    getline (cin,name);
    if (name == "")
    {
        cout << "You entered an empty string\n";
        cout << "Assigning default\n";
        name = "John";
    }
    else 
    {
        cout << "Thank you, " << name
            << " for running this simple program!" << 
            endl; 
    } */

    // concatenate
   /*  string result;
    string s1 = "Hello ";
    string s2 = "World";
    result = s1 + s2; 
    cout << result ; */

   /*  string firstname,lastname,fullname;
    cout << "enter fn : ";
    getline(cin,firstname);
    cout << "enter ln : ";
    getline(cin,lastname);
    fullname = lastname + ","+firstname;
    cout << fullname << "\n"; */

  /*   cout << "Pick 1 or 2 ";
    int choice{};
    cin >> choice;
    cin.ignore();

    cout << "Enter your name ";
    string name{};
    getline (cin,name);
    cout << "\nhello " << name << " you picked " << choice <<"\n";
    cout << "\n name has " << name.length() << " Characters.";
 */
/* 
    
    
    string name;
    cout << "\nEnter name : ";
    getline (cin,name);
    int age;
    cin >> age;
    double lgt = (name.length());
   
    cout << "you lived " << double(age/lgt) << " years \n"; */


   /*  char mystring[]="string";
    int length = sizeof(mystring);
    cout << mystring << " has " << length << " charactrs.\n";
    for (int i=0;i<length;++i)
        cout << int (mystring[i]) << " ";
    cout << "\n";
    return 0; */


/* 

      char name[20]{ "Alex" }; // only use 5 characters (4 letters + null terminator)
    cout << "My name is: " << name << '\n';
    cout << name << " has " <<  strlen(name) << " letters.\n";
    cout << name << " has " <<  sizeof(name) << " characters in the array.\n"; 
    // use sizeof(name) / sizeof(name[0]) if not C++17 capable
 
    return 0; */





 /*    char buffer[255];
    cout << "Enter a string : ";
    cin.getline(buffer, sizeof(buffer));
    
    int spacesfound = 0;
    int bufferlength = strlen(buffer);

    for (int i=0; i<bufferlength ; ++i)
    {
        if (buffer[i] == ' ')
            ++spacesfound;
    }
    cout << "\nYou typed " << spacesfound << " spaces.\n";
    return 0;  */



    char text[] = "Hello";
    string str = text;
    string more = str;

    cout << text << " " << str << " " << more;
}