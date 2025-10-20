#include <string> 
#include <iostream>
using namespace std;

enum enNumber_Type { Odd, Even };
int Read_Number() {
	int Number = 0;
	cout << "Please Enter Number To Check: ";
	cin >> Number;
	return Number;
}
enNumber_Type Check_Number_Type(int Number) {
	if (Number % 2 == 0) {
		return enNumber_Type::Even;
	}
	else {
		return enNumber_Type::Odd;
	}
}
void Print_Number_Type(enNumber_Type Number) {
	if (Number == enNumber_Type::Even)
		cout << "This Number Is Even";
	else
		cout << "This Number Is Odd";
}
int main()
{
	Print_Number_Type(Check_Number_Type(Read_Number()));
}
