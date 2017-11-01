#include <stdio.h>

int main(void)
{
	int area1 = 5;
	float area2 = 5;
	int bas1 = 5;
	float bas2 = 5;
	int hojd1 = 5;
	float hojd2 = 5;

	area1 = bas1 * hojd1 / 2;
	area2 = bas1 * hojd1 / 2;
	area1 = bas1 * (hojd1 / 2);
	area2 = bas2 * (hojd1 / 2);
	area2 = bas1 * (hojd1 / 2);
	area2 = bas2 * hojd1 / 2;
	area1 = bas2 * hojd1;
	
	
	int h1 = 5 / 2;
	float h2 = 5 / 2;
	float h3 = 5.0 / 2;
	float h4 = 5 / 2.0;

	printf("%d", area1, "%d", area2);
	getchar();
}