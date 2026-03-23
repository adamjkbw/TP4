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

		TEST_METHOD(TestMax2_2) {
			Assert::AreEqual(max2(3, 5), 5);
		}

		TEST_METHOD(TestMax2_3) {
			Assert::AreEqual(max2(-1, -8), -1);
		}

		TEST_METHOD(TestMax2_4) {
			Assert::AreEqual(max2(4, 4), 4);
		}

		//le test 2 car c'est le seul ou le parametre b est le 

		TEST_METHOD(TestFactoriel1) {
			Assert::AreEqual(factorielle(0), 1);
		}
		TEST_METHOD(TestFactoriel2) {
			Assert::AreEqual(factorielle(1), 1);
		}
		TEST_METHOD(TestFactoriel3) {
			Assert::AreEqual(factorielle(4), 24);
		}
		TEST_METHOD(TestFactoriel4) {
			Assert::AreEqual(factorielle(5), 120);
		}

		TEST_METHOD(TestFactorielN) {
			Assert::AreEqual(factorielle(-3), -1);
		}

		//Les nombres factoriels ne sont que entiers et positifs donc ils ne doivent pas être acceptés
		//On peut retourner -1 pour notifier l'utilisateur que quelque chose n'est pas bon
	
		TEST_METHOD(TestMajuscule1) {
			Assert::AreEqual(contientMajuscule("bonjour"), 0);
		}
		TEST_METHOD(TestMajuscule2) {
			Assert::AreEqual(contientMajuscule("BonJour"), 1);
		}
		TEST_METHOD(TestMajuscule3) {
			Assert::AreEqual(contientMajuscule("ABC"), 1);
		}
		TEST_METHOD(TestMajuscule4) {
			Assert::AreEqual(contientMajuscule(""), 0);
		}

		const char* maChaine = NULL;
		TEST_METHOD(TestMajusculeN) {
			Assert::AreEqual(contientMajuscule(maChaine), 0);
		}


		TEST_METHOD(TestDivision1) {
			Assert::AreEqual(divisionExacte(10, 2), 1);
		}

		TEST_METHOD(TestDivision2) {
			Assert::AreEqual(divisionExacte(10, 3), 0);
		}

		TEST_METHOD(TestDivision3) {
			Assert::AreEqual(divisionExacte(0, 5), 1);
		}

		TEST_METHOD(TestDivisionParZero) {
			Assert::AreEqual(divisionExacte(10, 0), 0);
		}

		//Car il essaie de faire une division par 0 ce qui est impossible

		



	};
}
