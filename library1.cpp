#include<iostream>
#include<string>

using namespace std;

int main()
{
 int id1, id2, id3;
 string title1, title2, title3;

// Book 1


cout << "Enter Book 1 ID:";
cin >> id1;

cin.ignore();
cout << "Enter Book 1 Title";
getline(cin,title1);

// Book 2


cout << "Enter Book 2 ID:";
cin >> id2;

cin.ignore();
cout << "Enter Book 2 Title";
getline(cin,title2);

// Book 3


cout << "Enter Book 3 ID:";
cin >> id3;

cin.ignore();
cout << "Enter Book 3 Title";
getline(cin,title3);

//Display

cout<<"\n\n=====library;=====\n";
cout<<"\n Book id1="<<id1;
cout<<"/t\t\t\t Book Title1 ="<<title1;
cout<<"\n Book Id1 = "<<id2;
cout<<"\t\t\t\t Book Title2="<<title2;
cout<<"\nBook Id1 = "<<id3;

//Display

cout<<"\n\n=====library;=====\n";
cout<<"\n Book id1="<<id1;
cout<<"/t\t\t\t Book Title1 ="<<title1;
cout<<"\n Book Id1 = "<<id2;
cout<<"\t\t\t\t Book Title2="<<title2;
cout<<"\nBook Id1 = "<<id3;
cout<<"\t\t\t\t Book Title3="<<title3;

return 0;
}
