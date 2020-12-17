#include "Railway.h"

void Railway::input()
{
	size_t size;
	cout << "Enter size of your trains" << endl;
	cin >> size;
	Train temp;
	for (size_t i = 0; i < size; i++)
	{
		cin.ignore();
		temp.input();
		trains.push_back(temp);
	}
}

void Railway::print() const
{
	for (auto& elem : trains) // access by reference to avoid copying
	{
		elem.print();
	}
}

void Railway::addNewTrain(const size_t& number, const string& destinationPlace, const Time& arriveTime)
{
	trains.push_back(Train(number, destinationPlace, arriveTime));
}

void Railway::printAboutTrainWithIndex(const size_t& index) const
{
	if (trains.empty())
	{
		return;
	}
	trains[index].print();
}

void Railway::deleteTrainWithIndex(const size_t& index)
{
	if (!trains.empty())
	{
		trains.erase(trains.begin()+index);
	}
}

void Railway::editTrainWithIndex(const size_t & index,const Time& arriveTime, const string& destinationPlace)
{
	trains[index].arriveTime = arriveTime;
	trains[index].destinationPlace = destinationPlace;
}
bool Railway::comparator(const Train& lhs, const Train& rhs)const
{
	return lhs < rhs;
}

//void Railway::sortArrays()
//{
//	sort(trains.begin(), trains.end(), comparator);
//}


