#include<stdio.h>

struct student{
	int no;
	//int no = 5; compile error in structure cant initialise only declear.
	char name[20];};

void main()
{ struct student s; s.no=8; printf("hello");}
