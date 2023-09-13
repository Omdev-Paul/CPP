#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,j;
    printf("enter the no.of productions:\n");
    scanf("%d",&j);
    char ip[10][10];
    printf("enter the productions:\n");
    for (i=0;i<j;i++)
    {
        scanf("%s",&ip[i]);
    }
    for(i=0;i<j;i++)
    {
        printf("%s\n",ip[i]);
    }
    for (i=0;i<j;i++)
    {
        if (ip[i][3]>='a' && ip[i][3]<='z')
        {
        printf("FIRST (%c):%c\n",ip[i][0],ip[i][3]);
        }
    }
}
