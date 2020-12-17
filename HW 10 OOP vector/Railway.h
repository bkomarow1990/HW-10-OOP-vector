#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include "Train.h"
#include "Railway.h"
using namespace std;
class Railway
{
public:
	void input();
	void print()const;
	void addNewTrain(const size_t& number,const string& destinationPlace, const Time& arriveTime);
	void printAboutTrainWithIndex(const size_t& index)const;
	void deleteTrainWithIndex(const size_t& index);
	void editTrainWithIndex(const size_t& index,const Time& arriveTime, const string& destinationPlace);
	//void sortArrays();
	bool comparator(const Train& lhs, const Train& rhs)const;
	
private:
	vector<Train> trains;
};

