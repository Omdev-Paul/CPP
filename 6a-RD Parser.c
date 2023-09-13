#include<stdio.h>
#include<string.h>

void E();
void T();
void V();

int i=0;
char ip[10];
    E()
        {
            T();
            if(ip[i]=='+'){
            i++;
            E();}
        }
    T()
        {
            V();
            if(ip[i]=='*'){
            i++;
            T();}
        }
    V()
        {
            if(ip[i]>='a' && ip[i]<='z')
            i++;
        }
int main()
{
    printf("Enter input: \n");
    scanf("%s",ip);
    E();

    if(ip[i]=='$')
        printf("Accept");
    else
        printf("Reject");
        
}