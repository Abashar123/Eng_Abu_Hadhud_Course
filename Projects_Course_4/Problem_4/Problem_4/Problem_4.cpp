#include <string>
#include <iostream>
using namespace std;
struct strPerson_Info {
	int Age;
	bool Driver_License;
};
strPerson_Info Read_Info(strPerson_Info &Info) {
	cout << "Enter Age: ";
	cin >> Info.Age;
	cout << "Do you have a Driver License (1 for Yes, 0 for No): ";
	cin >> Info.Driver_License;
	return Info;
}
string Check_Info(strPerson_Info Info) {
	if (Info.Age > 21 && Info.Driver_License == 1)
		return "Hired";
	else
		return "Rejected";
}
void Print_Result(string Result) {
	cout << Result << endl;
}
int main()
{
	strPerson_Info person;
	Print_Result(Check_Info(Read_Info(person)));
}
