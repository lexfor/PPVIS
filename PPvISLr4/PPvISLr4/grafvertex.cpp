#include "grafvertex.h"
template <class T>
grafvertex<T>::grafvertex()
{}
template <class T>
grafvertex<T>::grafvertex(T val) : Value(val)
{}
template <class T>
T grafvertex<T>::GetValue() {
	return Value;
}