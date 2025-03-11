#include <stdio.h>
#include <stdlib.h>


char **strTokenize(char *str, char delim) {
    int str_size = 0;
    int i = 0;
    while (*(str + i) != 0)
    {
        str_size++;
        i++;
    }
    int index = str_size;
    if (*(str + str_size - 1) == delim)
        index--;
    int tok_no = 1;

    for (i = (index - 1); i >= 0; i--)
    {
        if (*(str + i) == delim && *(str + i - 1) == delim)
            continue;
        if (*(str + i) == delim)
            tok_no++;
    }
    int first_idx=0, last_idx=0, len,max=0;
    for(i=0; i<str_size; i++) {
        if(*(str+i) == delim) {
            first_idx=i;
            for(int q=i+1; q<str_size; q++ ) {
                if(q==(str_size-1)) last_idx = q;
                if ((*str+q)==delim) last_idx= q;
            }
        len=last_idx-first_idx;
        max = (len>max) ? len:max;
        }
    }
    int row = tok_no + 1;
    char **Token = (char **)malloc(row * sizeof(char *)); 
    for (i = 0; i < row; i++)
    {
        *(Token + i) = (char *)malloc((max+1) * sizeof(char)); 
    }
    char *helper = (char *)malloc((max+1) * sizeof(char));
    int n = 0;
    int current_row = 0;
    for (i = 0; i < str_size; i++)
    {
        if ((i == 0) && (*(str + i) == delim))
            continue;
        if (*(str + i) != delim)
        {
            *(helper + n) = *(str + i);
            n++;
        }
        else
        {
            if (*(str + i - 1) == delim)
                continue;
            else
            {
                for (int j = 0; j < n; j++)
                {
                    *(*(Token + current_row) + j) = *(helper + j);
                }
                *(*(Token + current_row) + n) = 0;
                current_row++;
                n = 0;
            }
        }
        if (i == (str_size - 1))
        {
            for (int k = 0; k < n; k++)
            {
                *(*(Token + current_row) + k) = * (helper+k);
            }
            *(*(Token + current_row) + n) = '\0';
            current_row++;
        }
    }
    free(helper);
    *(*(Token + current_row)) = 0;
    return Token;
}

void _printTokens(char **tokens) {
    int row = 0;
    printf("The tokens are: \n");
    while (*(*(tokens + row) + 0) != '\0') 
    {
        printf("%s\n", *(tokens + row));
        row++;
    }
}


int custom_strcmp(char *str1, char *str2)
{
    int i = 0;
    int result = 0;
    int str1len=0, str2len=0;
    while(*(str1+i) != '\0') {
        str1len++;
        i++;
    }
    i=0;
while(*(str2+i) != '\0') {
        str2len++;
        i++;
    }
    i=0;
if (str1len!=str2len) {
    result = 1;
}

else {
    while (*(str1 + i) != '\0' && *(str2 + i) != '\0')
    {
        if (*(str1 + i) != *(str2 + i))
        {
            result = 1;
            break;
        }
        i++;
    }
}
    return result;
}

void _printTokensUnique(char **tokens) {
    int row = 0;
    printf("The unique tokens are: \n");
    while (*(*(tokens + row) + 0) != '\0')
    {
        row++;
    }
    for (int i = 0; i < row; i++)
    {
        int match = 0;
        for (int j = i-1; j >=0; j--)
        {
            if (custom_strcmp(*(tokens + i), *(tokens + j)) == 0  )
            {
                match = 1;
                break;
            }
        }
        if (match == 0)
        {
            printf("%s\n", *(tokens + i));
        }
    }
}

void _freeTokens(char **tokens) {
    {
    int row = 0;
    while (*(*(tokens + row) + 0) != '\0')
    {
        free(*(tokens + row));
        row++;
    }
    free(tokens);
}
}
int main(int argc, char **args)
{
    int string_length;
    scanf("%d", &string_length);

    char delim;
    scanf(" %c", &delim);

    char *str = (char *)malloc(sizeof(char) * (string_length + 1));
    scanf("%s", str);

    // printf("inputs are: %d %c(%d) %s\n", string_length, delim, (int)delim, str);

    char **tokens = strTokenize(str, delim);
    _printTokens(tokens);
    _printTokensUnique(tokens);
    _freeTokens(tokens);

    return 0;
}
