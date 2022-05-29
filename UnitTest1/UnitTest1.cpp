#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\vladt\source\repos\PR4.2 OOP\PR4.2 OOP\Element.h"
#include "C:\Users\vladt\source\repos\PR4.2 OOP\PR4.2 OOP\GEOprog.cpp"
#include "C:\Users\vladt\source\repos\PR4.2 OOP\PR4.2 OOP\ARprog.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Element* el = new ARprog(0, 5);
			Assert::AreEqual((int)el->element(3), 15);
			
		}
	};
}
