#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

#define Lenth 20

void Pas(char* p)
{
	short i = 0;
	char ch;
	while (i < Lenth)
	{
		ch = _getch();
		if (ch == '\r')
		{
			printf("\n");
			break;
		}

		else if (ch == '\b'&&i>0)
		{
			i--;
			printf("\b \b");

		}

		else
		{
			*(p + i) = ch;
			printf("*");
			i++;
		}

	}

	*(p + i) = 0;
}

int main()
{  
	short i = 0;
	system("color 0c");
	char pawd[Lenth+1] = {'0'};
	Pas(pawd);
			printf("%s", pawd);
return 0; 
}
