#include<iostream>
#include<time.h>
#include<iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	//Сжать(сдвинуть элементы) массив, удалив из него все 0, и заполнить освободившиеся справа элементы значениями - 1

	const int n = 10;
	int a[n];
	int x = 0;

	for (int i = 0; i < n; i++)
	{
		a[i] = 0 + rand() % 5;
		cout << setw(4) << a[i];
	}
	cout << endl;

	for (int pass = 0; pass < n-1; pass++)
	{
		for (int i = 0; i < n-1; i++)
		{
			if (a[i] == 0)
			{
				x++;
				swap(a[i], a[i + x]);
				a[i-n] = -1;
			}
			cout << setw(4) << a[i];
	}
	
	}
	cout << endl;


	/*int a[2][4][4];

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			for (int k = 0; k < 4; k++)
			{
				a[i][j][k] = rand() % 10;
				cout << setw(5) << a[i][j][k];
			}
			cout << endl;
		}
		cout << endl;
	}

	cout << endl;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			for (int k = 0; k < 4; k++)
			{
				if (((j == k) || (j > k)) && ((j == k) || (j < k)))
				{
					cout << setw(5) << a[i][j][k];
				}

			}
			cout << endl;
		}
		cout << endl;
	}

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			for (int k = 0; k < 4; k++)
			{
				if (((j + k) <= 3) && ((j + k) >= 3))
				{
					cout << setw(5) << a[i][j][k];
				}

			}
			cout << endl;
		}
		cout << endl;
	}
*/



/*int a[5][3][5];

int sum = 0;
int max = INT_MIN;

for (int i = 0; i < 5; i++)
{
	sum = 0;
	for (int j = 0; j < 3; j++)
	{
		for (int k = 0; k < 5; k++)
		{
			a[i][j][k]=rand()%10;
			cout << setw(5) << a[i][j][k];
			sum += a[i][j][k];

		}
		cout << endl;
	}
	cout << endl ;
	cout << sum<<endl;
	if (sum>max)
	{
		max = sum;
	}

}

cout << "Max = " << max;
cout << endl;
*/


	system("pause");
	return 0;
}