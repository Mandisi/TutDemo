#include<iostream>
#include"Time.h"

using namespace std;

int main()
{
	Time teaTime(10, 15, 0);
	Time midnight;

	int hours, mins, secsi;
	teaTime.print();
	cout << endl;
	midnight.print();

	cout << endl;


	teaTime.setTime(11, 0, 0);
	teaTime.print();
	cout << endl;

	teaTime.getTime(hours, mins, secs);
	cout << "Hours: " << hours << "Minutes: " << mins << "Seconds: " << secs << endl;

	cout << endl;

	cout << "TeaTime is at " << teaTime << "tomorrow" << endl;  //test overloadedstream inertion operator.

}