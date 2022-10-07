#include<iostream>

using namespace std;
int main()
{
    float amt;
    float value(float p, int n, flaot r=0.15);
    void printline(char ch='*', int len=40);

    printline();
    amt = value (5000.00,5);
    cout<<"\n Final val = "<<amt<<"\n\n";
    amt = value (10000.00,5,0.30);
    cout<<"\n Final val = "<<amt<<"\n\n";
    printline('=');
    return 0;
}
float value (float p, int n, float r)
{
    int year = 1;
    flaot sum = p;
    while(year<=n)
    {
        sum=sum*(1+r);
        year=year+1;
    }
    return(sum);
}
void printline(char ch, int len)
{
    for(int i=1;i<=len;i++)
    printf("&c",ch);
    printf("\n");
}