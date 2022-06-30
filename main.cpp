#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
#include <fstream>

#include <cstdio>

#include <iostream>

using namespace std;

#ifdef _DEBUG
	#pragma warning (disable : 4996)
#endif

int main()
{
	int a, b; // целочисленное 32 бит (4 байтовое) -> -2^31 2^31 - 1
	unsigned int ua; // не отр натуральные 32 бит (4 байта) -> 0 2^32 - 1

	long long la; // целочисленное 64 бит (8 байтовое) -> -2^63 2^63 - 1
	unsigned long long ula;

	float f; // вещественные зщначения (4 байт)  не точный 
	double df; // вещественные зщначения (8 байт)  не точный 
	long double ldf; // вещественные зщначения (10 байт)  не точный 
					// extendet

	char ch; // 1 байт работа с символами [0 256) ascii

	bool bl; // 0 1
	bool bl2; 


	constexpr int C_SIZE = 34 + 2323;

	const int SIZE = 10000;
	int mas_a[SIZE]; //

	mas_a[0] = 100;


	//printf("%d\n", *mas_a);
	//printf("%d\n", mas_a[0]);

	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);

	//std::cout << ~1;


	b = 10;

	int *mas_b, *mas_c;

	mas_b = new int;

	mas_c = new int [b];


	mas_c[2323];
	// *(mas_c + 2323)


	
	delete mas_b;
	delete [] mas_c;




	//char mc[100][10][2][2][2]; // 100*10*2*2*2
	//mc[2][3][1][1][0];
	char mc[5][3];
	// массив указателей -> значения прямоугольная (матрица)

	char** dmc = nullptr; // матрица ступенчатого вида
	int* dmc_size = nullptr;
	int q;



	ifstream in("input.txt");

	in >> q;

	dmc = new char* [q];
	dmc_size = new int [q];

	//cin.ignore(0);

	for (int y = 0; y < q; ++y)
	{
		in >> dmc_size[y];
		
		in.ignore();
		in.ignore();
		in.ignore();

		dmc[y] = new char [dmc_size[y]];

		for (int x = 0; x < dmc_size[y]; ++x)
		{
			in >> dmc[y][x];
		}
	}


	for (int y = 0; y < q; ++y)
	{
		for (int x = 0; x < y; ++x)
		{
			if (x >= dmc_size[y]) cout << "-";
			else cout << dmc[y][x];
			cout << " ";
		}
		cout << "\n";
	}

	




	for (int y = 0; y < q; ++y)
	{
		delete[] dmc[y];
	}

	delete[] dmc;
	delete[] dmc_size;

	_CrtDumpMemoryLeaks();

	return 0; 


}


