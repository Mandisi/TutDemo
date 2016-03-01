#pragma once
class Time
{
	friend ostream &operator<<(ostream &output, const Time &time_in);

private:
	int hours;	//storage for hours (0-23)
	int mins;   // storage for minutes (0-59)
	int secs;	//storage for seconds(0-59)
public:

	Time(int hours_in=0, int mins_in=0, int secs_in=0);
	void  setTime(int hours_in, int mins_in, int secs_in);
	void getTime(int &hours_out, int &mins_out, int &sec_out);
	void print(void);

	~Time();
};

