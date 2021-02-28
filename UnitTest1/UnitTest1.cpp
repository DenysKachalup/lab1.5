#include "pch.h"
#include "CppUnitTest.h"
#include "../lab1.5/Triad.h"
#include "../lab1.5/Time.h"
#include"../lab1.5/Triad.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Triad t1, t2;
			t1.Init(1, 2, 3);
			t2.Init(3, 2, 1);
			bool t;
			t = t1.Poriv(t1, t2);
			Assert::AreEqual(t, false);
		}
	};
}
