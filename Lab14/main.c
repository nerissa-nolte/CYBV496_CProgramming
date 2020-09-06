#include <stdio.h>
#pragma warning(disable: 4996)
int main() {

	FILE* fp1, * fp2;
	char str[] = "test file 1 \ntest file 2 \ntest file 3 \ntest file 4\n";
	fp1 = fopen("test1.txt", "r");
	fp2 = fopen("test2.txt", "w");
	fread(str, sizeof(str), 1, fp1);
	fwrite(str, sizeof(str), 1, fp2);
	fclose(fp1);
	fclose(fp2);

	return 0;
}