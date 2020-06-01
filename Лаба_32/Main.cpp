#include "Graph.h"





extern Graph graph;
///////////////////////////////////////////////////////////////////////////////////////

void print(vector<vector<int>> m) {
	for (int i = 0; i < m.size(); i++) {
		for (int j = 0; j < m.size(); j++) {
			cout << m[i][j] << "\t";
		}
		cout << endl;
	}
}


int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "ru");

	graph.addVertex('a');
	graph.addVertex('b');
	graph.addVertex('c');
	graph.addVertex('d');

	graph.addEdge('a', 'b', 5);
	graph.addEdge('a', 'c', 11);	
	graph.addEdge('a', 'd', 9);

	graph.addEdge('b', 'a', 10);
	graph.addEdge('b', 'c', 8);
	graph.addEdge('b', 'd', 7);

	graph.addEdge('c', 'a', 7);
	graph.addEdge('c', 'b', 14);
	graph.addEdge('c', 'd', 8);

	graph.addEdge('d', 'a', 12);
	graph.addEdge('d', 'b', 6);
	graph.addEdge('d', 'c', 15);



	graph.zadacha();
	
	
	MainDraw(argc, argv);
	
	

	return 0;
}