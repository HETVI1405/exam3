#include<stdio.h>
#include<conio.h>

void main()
{
	char alpha='a';
	
	do{
		printf("%c\t",alpha);
		alpha+=4;
	}while(alpha<='z');
}
