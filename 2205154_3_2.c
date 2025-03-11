#include <stdio.h>
#include <string.h>
int main(void)
{
    char s[5 * 104];
    scanf("%[^\n]s", &s);

    int length = strlen(s);

    int max = 0;
    char checker;
    for (int i = 0; i < length; i++)
    {
        int string = 1, flag = 0;
        char checker = s[i];

        for (int j = i + 1; j < length; j++)
        {
            for (int k = i; k < j; k++)
            {
                if (s[j] == s[k])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag != 1)
            {
                string++;
            }

            else
                break;
        }

        max = (string > max) ? string : max;
    }

    printf("%d", max);
}
