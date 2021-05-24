//IArray.h
#pragma once
#include <iostream>

using namespace std;

class IArray 
{
public:
	
	virtual bool HasItem(const int& val) const = 0;
	virtual const int* GetSet() const = 0;
	virtual unsigned int GetSize() const = 0;
	virtual ~IArray() {};

	virtual IArray* Add(IArray* r) = 0;
	virtual float Foreach(const unsigned int& index) = 0;

	virtual ostream& Print(ostream& out) const = 0;
	virtual istream& Insert(istream& in) = 0;
	


};
