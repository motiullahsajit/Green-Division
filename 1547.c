#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int no_std, luck_number, diff, current_diff, position = 1, flag = 0;
        scanf("%d %d", &no_std, &luck_number);
        int guess[no_std];
        for (int i = 0; i < no_std; i++)
        {
            scanf("%d", &guess[i]);

            if (i == 0)
            {
                if (guess[i] > luck_number)
                {
                    diff = guess[i] - luck_number;
                    current_diff = guess[i] - luck_number;
                }
                else
                {
                    diff = luck_number - guess[i];
                    current_diff = luck_number - guess[i];
                }
            }
            else
            {
                if (guess[i] > luck_number)
                {
                    current_diff = guess[i] - luck_number;
                    if (current_diff < diff)
                    {
                        diff = current_diff;
                        position = i + 1;
                    }
                }
                else
                {
                    current_diff = luck_number - guess[i];
                    if (current_diff < diff)
                    {
                        diff = current_diff;
                        position = i + 1;
                    }
                }
            }
        }

        printf("%d\n", position);
    }

    return 0;
}