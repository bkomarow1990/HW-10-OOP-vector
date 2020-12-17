#include "Train.h"
#include <string>
Train::Train(const size_t& number, const string& destinationPlace, const Time& arriveTime)
	: number(number), destinationPlace(destinationPlace), arriveTime(arriveTime)
{
}

Train::Train(const size_t& number, const string& destinationPlace)
	: number(number), destinationPlace(destinationPlace)
{
}

Train::Train()
	:Train(0,"didn`t pointed")
{
}

void Train::print() const
{

	cout << "Number: " << number << endl;
	cout << "Destination Place: " << destinationPlace << endl;
	cout << "Arrive Time: ";
	arriveTime.print();
	cout << "===================================" << endl;
}



void Train::input()
{
	cout << "Enter number : ";
	cin >> number;
	//cout << endl;
	cin.ignore();
	cout << "Enter Destination Place : ";
	getline(cin,destinationPlace);
	
	//cout << endl;
	arriveTime.input();
}
bool Train::operator<(const Train& other)const
{
	return arriveTime.getAllInSeconds() < other.arriveTime.getAllInSeconds();
}

bool Train::operator>(const Train& other)const
{
	return !(*this < other);
}
