#include<iostream>
#include<math.h>
#include<cstring>
using namespace std;

typedef int sir[100];
sir x;
int m, i, k, j;
int as, ev;
int a[100][100];
char culoare[4][10] = { "rosu","negru","alb","verde" };
char tara[6][10] = { "Italia","Elvetia","Austria","Germania","Franta","Spania" };

void succ(sir x, int k, int &as)
{
	if (x[k] < 4)
	{
		as = 1;
		x[k] = x[k] + 1;
	}
	else as = 0;
}
void valid(sir x, int k, int &ev)
{
	ev = 1;
	for (i = 1; i <= k - 1; i++)
		if ((a[k][i] == 1) && (x[k] == x[i]))
			ev = 0;
}

void afis(sir x, int k)
{
	for (i = 1; i <= k; i++)
	{
		cout << tara[i - 1] << " - ";
		cout << culoare[x[i]-1]<<" ; ";
	}
	cout << endl;
}

int main(void)
{
	cout << "Fie data o harta cu 6 tari" << endl;
	cout << "Este demonstrat faptul ca sunt suficiente numai 4 culori ca orice harta sa poata fi colorata" << endl;
	cout << "Cele 4 culori date: rosu,negru,alb,verde" << endl;
	cout << "Cele 6 tari date: 1-Italia, 2-Elvetia, 3-Austria, 4-Germania, 5-Franta, 6-Spania" << endl;
	cout << "Lista de vecini pentru fiecare tara:" << endl;
	cout << "1. Lista de vecini pentru 1-Italia:  2-Elvetia, 3-Austria, 5-Franta" << endl;
	cout << "2. Lista de vecini pentru 2-Elvetia:  1-Italia, 3-Austria, 4-Germania, 5-Franta" << endl;
	cout << "3. Lista de vecini pentru 3-Austria:  1-Italia, 2-Elvetia , 4-Germania" << endl;
	cout << "4. Lista de vecini pentru 4-Germania:  2-Elvetia, 3-Austria, 5-Franta" << endl;
	cout << "5. Lista de vecini pentru 5-Franta:  1-Italia, 2-Elvetia, 4-Germania, 6-Spania" << endl;
	cout << "6. Lista de vecini pentru 6-Spania:  5-Franta" << endl;
	for (i = 1; i <= 6; i++)
		for (j = 1; j <= 6; j++)
			a[i][j] = 0;
	a[1][2] = 1;
	a[1][3] = 1;
	a[1][5] = 1;
	a[2][3] = 1;
	a[2][4] = 1;
	a[2][5] = 1;
	a[3][4] = 1;
	a[4][5] = 1;
	a[5][6] = 1;
	for (i = 1; i <= 6; i++)
		for (j = i + 1; j <= 6; j++)
			if (a[i][j] == 1) a[j][i] = 1;
	k = 1;
	x[k] = 0;
	while (k > 0)
	{
		do
		{
			succ(x, k, as);
			if (as) valid(x, k, ev);
		} while (as && !ev);
		if (as)
			if (k == 6) afis(x, k);
			else
			{
				k = k + 1; x[k] = 0;
			}
		else k = k - 1;
	}
}