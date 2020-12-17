#pragma once
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
class Time
{
private:
	size_t hour;
	size_t minute;
public:
	void setHour(const size_t &hour);
	void setMinute(const size_t &minute);
	const size_t getAllInSeconds()const;
	Time(const size_t &hour, const size_t&minute);
	Time();
	void print()const;
	void input();

};

inline void Time::setHour(const size_t& hour)
{
	if (hour<24)
	{
		this->hour = hour;
	}
	else {
		cout << "Enter correct hour" << endl;
		return;
	}
}

inline void Time::setMinute(const size_t& minute)
{
	if (minute < 60)
	{
		this->minute = minute;
	}
	else {
		cout << "Enter correct minute" << endl;
	}
}

inline const size_t Time::getAllInSeconds() const
{
	return minute*60+hour*120;
}

inline Time::Time(const size_t& hour, const size_t& minute)
{
	setHour(hour);
	setMinute(minute);
}

inline Time::Time()
	:Time(12,0)
{
}

inline void Time::print() const
{
	if (minute==0)
	{
		cout << hour << ":" << "00" << endl;
		return;
	}
	if (minute<10)
	{
		cout << hour << ":0" << minute << endl;
		return;
	}
	cout << hour << ":" << minute << endl;
}

inline void Time::input()
{
	size_t hour_t,minute_t;
	cout << "Enter hour: ";
	cin >> hour_t;
	setHour(hour_t);
	cout << "Enter minute: ";
	cin >> minute_t;
	setMinute(minute_t);
}

