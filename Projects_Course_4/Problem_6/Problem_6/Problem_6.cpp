#include <iostream>
using namespace std;
struct strPerson_Info {
	string First_Name;
	string Last_Name;
};
strPerson_Info Read_Person_Info() {
	strPerson_Info Person;
	cout << "Please Enter First Name: ";
	cin >> Person.First_Name;
	cout << "Please Enter Last Name: ";
	cin >> Person.Last_Name;
	return Person;
}
string Get_Full_Name(strPerson_Info Info) {
	string Full_Name = Info.First_Name + " " + Info.Last_Name;
	return Full_Name;
}
void Print_Full_Name(string Full_Name) {
	cout << "Full Name: " << Full_Name << endl;
}
int main()
{
	Print_Full_Name(Get_Full_Name(Read_Person_Info()));
}

