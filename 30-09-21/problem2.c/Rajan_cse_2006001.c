#include <stdio.h>
int main()
    {
            int num,  res = 0, oct = 0, flag = 0;
            printf("Enter an integer: ");
            scanf("%d", &num);

            while (num != 0)
            {
                res = res * 10 + num% 8;
                if (res == 0)
                {
                    flag = 1;
                }

                num = num / 8;
            }

            while (res != 0)
            {
                oct = oct * 10 + res % 10;
                res = res / 10;
            }
            if (flag == 1)
            {
                oct = oct * 10;
            }

            printf("The octal is %d.", oct);

    }