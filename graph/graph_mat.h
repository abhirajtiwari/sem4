#include <stdio.h>
#include <stdlib.h>

#pragma once

typedef struct AdjacencyMatrix * matptr;
struct AdjacencyMatrix {
	int vertices;
	int** mat;
};

matptr createGraph() {
	matptr newmat = (matptr) malloc(sizeof(struct AdjacencyMatrix));
	printf("Enter number of vertices: ");
	scanf("%d", &(newmat->vertices));
	newmat->mat = (int**) calloc(newmat->vertices, sizeof(int*));
	for (int i = 0; i < newmat->vertices; ++i)
	{
		*(newmat->mat+i) = calloc(newmat->vertices, sizeof(int));
	}
	for (int i = 0; i < newmat->vertices; ++i)
	{
		while (1) {
			printf("Enter elements adjecent to %d: ", i);
			int n;
			scanf("%d", &n);
			if (n == -1) break;
			else *(*(newmat->mat + i) + n) = 1;
		}
	}
	return newmat;
}

void printMat (matptr mat) {
	for (int i = 0; i < mat->vertices; ++i)
	{
		for (int j = 0; j < mat->vertices; ++j)
		{
			printf("%d ", *(*(mat->mat+i)+j));
		}
		printf("\n");
	}
}
