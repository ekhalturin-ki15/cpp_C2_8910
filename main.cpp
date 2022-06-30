#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
#include <fstream>
#include <cstdio>
#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <algorithm>
#include <string>

using namespace std;

#define FOR for(int i = 0; i < n; ++i)
#define FORI(n) for(int i = 0; i < n; ++i)

#ifdef _DEBUG
#pragma warning (disable : 4996)
#endif


struct A
{
	float f;
	int a;
	string s;
	

};

int main()
{

	vector<int> v = { 3 , 4 ,3 , 2, 3, 4 };
	A a;
	a = {1.323, 3, "aaa" };

	auto& [x, y, z] = a;

	x = 100;

#ifdef _DEBUG
	FILE* IN, * OUT;
	freopen_s(&IN, "input.txt", "r", stdin);
	freopen_s(&OUT, "output.txt", "w", stdout);
#endif

	string s;

	int n, k;
	cin >> n; 
	k = n;
	vector<int> pr = { 2 };

	while (k % 2 == 0)
	{
		k /= 2;
		cout << 2 << "*";
	}

	for (int i = 3; i <= sqrt(n); ++i)
	{
		bool fl = true;
		for (int j = 0; pr[j] <= sqrt(i); ++j)
		{
			if (i % pr[j] == 0)
			{
				fl = false;
				break;
			}
		}
		if (fl)
		{
			pr.push_back(i);
			while (k % i == 0)
			{
				k /= i;
				cout << i << "*";
			}
		}
	}

	if (k > 1)
	{
		cout << k << "*";
	}



	return 0;
}



