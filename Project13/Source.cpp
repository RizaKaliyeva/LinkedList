#include"List.h"
#include"List.cpp"

int main() {
	
		List <int> L;
		L.pushBack(5);
		L.pushBack(12);
		L.pushBack(15);
		cout << L.size() << endl;
		L.print();

		
		L.pushBack(15);
		L.pushFront(4);
		L.print();
		cout << "------------------------------" << endl;
		L.delFirst();
		L.print();
		cout << "------------------------------" << endl;
		L.delLast();
		L.print();
		cout << "------------------------------" << endl;
		cout << L.Find(12) << endl;
	
	
	system("pause");
	return 0;
}