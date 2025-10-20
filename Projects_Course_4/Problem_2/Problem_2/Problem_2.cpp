#include <iostream>
#include <string>
using namespace std;

string Read_Name() {
	string Name;
	cout << "Please Enter Your Name: ";
	getline(cin, Name);
	return Name;
}
void Print_Name(string Name) {
	cout << "Your Name Is: " << Name << endl;
}
int main()
{
	Print_Name(Read_Name());
}
