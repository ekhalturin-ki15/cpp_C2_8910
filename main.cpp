#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

void change(const int& ptr)
{
	//ptr = 100;
}




int change()
{

	return 1'000'000'000'000;
}


class Sprite
{

public:
	char out;


	int h;
	int w;


	void change(vector<vector< char >>& matrix, int x0, int y0)
	{
		for (int x = 0; x < w; ++x)
		{
			for (int y = 0; y < h; ++y)
			{
				if (y0 + y >= matrix.size()) continue;
				if (x0 + x >= matrix[y].size()) continue;

				matrix[y0 + y][x0 + x] = out;
			}
		}

	}






};




struct My_String
{

public:
	char* ch;
	int size;

	int get_size()
	{
		int ret = 0;
		while (true)
		{
			if (ch[ret++] == '\0') return ret - 1;

		}
	}


};

int i;
int a;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	//FILE* IN, * OUT;

	//freopen_s(&IN, "input.txt", "r", stdin);
	//freopen_s(&OUT, "output.txt", "w", stdout);

	ifstream IN("input.txt");

	ofstream OUT("output.txt");

	int w, h;
	IN >> w >> h;
	
	//string s;
	//getline(cin, s);

	//vector<char> v;
	//v.resize(h * w);


	vector<vector< char >> matrix;
	matrix.resize(h);

	for (int y = 0; y < h; ++y)
		//matrix[y].resize(w);
		matrix[y].assign(w, '.');

	Sprite* spr = nullptr;
	int size = 0;

	//vector< Sprite> vs;

	while (true)
	{
		Sprite tmp;
		if (!(IN >> tmp.w >> tmp.h >> tmp.out)) break;
		//vs.push_back(tmp);

		Sprite* new_spr;
		new_spr = new Sprite[size + 1];
		for (int i = 0; i < size; ++i)
		{
			new_spr[i] = spr[i];//0//1//2//3//4//5//6// //n
		}
		new_spr[size] = tmp;
		delete[] spr;
		spr = new_spr;
		++size;
	}


	while (true)
	{
		int user_choose;

		cin >> user_choose;

		if (user_choose >= size)
			user_choose = size - 1;

		if (user_choose < 0) return 0;


		int x, y;
		cin >> x >> y;

		spr[user_choose].change(matrix, x, y);

		for (int y = 0; y < h; ++y)
		{
			for (int x = 0; x < w; ++x)
			{
				cout << matrix[y][x];
			}
			cout << "\n";

		}

		cout << "\n -------- \n";


	}







	delete[] spr;


	//char* dis;
	//dis = new char [h*w];

	//delete[] dis;

	//char dis[w][h];


	return 0;
	{
		int a = 0;

		cout << a;
	}

	//return 0;
	//cout << a;


	//SFML
	
	string s;

	


	My_String a, b, c;

	char* &it =  a.ch;

	cin >> a.size;

	a.ch = new char[a.size];

	int i = 0;
	for (; i < 26; ++i)
	{
		int i = 10;
		a.ch[i] = i + 'a';
	}
	//a.ch[i];


	cout << a.get_size();

	delete[] a.ch;

}