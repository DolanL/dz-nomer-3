#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;


int main()
{
	int menu;
	int mas[20][20];
	int mas2[20][20];
	int mas3[20][20];
	int mas4[20][20];

	int x = 0;
	int y = 0;

	cout << "vvedite razmer" << endl;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;



	for (int m = 0; m < x; m++)
	{
		for (int n = 0; n < y; n++)
		{
			cout << "mas[" << m << "][" << n << "] = "; cin >> mas[m][n];
		
		}
	}

	cout << "vibor operacii:"         << endl;
	cout << "  1.Print the matrix"    << endl;
	cout << "  2.Sum the matrix"      << endl;
	cout << "  3.Multiply the matrix" << endl;

	cin >> menu;

	if (menu == 1)
	{
		for (int m = 0; m < x; m++)
		{
			for (int n = 0; n < y; n++)
			{
				cout << mas[m][n] << "  ";
			}
			cout << endl;
		}
	}
	
	if (menu == 2)
	{
		cout << "vvedite matr " << x << "x" << y << endl;

		for (int m = 0; m < x; m++)
		{
			for (int n = 0; n < y; n++)
			{
				cin >> mas2[m][n];
			}
		}



		for (int m = 0; m < x; m++)
		{
			for (int n = 0; n < y; n++)
			{
				cout << mas[m][n] + mas2[m][n] << "  ";
			}
			cout << endl;
		}
	}

	if (menu == 3)
	{
		int tx;
		int ty;
		cout << "vvedite razmer matr" << endl;
		cout << "x = "; cin >> tx;
		cout << "y = "; cin >> ty;

		for (int m = 0; m < tx; m++)
		{
			for (int n = 0; n < ty; n++)
			{
				cin >> mas3[m][n];
			}
		}


		int im3v = ty;
		int im3g = x;

		int tsum = 0;

		for (int a = 0; a < ty; a++)
		{
			for (int b = 0; b < x; b++)
			{
				tsum = 0;
				for (int i = 0; i < y; i++)
				{
					tsum = tsum + mas[b][i] * mas3[i][a];
				}

				mas4[a][b] = tsum;
			}

		}

		cout <<  endl;
		cout << "***************************************" << endl;




		for (int a = 0; a < ty; a++)
		{
			for (int b = 0; b < x; b++)
			{
				cout << mas4[b][a]<<"  ";
			}
			cout << endl;
		}



		cout << endl;
		cout << "***************************************" << endl;

	}

    return 0;
}




