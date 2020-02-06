#include "graph_mat.h"
#include "dfs.h"

int main() {
	matptr test = createGraph();
	printMat(test);
	DFS(test, 0);
}
