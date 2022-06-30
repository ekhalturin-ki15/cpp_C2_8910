#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
#include <fstream>
#include <cstdio>
#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

#define FOR for(int i = 0; i < n; ++i)
#define FORI(n) for(int i = 0; i < n; ++i)

#ifdef _DEBUG
#pragma warning (disable : 4996)
#endif


int main()
{

#ifdef _DEBUG
	FILE* IN, * OUT;
	freopen_s(&IN, "input.txt", "r", stdin);
	freopen_s(&OUT, "output.txt", "w", stdout);
#endif

	vector<int> v;
	int a, x;

	cin >> x;

	while (cin >> a)
		v.push_back(a);

	sort(v.begin(), v.end());



	int l = 0; int r = v.size(); //[l r)  [0 1)  самый последний индекс где значение равно x

	while (l != r - 1)
	{
		//int m = (l + r) / 2;
		int m = l + (r - l) / 2;
		if (v[m] > x)
		{
			r = m;
		}
		if (v[m] <= x)
		{
			l = m;
		}
	}

	//cout << v[l];

	// Ѕин поиск, поэтому на вход  отсортированные, иначе непон¤тно что вернЄт

	auto it = lower_bound(v.begin(), v.end(), x); // возвращает iterator ближайший >=

	auto end = upper_bound(v.begin(), v.end(), x); //    ближайший >

	cout << distance(v.begin(), it) << " ";

	cout << distance(v.begin(), end)<< " ";

	cout << "\n";



	// distance O(n) в случае если нет индексов
	for (int i = distance(v.begin(), it); i < distance(v.begin(), end); ++i)
	{
		cout << v[i];
		cout << " ";
	}




	return 0;
}



