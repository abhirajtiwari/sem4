#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "/home/180905422/Code/sem4/graph/graph_mat.h"
#include "/home/180905422/Code/sem4/graph/dfs.h"

int stack_end[10];
int tos = -1;

void topoSort(matptr G, int root) {
	static int visited[10] = {0};

	if (visited[root]) {

		return;	
	}	

	visited[root] = 1;

	for (int i = 0; i < 5; ++i) {
		if (*(*(G->mat + root) + i) == 1) {
			topoSort(G, i);
		}
	}
	stack_end[++tos] = root;
}

int main() {
	matptr test = createGraph();
	topoSort(test, 0);
	printMat(test);
	printf("\n");

	for (int i = tos; i >= 0; --i)
	{
		printf("%d ", stack_end[i]);
	}
	printf("\n");
}