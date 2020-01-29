#pragma once
#include <iostream>
#include <vector>
#include <iterator>
template <class T>
class nongraf {
private:
	std::vector<T> VertexValue;
	std::vector<std::vector<int>> AdjacencyList;
	std::vector<T> AdjVer;
	int Size;
public:
	class Iterator {
	private:
		const T* ptr;
		bool IsReverse;
	public:
		Iterator(const T* cur) : ptr(cur),IsReverse(false)
		{}
		Iterator(const T* cur,bool t) : ptr(cur), IsReverse(t)
		{}
		const T* operator+(int n) { 
			if (!IsReverse) {
				return ptr + n;
			}
			else {
				return ptr - n;
			}
		}
		const T* operator-(int n) {
			if (!IsReverse) {
				return ptr - n;
			}
			else {
				return ptr + n;
			}
		}
		const T* operator++(int) { 
			if (!IsReverse) {
				return ptr++;
			}
			else {
				return ptr--;
			}
		}
		const T* operator--(int) {
			if (!IsReverse) {
				return ptr--;
			}
			else {
				return ptr++;
			}
		}
		const T* operator++() {
			if (!IsReverse) {
				return ++ptr;
			}
			else {
				return --ptr;
			}
		}
		const T* operator--() {
			if (!IsReverse) {
				return --ptr;
			}
			else {
				return ++ptr;
			}
		}
		bool operator!=(const Iterator& it) { return ptr != it.ptr; }
		bool operator==(const Iterator& it) { return ptr == it.ptr; }
		const T& operator*() { return *ptr; }
	};
	nongraf();
	nongraf(const nongraf<T>&);
	~nongraf();
	std::vector<T> GetValue();
	std::vector<std::vector<int>> GetAdjacency();
	void PushVer(T);
	void PushEdge(int,int);
	bool IsVertexExist(T);
	bool IsEdgeExist(int, int);
	int GetVertexNum();
	double GetEdgeNum();
	int GetVertexExtent(int Ver);
	bool Empty();
	void Clear();
	void EraseVertex(Iterator);
	void EraseEdge(int,int);
	void InsertVertex(T,Iterator);
	int size(); 
	Iterator GetVerIter(T Val) {
		for (int i = 0; i < VertexValue.size(); i++) {
			if (VertexValue[i] == Val) {
				Iterator it(&(*(VertexValue.begin() + i)));
				return it;
			}
		}
	}
	T for_each(Iterator, Iterator, T);
	Iterator Begin()const {
		try {
			if (Size < 2) {
				throw 2;
			}
		}
		catch(int a){
			std::cout << "No elements" << std::endl;
		}
		const T* p = &(*VertexValue.begin());
		Iterator it(p);
		return it;
	}
	Iterator End()const {
		try {
			if (Size < 2) {
				throw 2;
			}
		}
		catch (int a) {
			std::cout << "No elements" << std::endl;
		}
		const T* p = &(*(VertexValue.end() - 1));
		Iterator it(p);
		return it;
	}
	Iterator Rend() {
		try {
			if (Size < 2) {
				throw 2;
			}
		}
		catch (int a) {
			std::cout << "No elements" << std::endl;
		}
		const T* p = &(*(VertexValue.end() - 1));
		Iterator it(p,true);
		return it;
	}
	Iterator Rbegin()const {
		try {
			if (Size < 2) {
				throw 2;
			}
		}
		catch (int a) {
			std::cout << "No elements" << std::endl;
		}
		const T* p = &(*VertexValue.begin());
		Iterator it(p, true);
		return it;
	}
	Iterator AdjanceVer(Iterator it) {
		AdjVer.clear();
		for (int i = 0; i < VertexValue.size(); i++) {
			if (it == Begin() + i) {
				for (int j = 0; j < AdjacencyList.size(); j++) {
					AdjVer.push_back(VertexValue[j]);
				}
				Iterator(&(*AdjVer.begin()));
				return Iterator;
			}
		}
	}
	Iterator RadjanceVer(Iterator it) {
		AdjVer.clear();
		for (int i = 0; i < VertexValue.size(); i++) {
			if (it == Begin() + i) {
				for (int j = 0; j < AdjacencyList.size(); j++) {
					AdjVer.push_back(VertexValue[j]);
				}
				Iterator(&(*AdjVer.end() - 1), true);
				return Iterator;
			}
		}
	}
	void operator=(const nongraf<T>&);
	bool operator==(const nongraf<T>&);
	bool operator!=(const nongraf<T>&);
	bool operator>(const nongraf<T>&);
	bool operator<(const nongraf<T>&);
	bool operator>=(const nongraf<T>&);
	bool operator<=(const nongraf<T>&);
	T operator[](int );
	friend std::ostream& operator<<(std::ostream& out, const nongraf& point) {
		for (int i = 0; i < point.VertexValue.size(); i++) {
			out << "Vertex num : " << i << " Vertex value : " << point.VertexValue[i] << std::endl;
		}
		return out;
	}
};
template <class T>
void nongraf<T>::PushVer(T Val) {
	Size++;
	VertexValue.push_back(Val);
	std::vector<T> vec;
	AdjacencyList.push_back(vec);
}
template <class T>
void nongraf<T>::PushEdge(int FirstVer,int SecondVer) {
	try {
		if (!IsVertexExist(FirstVer)) {
			throw 1;
		}
		if (!IsVertexExist(SecondVer)) {
			throw 3;
		}
	}
	catch (int a) {
		switch (a)
		{
		case 1:
			std::cout << "Первой вершины не существует " << std::endl;
			return;
		case 3:
			std::cout << "Второй вершины не существует " << std::endl;
			return;
		default:
			break;
		}
	}
	AdjacencyList[FirstVer].push_back(SecondVer);
	AdjacencyList[SecondVer].push_back(FirstVer);
}
template<class T>
nongraf<T>::nongraf() : Size(1)
{}
template<class T>
nongraf<T>::nongraf(const nongraf<T>& graf) {
	Size = 1;
	VertexValue = graf.GetValue();
	AdjacencyList = graf.GetAdjacency();
}
template<class T>
std::vector<T> nongraf<T>::GetValue() {
	return VertexValue;
}
template<class T>
std::vector<std::vector<int>> nongraf<T>::GetAdjacency() {
	return AdjacencyList;
}
template<class T>
nongraf<T>::~nongraf() {
}
template<class T>
bool nongraf<T>::Empty() {
	if (VertexValue.empty() && AdjacencyList.empty()) {
		return true;
	}
	return false;
}
template<class T>
void nongraf<T>::Clear() {
	Size = 1;
	VertexValue.clear();
	AdjacencyList.clear();
}
template<class T>
void nongraf<T>::operator=(const nongraf<T>& graf) {
	VertexValue = graf.VertexValue;
	AdjacencyList = graf.AdjacencyList;
}
template<class T>
bool nongraf<T>::operator==(const nongraf<T>& graf) {
	if (VertexValue.size() == graf.VertexValue.size() && AdjacencyList.size() == graf.AdjacencyList.size()) {
		return true;
	}
	return false;
}
template<class T>
bool nongraf<T>::operator!=(const nongraf<T>& graf) {
	if (VertexValue.size() != graf.VertexValue.size() && AdjacencyList.size() != graf.AdjacencyList.size()) {
		return true;
	}
	return false;
}
template<class T>
bool nongraf<T>::operator>(const nongraf<T>& graf) {
	if (VertexValue.size() > graf.VertexValue.size() && AdjacencyList.size() > graf.AdjacencyList.size()) {
		return true;
	}
	return false;
}
template<class T>
bool nongraf<T>::operator<(const nongraf<T>& graf) {
	if (VertexValue.size() < graf.VertexValue.size() && AdjacencyList.size() < graf.AdjacencyList.size()) {
		return true;
	}
	return false;
}
template<class T>
bool nongraf<T>::operator>=(const nongraf<T>& graf) {
	if (VertexValue.size() >= graf.VertexValue.size() && AdjacencyList.size() >= graf.AdjacencyList.size()) {
		return true;
	}
	return false;
}
template<class T>
bool nongraf<T>::operator<=(const nongraf<T>& graf) {
	if (VertexValue.size() <= graf.VertexValue.size() && AdjacencyList.size() <= graf.AdjacencyList.size()) {
		return true;
	}
	return false;
}
template<class T>
bool nongraf<T>::IsVertexExist(T Val) {
	for (int i = 0; i < VertexValue.size(); i++) {
		if (VertexValue[i] == Val) {
			return true;
		}
	}
	return false;
}
template<class T>
bool nongraf<T>::IsEdgeExist(int FirstVer,int SecondVer) {
	for (int i = 0; i < AdjacencyList[FirstVer].size(); i++) {
		if (AdjacencyList[FirstVer][i] == SecondVer) {
			return true;
		}
	}
	return false;
}
template<class T>
int nongraf<T>::GetVertexNum() {
	return AdjacencyList.size() - 1;
}
template<class T>
double nongraf<T>::GetEdgeNum() {
	double Summ;
	Summ = 0;
	for (int i = 0; i < AdjacencyList.size(); i++) {
		Summ += AdjacencyList[i].size();
	}
	return Summ/2;
}
template<class T>
int nongraf<T>::GetVertexExtent(int Ver) {
	return AdjacencyList[Ver].size() - 1;
}
template<class T>
void nongraf<T>::EraseVertex(Iterator it) {
	for (int i = 0; i < VertexValue.size(); i++) {
		Iterator iter = Begin();
		if (it == (iter + i)) {
			VertexValue.erase(VertexValue.begin() + i);
			AdjacencyList.erase(AdjacencyList.begin() + i);
			for (int j = 0; j < AdjacencyList.size(); j++) {
				for (int k = 0; k < AdjacencyList[j].size(); k++) {
					if (AdjacencyList[j][k] == i) {
						AdjacencyList[j].erase(AdjacencyList[j].begin() + k);
					}
				}
			}
		}
	}
	Size--;
}
template<class T>
void nongraf<T>::EraseEdge(int FirstVer,int SecondVer) {
	for (int i = 0; i < AdjacencyList[FirstVer].size(); i++) {
		if (AdjacencyList[FirstVer][i] == SecondVer) {
			AdjacencyList[FirstVer].erase(AdjacencyList[FirstVer].begin() + i);
		}
	}
	for (int i = 0; i < AdjacencyList[SecondVer].size(); i++) {
		if (AdjacencyList[SecondVer][i] == FirstVer) {
			AdjacencyList[SecondVer].erase(AdjacencyList[SecondVer].begin() + i);
		}
	}
}
template<class T>
T nongraf<T>::operator[](int Num){
	try{
		if (Num < 0 || Num > VertexValue.size()) {
			throw 1;
		}
	}
	catch (int a) {
		if (a == 1) {
			std::cout << "Wrong num" << std::endl;
		}
	}
	return VertexValue[Num];
}
template<class T>
void nongraf<T>::InsertVertex(T Val,Iterator it) {
	Size++;
	std::vector<int> vec;
	for (int i = 0; i < VertexValue.size(); i++) {
		Iterator iter = Begin();
		if (it == iter + i) {
			VertexValue.insert(VertexValue.begin() + i,Val);
			AdjacencyList.insert(AdjacencyList.begin() + i, vec);
		}
	}
}
template<class T>
int nongraf<T>::size() {
	if (VertexValue.size() == AdjacencyList.size()) {
		return VertexValue.size();
	}
	return -1;
} 
template<class T>
T nongraf<T>::for_each(Iterator first, Iterator last, T Func) {
	while (first != last)
	{
		Func(*first);
	}
	return Func;
}

