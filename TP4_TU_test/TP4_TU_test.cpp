#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
	#include "../TP4_TU/TP4_TU.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TP4TUtest
{
	TEST_CLASS(TP4TUtest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(estPair(6), 1);
		}

		TEST_METHOD(TestEstPair2)
		{
			Assert::AreEqual(estPair(4), 1);
		}

		TEST_METHOD(TestEstPair3) {
			Assert::AreEqual(estPair(7), 0);
		}

		TEST_METHOD(TestEstPair4) {
			Assert::AreEqual(estPair(-2), 1);
		}

		TEST_METHOD(TestEstPair5) {
			Assert::AreEqual(estPair(-3), 0);
		}

		//Les tests ne passaient pas car la fonction renvoyait faux quand le nombre donné était pair.

		TEST_METHOD(TestMax2_1) {
			Assert::AreEqual(max2(5, 3), 5);
		}

		TEST_METHOD(TestMax2_1) {
			Assert::AreEqual(max2(3, 5), 5);
		}



	};
}
