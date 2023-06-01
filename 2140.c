#include <stdio.h>

int main()
{
    int bills[6] = {2, 5, 10, 20, 50, 100};

    int x, y, flag, bill;

    while (1)
    {
        flag = 0;
        scanf("%d %d", &x, &y);

        if (x == 0 && y == 0)
        {
            break;
        }
        bill = y - x;
        for (int i = 0; i < 5; i++)
        {
            for (int j = i + 1; j < 6; j++)
            {
                if (bill == (bills[i] + bills[j]))
                {
                    flag = 1;
                    break;
                }
                if (flag == 1)
                    break;
            }
        }
        if (flag == 1)
            printf("possible\n");
        else
            printf("impossible\n");
    }

    return 0;
}