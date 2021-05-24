//CArray.h
#pragma once
#include "IArray.h"

class Array abstract : public IArray
{
protected:
	int* _set = nullptr;
	unsigned int _size = 0;
	void AddItem(const int& val);
public:

	bool HasItem(const int& val) const override;
	const int* GetSet() const override;
	unsigned int GetSize() const override;
	~Array() override;
};
