#include "pch.h"
#include "CppUnitTest.h"
#include"F:\ООП\Тема 4\Lab_4.5\Lab_4.5\Lab_4.5\IArray.h"
#include"F:\ООП\Тема 4\Lab_4.5\Lab_4.5\Lab_4.5\CArray.h"
#include"F:\ООП\Тема 4\Lab_4.5\Lab_4.5\Lab_4.5\CArray.cpp"
#include"F:\ООП\Тема 4\Lab_4.5\Lab_4.5\Lab_4.5\CAndArray.h"
#include"F:\ООП\Тема 4\Lab_4.5\Lab_4.5\Lab_4.5\CAndArray.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest45
{
	TEST_CLASS(UnitTest45)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			AndArray* arr = new AndArray(3, 1, 2, 3);
			Assert::AreEqual(arr->GetSize(), (unsigned int)3);
			delete arr;
		}
	};
}
