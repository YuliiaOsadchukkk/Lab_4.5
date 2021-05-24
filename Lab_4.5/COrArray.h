//COrArray.h
#pragma once
#include "IArray.h"
class OrArray :public IArray
{
private:
	int* _set = nullptr;
	unsigned int _size = 0;
	void AddItem(const int& val);

public:
	OrArray(unsigned int count = 0, ...);

	IArray* Add(IArray* r) override;
	float Foreach(const unsigned int& index) override;

	ostream& Print(ostream& out) const override;
	istream& Insert(istream& in) override;

	bool HasItem(const int& val) const override;
	const int* GetSet() const override;
	unsigned int GetSize() const override;
	~OrArray() override;
};


