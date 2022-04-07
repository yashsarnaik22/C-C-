#include <stdio.h>
  
int printbinomial(int max)
{
    for (int m = 0; m <= max; m++) {
        printf("%2d", m);
        int binom = 1;
        for (int x = 0; x <= m; x++) {
  
            if (m != 0 && x != 0)
  
                binom = binom * (m - x + 1) / x;
  
            printf("%4d", binom);
        }
        printf("\n");
    }
}

int main()
{ int max,n;
printf("Enter n:\n");
scanf("%d", &n);
    max=n;
    printbinomial(max);
    return 0;
}
