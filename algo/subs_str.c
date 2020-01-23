#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int stringSearch (char* a, char* key) {
	int count = 0;
	for (int i = 0; i <= strlen(a)-strlen(key); ++i)
	{
		for (int j = 0; j < strlen(key); ++j, ++i)
		{
			count++;
			if(key[j] != a[i]) break;
			if(j == strlen(key)-1) {
				count++;
				printf("Count: %d\n", count);
				return 1;
			}
		}
	}
	printf("Count: %d\n", count);
	return 0;
} 

int main() {
	printf("Input a string: ");
	char input[50];
	scanf("%s", input);
	printf("Enter search key: ");
	char key[50];
	scanf("%s", key);
	printf("Substring was %d\n", stringSearch(input, key));
}
