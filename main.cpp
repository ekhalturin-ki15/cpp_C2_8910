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

	int n;
	cin >> n; cin.ignore();

	getline(cin, s);


	map< string, int > m;

	for (int i = 0; i < s.size() - n; ++i)
	{
		
		cout << s.substr(i, n) << "\n";
		m[s.substr(i, n)]++;



		//while (s.find("2323") != string::npos)
		//{
		//}

	}

	for (auto it : m)
	{
		cout << it.first << " " << it.second << "\n";
	}

	for (auto [key, val] : m)
	{
		cout << key << " " << val << "\n";
	}






	return 0;
}



