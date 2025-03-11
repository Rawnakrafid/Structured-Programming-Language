#include <stdio.h>
#include <string.h>
int main()
{
    char s[20];
    char p[20];
    int i = 0, j = 0;
    int starmarker = 0;
    int star_idx = -1;
    scanf("%[^\n]s", s);
    scanf(" %[^\n]s", p);
    int marker = 0;
    int s_length = strlen(s);
    int p_length = strlen(p);

    // check where the star remains, and if there is a star

    for (int m = 0; m < p_length; m++)
    {
        if (p[m] == '*')
        {
            starmarker = 1;
            star_idx = m;
            break;
        }
    }

    while (i < s_length && j < p_length)
    {
        // if there is no star, length of p cannot exceed s, so we break here
        if (starmarker == 0)
        {
            if ((p_length != s_length))
            {
                marker = 0;
                break;
            }

        
        }

        for (; j < p_length; j++) // since we came here, means there is a star.
        {
            if ((s[i] == p[j]) && (p[j + 1] != '*')) // star prints previous character multiple times, checking that
            {                                          //if the next char isnt star, means they are similar
                i++;
                marker = 1;
               
            }

            else if (p[j] == '.' && p[j + 1] == '*') // checking the case for .*
            {

                marker = 1;
                while ((s[i] != '\0') && (s[i] != p[j + 2] || p[j + 2] == 0))  
                {
                    i++;
                }
                j += 2;
                break;
            }
            else if (p[j] == '.')  //checking .
            {
                i++;
            }

            else if (p[j + 1] == '*') //checking for only *, not .*
            {
                while (s[i] == p[j])
                {
                    i++;
                    marker = 1;
                }
                j++;
            }

            else if (p[j] == '*')  // we have handled all cases of * before, so we continue so that j increments
            {
                continue;
            }

            

            else     //meaning, it didnt match with any of the possibilities
            {
                marker = 0;
            }
        }
    }

    if (marker == 1)    
        printf("true\n");
    else
        printf("false\n");
}