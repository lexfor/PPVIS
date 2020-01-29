#include "nongraf.h"
/*template <class T>
void nongraf<T>::PushVer(T Val, std::vector<int> AdjacentPeaks) {
	try {
		if (!IsVerExist(AdjacentPeaks)) {
			throw 1;
		}
	}
	catch (int a){
		std::cout << "This vertex do not exist" << std::endl;
		return;
	}
	VertexValue.push_back(Val);
	AdjacencyList.push_back(AdjacentPeaks);
}
template <class T>
bool nongraf<T>::IsVerExist( std::vector<int> AdjacentPeaks) {
	for (int i = 0; i < AdjacentPeaks.size(); i++) {
		if (AdjacencyList.size() < AdjacentPeaks[i]) {
			return false;
		}
	}
	return true;
}

template<class T>
nongraf<T>::nongraf() 
{}
template<class T>
nongraf<T>::nongraf(const nongraf<T>& graf) {
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
	VertexValue.clear();
	AdjacencyList.clear();
}*/