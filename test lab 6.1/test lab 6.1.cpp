#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab6.1/lab6.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace testlab61
{
	TEST_CLASS(testlab61)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int testArray1[SIZE] = { -10, -5, -1, 3, 0, 2, 5, -50 };
			Assert::AreEqual(6, CountElements(testArray1, 8)); 
		}
	};
}
