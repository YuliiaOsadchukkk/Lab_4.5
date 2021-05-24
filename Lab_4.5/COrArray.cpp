//COrArray.cpp
#include "COrArray.h"

void OrArray::AddItem(const int& val)
{
	int* tmp = new int[_size + 1];
	if (_size > 0)
		memcpy(tmp, _set, _size * sizeof(int));
	_set = tmp;
	_set[_size] = val;
	++_size;
}

bool OrArray::HasItem(const int& val) const
{
	for (size_t i = 0; i < _size; i++)
		if (val == _set[i])
			return true;

	return false;
}

const int* OrArray::GetSet() const
{
	return _set;
}

unsigned int OrArray::GetSize() const
{
	return _size;
}

OrArray::~OrArray()
{
	if (_set != nullptr)
		delete[] _set;
}

OrArray::OrArray(unsigned int count, ...) {
	if (count == 0)
		return;

	_set = new int[_size = count];
	for (size_t i = 0; i < _size; i++)
		_set[i] = (&count + 1)[i];
}

IArray* OrArray::Add(IArray* r)
{
	OrArray* tmp = new OrArray();
	for (unsigned int i = 0; i < _size; i++)
		tmp->AddItem(_set[i]);

	for (unsigned int i = 0; i < r->GetSize(); i++)
		if (!tmp->HasItem(r->GetSet()[i]))
			tmp->AddItem(r->GetSet()[i]);
	return tmp;
}
float OrArray::Foreach(const unsigned int& index)
{
	return log(_set[index]);
}

std::ostream& OrArray::Print(std::ostream& out) const
{
	for (size_t i = 0; i < _size; i++)
		out << _set[i] << ' ';
	out << std::endl;
	return out;
}
std::istream& OrArray::Insert(std::istream& in)
{
	int tmp;
	char is_cnt;
	do
	{
		std::cout << "Input " << _size + 1 << " item of array: ";
		in >> tmp;

		if (!HasItem(tmp))
			AddItem(tmp);
		else
			std::cout << "This num already in array!" << std::endl;

		std::cout << "continue(y/n): ";
		in >> is_cnt;
	} while (is_cnt != 'n');
	return in;
}
