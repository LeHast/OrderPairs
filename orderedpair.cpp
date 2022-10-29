#include <iostream>
#include <vector>
using namespace std;

namespace cs_pairs {
	/*template <class T>
	typename OrderedPair<T>::value_type OrderedPair<T>::first i const {
		throw DuplicateMemberError();
		return items[i];
	}*/


	template <class T>
	OrderedPair<T>::OrderedPair(T newFirst, T newSecond) {
		setFirst(newFirst);
		setSecond(newSecond);
	}

	template <class T>
	void OrderedPair<T>::setFirst(T newFirst) {
		// if statement to throw an exception if precondition not met goes here.        
		first = newFirst;
	}
	template <class T>
	void OrderedPair<T>::setSecond(T newSecond) {
		// if statement to throw an exception if precondition not met goes here.    
		second = newSecond;
	}
	template <class T>
	T OrderedPair<T>::getFirst() const {
		return first;
	}
	template <class T>
	T OrderedPair<T>::getSecond() const {
		return second;
	}
	template <class T>
	OrderedPair<T> OrderedPair<T>::operator+(const OrderedPair& right) const {
		return OrderedPair(first + right.first, second + right.second);
	}

	template <class T>
	bool OrderedPair<T>::operator<(const OrderedPair& right) const {
		return first + second < right.first + right.second;
	}

	template <class T>
	void OrderedPair<T>::print() const {
		cout << "(" << first << ", " << second << ")";
	}
}