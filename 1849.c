#include <stdio.h>

int min(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}
int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}


int main() {
    int w1, l1, w2, l2, a,b;

    scanf("%d %d %d %d", &w1, &l1, &w2, &l2);

    a = min(w1, l1);
    b = min(w2, l2);
    a += b;
    int x = min(max(w1, l1), max(w2, l2));
    int y = min(a,x);

    printf("%d\n", y*y);

    return 0;
}
