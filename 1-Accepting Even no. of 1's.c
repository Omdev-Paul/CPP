#include<stdio.h>
#include<string.h>
int main()
{
	int i=0;
	char ip[10],st;
	printf("enter string");
	scanf("%s",ip);
	while(ip[i]!='\0')
	{
		if(st=='0' && ip[i]=='0')
		st='0';
		else if (st=='0' && ip[i]=='1')
		st='1';
		else if (st=='1' && ip[i]=='0')
		st='1';
		else
	    st='0';
		i++;
	}
	if(st=='1')
	    printf("accept");
	else
	    printf(" not accept");
	return 0;
}
