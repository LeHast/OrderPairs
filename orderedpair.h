#ifndef ORDERED_PAIR_H
#define ORDERED_PAIR_H
#include <iostream>

/* precondition for setFirst and setSecond: the values of first and second cannot be equal,
except when they are both equal to DEFAULT_VALUE.
*/


namespace cs_pairs {
	template <class T> 
	class OrderedPair {
	public:
		class  DuplicateMemberError{};
		// Use the first of the following two lines to make the non-templated version work.
		// Switch to the second one when you begin converting to a templated version.

		static const int DEFAULT_VALUE = int();
		//static const int DEFAULT_VALUE;

		OrderedPair(T newFirst = DEFAULT_VALUE, T newSecond = DEFAULT_VALUE);
		void setFirst(T newFirst);
		void setSecond(T newSecond);
		T getFirst() const;
		T getSecond() const;
		OrderedPair operator+(const OrderedPair& right) const;
		bool operator<(const OrderedPair& right) const;
		void print() const;
	private:
		T first;
		T second;
	};
	

	// Leave the following const declaration commented out when you are testing the non-templated
	// version. Uncomment it when you begin converting to a templated version.  
	// The templated version will require a template prefix as well as some minor edits to the code.

	 //const int OrderedPair::DEFAULT_VALUE = int();

}

#include "orderedpair.cpp"
#endif

/*
default value: (0, 0)
(ò, q)
(é, n)
(É, m)
(æ, q)
(ò, s)
(Ö, t)
(é, h)
(å, v)
(ê, n)
(ù, i)
(27, 76)
(24, 79)
(51, 155)
(42, 94)
(31, 75)
(27, 55)
(24, 78)
(11, 81)
(21, 72)
(46, 80)
Enter two numbers to use in an OrderedPair.  Make sure they are different numbers: 5
2
The resulting OrderedPair: (5, 2)
Presione una tecla para continuar . . .
*/