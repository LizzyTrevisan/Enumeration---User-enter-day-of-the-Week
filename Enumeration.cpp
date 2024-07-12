// Enumeration.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Program user enters a number representing the day of the week and prints the name given.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
using namespace std;

//Enum class type for the switch variable data type. 
enum class Weekday {
	Monday = 1,
	Tuesday = 2,
	Wednesday = 3,
	Thursday = 4,
	Friday = 5,
	Saturday = 6,
	Sunday = 7
};

int main()
{

	//User enter the integer.
	cout << "Enter a number: ";
	Weekday weekday;
	int input;
	cin >> input;
	weekday = (static_cast<Weekday> (input));


	//switch statement for condition
	switch (weekday)
	{
	case Weekday::Monday:
		cout << "It's Monday.";
		break;
	case Weekday::Tuesday:
		cout << "It's Tuesday.";
		break;
	case Weekday::Wednesday:
		cout << "It's Wednesday.";
		break;
	case Weekday::Thursday:
		cout << "It's Thursday.";
		break;
	case Weekday::Friday:
		cout << "It's Friday.";
		break;
	case Weekday::Saturday:
		cout << "It's Saturday.";
		break;
	case Weekday::Sunday:
		cout << "It's Sunday.";
		break;

	default:
		break;
	}

	return 0;
}
