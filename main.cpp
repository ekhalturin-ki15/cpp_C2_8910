#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
#include <fstream>

#include <cstdio>

#include <iostream>

#include <vector>

#include <map>

using namespace std;

#define FOR for(int i = 0; i < n; ++i)
#define FORI(n) for(int i = 0; i < n; ++i)

#ifdef _DEBUG
#pragma warning (disable : 4996)
#endif

struct Rect
{
	int n;

	vector<int> v;

	void rect(int i)
	{
		if (i < n)
		{
			//cout << i << " ";

			v[i] = i;

			rect(i + 1);

			v[i] = i + 1;

			rect(i + 1);

			v[i] = i + 2;

			rect(i + 1);

			return; // ->rect(i - 1);
		}
		else
		{
			for (auto it : v)
				cout << it << " ";


			cout << "\n";

			return;
		}
	}
};
//
//void rect(int i)
//{
//	if (i < n)
//	{
//		//cout << i << " ";
//
//		rect(i + 1);
//
//		cout << i << " ";
//
//		return; // ->rect(i - 1);
//	}
//	else
//	{
//		return;
//	}
//}

struct Rib
{
	char from;
	char to;
	int dis;

};

vector<Rib> graph;

map< char, int > total_dis;//Нет циклов -> Один путь  поиск дистанции

void dfs(char ch, int dis)
{
	cout << ch << " ";


	//total_dis[ch]; // Если его небыло total_dis[ch] = 0
	if (total_dis.count(ch))
	{
		if (dis < total_dis[ch])
			total_dis[ch] = dis;
	}
	else
		total_dis[ch] = dis;


	for (int i = 0; i < graph.size(); ++i)
	{
		if (graph[i].from == ch)
		{
			cout << "->";
			dfs(graph[i].to, total_dis[ch] + graph[i].dis);
			cout << "->";
			cout << ch;
		}
	}
	
	return;
}


int main()
{

#ifdef _DEBUG
	FILE* IN, * OUT;
	freopen_s(&IN, "input.txt", "r", stdin);
	freopen_s(&OUT, "output.txt", "w", stdout);
#endif

	int n;

	//cin >> n;

	Rib r;
	while (cin >> r.from >> r.to >> r.dis)
	{
		graph.push_back(r);
	}

	////dfs - deep - first - search (поиск в глубину)



	//cin >> n;

	//for (int i = 0; i < n; ++i)
	//{
	//	cout << i << " ";
	//}
	//cout << "\n";

	//Rect r;
	//r.n = n;
	//r.v.resize(n);


	//r.rect(0);

	dfs('A', 0);


	return 0;


}



