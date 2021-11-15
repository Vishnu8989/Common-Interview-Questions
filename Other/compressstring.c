#include <stdio.h>
void sort_string(char *str)
{
    int i, j;
    char temp;
    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = i + 1; str[j] != '\0'; j++)
        {
            if (str[i] > str[j])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}
int main()
{
    char str[100];
    printf("Enter String : ");
    scanf("%s", str);
    printf("Str - >%s\n", str);
    // sort_string(str);
    int i = 0;
    int count = 0;
    int k = 0;
    char str2[200];
    while (str[i] != '\0')
    {
        count = 1;
        str2[k++] = str[i];
        while (str[i] == str[i + 1])
        {
            i++;
            count++;
        }
        str2[k++] = count + '0';
        i++;
    }
    i = 0;
    str2[k] = '\0';
    printf("New Str->%s", str2);
    return 0;
}