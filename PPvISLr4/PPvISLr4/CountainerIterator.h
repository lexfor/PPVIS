#pragma once
#include <iterator>
#include <iostream>
#include "nongraf.h"
using namespace std;
template<typename ValueType>
class Counteineriterator :public iterator<input_iterator_tag, ValueType> {
	friend class nongraf;
private:
	ValueType* p;
	Counteineriterator(ValueType* p);
public:
	Counteineriterator(const Counteineriterator& it);
	bool operator!=(Counteineriterator const& it)const ;
	Counteineriterator operator++();
};

template<typename ValueType>
Counteineriterator<ValueType>::Counteineriterator(ValueType* point) : p(point) {}
template<typename ValueType>
Counteineriterator<ValueType>::Counteineriterator(const Counteineriterator& it) : p(it.p){}
template<typename ValueType>
bool Counteineriterator<ValueType>::operator!=(Counteineriterator const& it)const  {
	return p != it.p;
}
template<typename ValueType>
Counteineriterator<ValueType> Counteineriterator<ValueType>::operator++() {
	++p;
	return *this;
}
