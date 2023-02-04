#include <stdio.h>
#include <math.h>

int main() {
  
    double a,b,c;
    
    while (scanf("%lf %lf", &a, &b) == 2)
    {
        a = fabs(a -b);
        c = ceil(b/a);
        printf("%d\n", (int)c);
    }
    

    return 0;
}
