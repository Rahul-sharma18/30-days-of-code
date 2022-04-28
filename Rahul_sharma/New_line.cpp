#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char s[1000];

    printf("Enter Your String : ");
    scanf("%[^\n]%*c", s);

    int i = 0;

    printf("\nNew String : \n");
    while (s[i] != '\0')
    {
        if (s[i] == ' ')
        {
            printf("\n");
        }
        else
        {
            printf("%c", s[i]);
        }
        i++;
    }

    return 0;
}
