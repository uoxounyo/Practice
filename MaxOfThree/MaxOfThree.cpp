//=====================================================
//  3�l�̍ő�l
//=====================================================
#include <stdio.h>
#include <stdlib.h>  // srand(),rand()
#include <time.h>    // time()
//  �֐��v���g�^�C�v
int MaxOfThree(int a, int b, int c);

int main()
{
    srand(time(nullptr));
    int a = rand() % 100;
    int b = rand() % 100;
    int c = rand() % 100;
    int ans = MaxOfThree(a, b, c);
    printf("MaxOfThree(%d, %d, %d): %d\n", a, b, c, ans);
    return 0;
}

int MaxOfThree(int a, int b, int c)
{
    int max = a;

    if (b > max)
        max = b;
    if (c > max)
        max = c;

    return max;
}