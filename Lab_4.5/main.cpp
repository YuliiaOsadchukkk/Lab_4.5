//main.cpp
#include "CAndArray.h"
#include "COrArray.h"
using namespace std;

ostream& operator << (ostream& out, const IArray& r)
{
	return r.Print(out);
}

istream& operator >> (istream& in, IArray& r)
{
	return r.Insert(in);
}

void main()
{
	cout << "AndArray" << endl;
	{
		IArray* A = new AndArray();
		IArray* B = new AndArray();

		cin >> *A;
		cout << "*A = " << *A << endl;

		cin >> *B;
		cout << "*B = " << *B << endl;

		IArray* C = A->Add(B);
		cout << "*C = " << *C << endl;

		cout << "*A[0](foreach): " << A->Foreach(0) << endl;

		cout << typeid(A).name() << endl;
		cout << typeid(*A).name() << endl << endl;

		delete A;
		delete B;
		delete C;
	}

	cout << "OrArray" << endl;
	{
		IArray* A = new OrArray();
		IArray* B = new OrArray();

		cin >> *A;
		cout << "*A = " << *A << endl;

		cin >> *B;
		cout << "*B = " << *B << endl;

		IArray* C = A->Add(B);
		cout << "*C = " << *C << endl;

		cout << "*A[0](foreach): " << A->Foreach(0) << endl;

		cout << typeid(A).name() << endl;
		cout << typeid(*A).name() << endl << endl;

		delete A;
		delete B;
		delete C;
	}
}