                                //To Decrypted a Message
#include<stdio.h>
#include<conio.h>
void decrypt(char *c)
{
	char *ptr=c;
	while(*ptr!='\0')
	{
		*ptr=*ptr-47;
		ptr++;
	}
}
int main()
{
	char c[1000];
	printf("Enter encrypted Message: ");
	scanf("%s",c);
	decrypt(c);
	printf("Decrypted Message is : %s",c);
	getch();
}
