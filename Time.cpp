#include "Time.h"
#include<iostream>

using namespace std;


//default constructor
Time::Time(int hours_in, int mins_in, int secs_in)
{
	void Time::setTime(int hours_in, int mins_in, int secs_in)
}

//default accessor
void  Time::setTime(int hours_in, int mins_in, int secs_in){
	hours = 0;		//set sensible values incase valid parametaers are entered
	mins = 0;
	secs = 0;
	if ((hours_in < 23) && (hours_in>0))
		hours = hours_in;
	else
		cout << "Invalid value for hours entered: " << hours << endl;
	if ((mins_in < 59) && (mins_in>0))
		mins = mins_in;
	else
		cout << "Invalid value for minutes entered: " << mins << endl;
	if ((secs_in < 59) && (secs_in>0))
		secs = secs_in;
	else
		cout << "Invalid value for seconds entered: " << secs << endl;
};

//accessor method
void Time::getTime(int &hours_out, int &mins_out, int &sec_out){
	hours_in = hours;



};
void Time::print(void){

	cout << hours << mins << secs << endl;
};

Time::~Time()
{
}
ostream &operator<<(ostream &output, const Time &time_in)
{



	output << time_in.hours << ":" << time_in.mins << ":" << time_in.secs << endl;
	return output;
}



/*

 FizzBuzz thing 
#include <iostream>
using namespace std;
int main ()
{
  for(int i = 1; i <= 20; i++)
  {
    if(i % 3 == 0 && i % 5 == 0)
      cout << "FizzBuzz" << endl;
    else
    if(i % 3 == 0)
      cout << "Fizz" << endl;
    else
    if(i % 5 == 0)
      cout << "Buzz" << endl;
    else cout << i << endl;
  }
  return 0;
  }*/
