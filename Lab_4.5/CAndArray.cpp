//CAndArray.cpp
#include "CAndArray.h"

void AndArray::AddItem(const int& val)
{
	int* tmp = new int[_size + 1];
	if (_size > 0)
		memcpy(tmp, _set, _size * sizeof(int));
	_set = tmp;
	_set[_size] = val;
	++_size;
}

bool AndArray::HasItem(const int& val) const
{
	for (size_t i = 0; i < _size; i++)
		if (val == _set[i])
			return true;

	return false;
}

const int* AndArray::GetSet() const
{
	return _set;
}

unsigned int AndArray::GetSize() const
{
	return _size;
}

AndArray::~AndArray()
{
	if (_set != nullptr)
		delete[] _set;
}


AndArray::AndArray(unsigned int count, ...) {
	if (count == 0)
		return;

	_set = new int[_size = count];
	for (size_t i = 0; i < _size; i++)
		_set[i] = (&count + 1)[i];
}

IArray* AndArray::Add(IArray* r)
{
	AndArray* tmp = new AndArray();
	for (unsigned int i = 0; i < _size; i++)
		if (r->HasItem(_set[i]))
			tmp->AddItem(_set[i]);
	return tmp;
}

float AndArray::Foreach(const unsigned int& index)
{
	return sqrt(_set[index]);
}

std::ostream& AndArray::Print(std::ostream& out) const
{
	for (size_t i = 0; i < _size; i++)
		out << _set[i] << ' ';
	out << std::endl;
	return out;
}

std::istream& AndArray::Insert(std::istream& in)
{
	int tmp;
	char is_cnt;
	do
	{
		std::cout << "Input " << _size + 1 << " item of array: ";
		std::cin >> tmp;

		if (!HasItem(tmp))
			AddItem(tmp);
		else
			std::cout << "This num already in array!" << std::endl;

		std::cout << "continue(y/n): ";
		std::cin >> is_cnt;
	} while (is_cnt != 'n');
	return in;
}
