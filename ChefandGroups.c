#include <stdio.h>
#include <string.h>
int main()
{
    int i, t, count = 0;
    scanf("%d", &t);
    char arr[1000000];
    while (t--)
    {
        scanf("%s", arr);

        for (i = 0, count = 0; arr[i] != '\0'; i++)
        {

            if (arr[i] == '0' && arr[i + 1] == '1')
            {
                count++;
            }
        }
        if (arr[0] == '1')
        {
            count++;
        }
        printf("%d\n", count);
    }
}