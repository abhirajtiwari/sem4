#include <stdio.h>
#include <math.h>
#include "graph_mat.h"

void DFS(matptr G, int root) {
	static int visited[5] = {0};
	
	if (visited[root]) {	
		return;	
	}	

	visited[root] = 1;
	printf("%d ", root);

	for (int i = 0; i < 5; ++i) {
		if (*(*(G->mat + root) + i) == 1) {
			DFS(G, i);
		}
	}
}
