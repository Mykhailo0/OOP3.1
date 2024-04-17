#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP3.1/triad.cpp"
#include "../OOP3.1/triangle.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Triangle triangle;

			triangle++;

			Assert::AreEqual(triangle.getA(), 2);
		}
	};
}
