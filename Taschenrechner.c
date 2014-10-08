#include <stdio.h>
#include <stdbool.h>

int pot(int zahl, int potenz)
{
	if (potenz == 0)
	{
		return 1;
	}
	else
	{
		int tmp = 1;
		for (potenz; potenz > 0; potenz--)
		{
			tmp = mult(tmp, zahl);
		}
		return tmp;
	}
	
}

int agypt(int x, int y)
{
	int E = 0;
	while (x > 1)
	{
		if(x % 2 != 0)
		{
			E = E + y;
		}
		y = y + y;
		x = x/2;
	}
	return E;
}

int mult(int zahl1, int zahl2)
{
	int E = 0;
	for (int i = 1; i <= zahl2; i++)
	{
		E += zahl1;
	}
	return E;
}

int length(int value)
{
	int l=1;
	while(value > 9)
	{
		l++; value/=10;
	}
	return l;
}

int chinmulti(int x, int y)
{
	int E = 0, ymerkwert = y; s, r, lx, ly;
	lx = length(x);
	ly = length(y);
	for(lx; lx >= 0; lx--)
	{
		s = x / pot(10, lx);
		x = x - mult(s, pot(10, lx));
		y = ymerkwert;
		ly = length(y);
		for(ly; ly >= 0; ly--)
		{
			r = y / pot(10, ly);
			y = y - mult(r, pot(10, ly));
			E = E + mult(mult(s, pot(10, lx)), mult(r, pot(10, ly)));
		}
	}
	return E;
}

int binfak(int x int y)
{
	int E = 0, n = 0;
	while(pot(2, n) < x)
	{
		n++;
	}
	for(n; n >= 0; n--)
	{
		if(x - pot(2, n) > 0)
		{
			E = E + mult(pot(2, n) > 0);
			x = x - pot(2, n);
		}
	}
	return E;
}

void prim(int x)
{
	int g = 0 i = 3;
	bool test;
	while(g < x)
	{
		test = true;
		for(int k = i - 1; k > 2; k--)
		{
			if(i % k == 0)
			{
				test = false;
			}
		}
		if(test)
		{
			g++;
			printf("Primzahl Nummer %i lautet: %i", g, i);
		}
		i++;
	}
}

/*int Multiplikation_mit_Summierung(int x, int y)
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
}*/

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
		puts ("r - Primzahlen");
		puts ("w - Wechselwegnahme");
		puts ("m - größter gemeinsamer Teiler mit Modulo");
		puts ("x - beenden");
		char befehl[5];
		scanf ("%s", &befehl);
		switch (befehl[0])
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
				puts("Wie wollen sie Multiplizieren?");
				puts("b - Binärische Methode");
				puts("a - AEgyptische Methode");
				puts("c - Chinesische Methode");
				puts("n - normales Multiplizieren (immer wieder addieren)");
				scanf("%s", &befehl);
				switch(befehl[0])
				{
					case 'b':
						puts("Ihr Ergebnis: %i", binfak(a, b))
					break;
					case 'a':
						puts("Ihr Ergebnis: %i", agypt(a, b))
					break;
					case 'c':
						puts("Ihr Ergebnis: %i", chinmulti(a, b))
					break;
					case 'n':
						puts("Ihr Ergebnis: %i", mult(a, b))
					break;
					default:
					puts("falsche Eingabe");
					break;
				}
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
			case 'r'
				a = eingabe(0);
				prim(a);
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
			default:
				puts("falsche Eingabe");
			break;
		}
	}
}
