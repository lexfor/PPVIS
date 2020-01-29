#include "nongraf.h"
int main() {
	setlocale(LC_ALL, "rus");
	nongraf<int>graf;
	graf.PushVer(0);
	graf.PushVer(1);
	graf.PushVer(2);
	graf.PushEdge(2,0);
	graf.PushEdge(1,0);
	std::cout << graf;
	std::cout << std::endl;
	graf.EraseVertex(graf.End());
	nongraf<int>::Iterator it(graf.GetVerIter(0));
	graf.EraseVertex(it);
	int a;
	a = 3;
	graf.InsertVertex(4, graf.Begin());

	std::cout << graf;
	std::cout << graf.GetEdgeNum();
	/*nongraf<std::vector<int>> graf;
	std::vector<int> vec{ 1,2 };
	std::vector<int> vec1{ 2,3 };
	std::vector<int> vec2{ 3,4 };
	std::vector<int> vec3{ 5,4 };
	graf.PushVer(vec);
	graf.PushVer(vec1);
	graf.PushVer(vec2);
	graf.PushEdge(0, 1);
	graf.PushEdge(1, 2);
	graf.PushEdge(1, 0);
	std::cout << graf;
	return 0;*/
}