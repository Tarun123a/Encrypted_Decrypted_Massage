                       //To Encrypted a Message
#include<stdio.h>
#include<conio.h>
void encrypt(char *c)
{
	char *ptr=c;
	while(*ptr!='\0')
	{
		*ptr=*ptr+47;
		ptr++;
	}
}
int main()
{
	char c[1000];
		printf("Enter your Message: ");
gets(c);
	encrypt(c);
	printf("Encrypted Message is : %s",c);
	getch();
	}
