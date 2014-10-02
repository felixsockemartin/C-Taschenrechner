#include <stdio.h>
#include <stdbool.h>



int Multiplikation_mit_Summierung(int x, int y)
{
	int E = 0;
	for(int i = 1; i < x; i++)
	{
		E = E + y;
	}
	return E;
}

int Potenz(int x, int y)
{
	int E = x;
	for(int i = 2; i < y; i++)
	{
		E = Mulitplikation_mit_Summierung(x, E);
	}
	return E;
}

int chinesisch_Multiplizieren(int x, int y)
{
	int lx;
}

int eingabe(int x)
{
	int zahl;
	if (x == 0)
	{
		printf("Zahl eingeben:\n");
		scanf("%i", &zahl);
	}
	else
	{
		printf("Zahl %i eingeben:\n", x);
		scanf("%i", &zahl);
	}
	return zahl;
}


int main()
{
	int a, b, r, neu, alt, neuer;
	float k, l;
	while (true)
	{
		puts ("Was willst du tun?");
		puts ("+ - addieren");
		puts ("- - subtrahieren");
		puts ("* - multiplizieren");
		puts ("/ - dividieren");
		puts ("f - Fibonacci");
		puts ("p - pythagoreisches Tripel");
		puts ("w - Wechselwegnahme");
		puts ("m - größter gemeinsamer Teiler mit Modulo");
		puts ("x - beenden");
		char befehl;
		scanf ("%c", &befehl);
		switch (befehl)
		{
			case '+':
				a = eingabe(1);
				b = eingabe(2);
				printf("Ihr Ergebnis: %i\n", a + b);
			break;
			case '-':
				a = eingabe(1);
				b = eingabe(2);
				printf("Ihr Ergebnis: %i\n", a - b);
			break;
			case '*':
				a = eingabe(1);
				b = eingabe(2);
				printf("Ihr Ergebnis: %i\n", a * b);
			break;
			case '/':
				puts("Zahl 1 eingeben:");
				scanf("%f", &k);
				puts("Zahl 2 eingeben:");
				scanf("%f", &l);
				if (b == 0)
				{
					printf("Teilen durch 0 ist nicht Möglich");
				}
				else
				{
					printf("Ihr Ergebnis: %f\n", k/l);
				}
			break;
			case 'f':
				neu = 1;
				alt = 0;
				a = eingabe(0);
				for (int i = 1; i <= a; i++)
				{
					neuer = alt + neu;
					alt = neu;
					neu = neuer;
				}
				printf("Ergebnis: %i\n", neuer);
			break;
			case 'p':	
				a = eingabe(0);
				for(int x = 1; x <= a; x++)
				{
					for(int y = x + 1; y <= a; y++)
					{
						if (x + y <= a)
						{
							for (int z = y + 1; z <= a; z++)
							{
								if ( x + y + z <= a)
								{
									if (a == x + y + z && z * z == (y * y) + (x * x))
									{
										printf("Ein/Das Triplet ist: x = %i y = %i z = %i\n", x, y, z);
									}
								}
								else
								{
									z = a;
								}
							}
						}
						else
						{
							y = a;
						}
					}
				}
			break;
			case 'w':
				a = eingabe(1);
				b = eingabe(2);
				while (a != b)
				{
					if (a > b)
					{
						a -= b;
					}
					else
					{
						b -= a;
					}
				}
				printf("Ergebnis: %i\n", a);
			break;
			case 'm':
				a = eingabe(1);
				b = eingabe(2);
				if (a != 0 || b != 0)
				{
					while (b != 0)
					{
						r = a % b;
						a = b;
						b = r;
					}
					printf("Ergebnis: %i\n", a);
				}
				else
				{
					printf("Keine Der Zahlen dürfen 0 sein!");
				}
			break;
			case 'x':
				return 0;
			break;
		}
		fflush(stdout);
	}
}
