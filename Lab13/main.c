#include <stdio.h>
#pragma warning(disable: 4996)
int main() {

	FILE* fp;
	char str[] = "test file 1 \ntest file 2 \ntest file 3 \ntest file 4\n";
	fp = fopen("test1.txt", "w");
	fwrite(str, sizeof(str), 1, fp);
	fclose(fp);

	return 0;
}