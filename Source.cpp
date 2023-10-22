// Date: [9 / 15/ 23]
// Author : [Paula Carpenter]

#include <iostream>
using namespace std;

void display24HourClock(int hour, int min, int sec)
{
	cout << "\n24 Hour Format\n";

	cout << hour << ":" << min << ":" << sec ;
}

void display12HourClock(int hour, int min, int sec)
{
	string timeFormat = "AM";
	if (hour > 12)     // turns into 12 hour clock
	{
		hour = hour - 12;
		 string timeFormat = "PM";

	}
	cout << "\n Hours Format\n";

	cout << hour << ":" << min << ":" << sec << " " << timeFormat;
}

int main()
{
	int hour;
	int min;
	int sec;    // keeps the value

	string end = "No";

	while (end == "No")
	{
		cout << "Enter hours=";

			cin >> hour;

			cout << "\nEnter minutes=";

			cin >> min;

			cout << "\nEnter seconds=";

		cin >> sec;

		if (hour > 23)
			cout << "Wrong hour input";
		else if (min > 60)
			cout << "Wrong minute input";
		else if (sec > 60)
			cout << "Wrong second inout";

		cout << "\nExit program=";       //put in no to continue
		cin >> end;


	}
	return 0;
}
