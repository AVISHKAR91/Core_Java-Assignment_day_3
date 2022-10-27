#include<stdio.h>
int main()
{
    char str[20];
    printf("Enter a string:\n");
    gets(str);
    int i;
    for(i=0; str[i]; i++)
    {
        if(str[i] >= 'a'  && str[i] <= 'z')
        {
            str[i]=str[i]-32;
        }
    }

    printf("entered string in uppercase is:%s", str);
}
 