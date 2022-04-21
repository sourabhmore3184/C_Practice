#include<stdio.h>
#include<string.h>

int main()
{
    char str[20],str1[20],cnt=0;
    int j=0;
    printf("Enter The String : ");
    gets(str);

    for(int i=0;str[i]!=NULL;i++)
    {
        cnt++;
    }

    for(int i=cnt-1;i>=0;i--)
    {
        str1[j] = str[i];
        printf("%c",str1[j]);
        j++;

    }
}
