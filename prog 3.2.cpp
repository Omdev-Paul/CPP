//use of new and delete operators
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int *arr;
	int size;
	cout<<"Enter the size of integer array: ";
	cin>>size;
	cout<<"creating an array of size "<<size<<".."<<endl;
	arr = new int(size);
	cout<<"dynamic allocation of memory for array arr is succesful.";
	delete arr;
	getch();
}
