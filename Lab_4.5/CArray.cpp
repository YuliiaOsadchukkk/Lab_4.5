//CArray.cpp
#include "CArray.h"

void Array::AddItem(const int& val)
{
	int* tmp = new int[_size + 1];
	if (_size > 0)
		memcpy(tmp, _set, _size * sizeof(int));
	_set = tmp;
	_set[_size] = val;
	++_size;
}

bool Array::HasItem(const int& val) const
{
	for (size_t i = 0; i < _size; i++)
		if (val == _set[i])
			return true;

	return false;
}

const int* Array::GetSet() const
{
	return _set;
}

unsigned int Array::GetSize() const
{
	return _size;
}

Array::~Array()
{
	if (_set != nullptr)
		delete[] _set;
}