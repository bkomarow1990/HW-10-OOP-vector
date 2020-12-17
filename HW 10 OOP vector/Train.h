#pragma once
#include <iostream>
#include "Time.h"
using namespace std;
// Time робив окремо 
class Train
{
public:
	Train(const size_t & number, const string& destinationPlace, const Time & arriveTime);
	Train(const size_t & number, const string& destinationPlace);
	Train();
	void print()const;
	bool operator <(const Train& other)const;
	bool operator >(const Train& other)const;
	void input();

private:
	friend class Railway;
	size_t number;
	string destinationPlace;
	Time arriveTime;
};