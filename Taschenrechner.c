#include <stdio.h>
#include <stdbool.h>


int a, b;
float x, y;


int zahleingabe(char x)
{
	if (x == '1')
	{
		puts("zahl 1 eingeben:");
		scanf("%i", &a);
		puts("zahl 2 eingeben:");
		scanf("%i", &b);
	}
	else if (x == '2')
	{
		puts("zahl 1 eingeben:");
		scanf("%f", &x);
		puts("zahl 2 eingeben:");
		scanf("%f", &y);
	}
	return 0;
}


int main()
{
	char befehl;
	while (true)
	{
		puts("Was sollen sie tun?");
		puts("a-addieren");
		puts("s-subtrahieren");
		puts("m-multiplizieren");
		puts("d-dividieren");
		puts("x-beenden");
		scanf("%c", &befehl);
		switch(befehl)
		{
			case 'a':
				zahleingabe('1');
				printf("Ihr Ergebnis: %i\n",a+b);
			break;

			case 's':
				zahleingabe('1');
				printf("Ihr Ergebnis: %i\n",a-b);
			break;

			case 'm':
				zahleingabe('1');
				printf("Ihr Ergebnis: %i\n",a*b);
			break;

			case 'd':
				zahleingabe('2');
				printf("Ihr Ergebnis: %f\n",x/y);
			break;

			case 'x':
				return 0;
			break;


		}

	}
}
