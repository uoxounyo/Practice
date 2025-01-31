//==========================================================
// 3値の最小値
//==========================================================
#include <stdio.h>
#include <stdlib.h>  // srand(),rand()
#include <time.h>    // time()
// 関数プロトタイプ
int MinOfThree(int a, int b, int c);

int main()
{
	srand(time(nullptr));
	int a = rand() % 100;
	int b = rand() % 100;
	int c = rand() % 100;
	int ans = MinOfThree(a, b, c);
	printf("MinOfThree(%d,%d,%d) => %d\n", a, b, c, ans);
	return 0;
}
int MinOfThree(int a, int b, int c)
{
	int min = a;

	if (b < min)
		min = b;
	if (c < min)
		min = c;

	return min;
}