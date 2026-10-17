#include "pch.h"
#include "CppUnitTest.h"
#include "../lab2_2/Integer.h"
#include "../lab2_2/Integer.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Integer obj;
			Assert::AreEqual(0, obj.getValue());
		}
	};
}
