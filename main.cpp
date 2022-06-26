#include <iostream>
#include <vector>
#include <string>

using namespace std;

void change(const int& ptr)
{
	//ptr = 100;
}




int change()
{

	return 1'000'000'000'000;
}

struct My_String
{
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


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	//SFML
	
	FILE* IN, * OUT;

	freopen_s(&IN, "input.txt", "r", stdin);
	freopen_s(&OUT, "output.txt", "w", stdout);
	

	My_String a, b, c;

	char* &it =  a.ch;

	cin >> a.size;

	a.ch = new char[a.size];

	int i = 0;
	for (; i < 26; ++i)
	{
		a.ch[i] = i + 'a';
	}
	a.ch[i] = '\0';

	delete [] a.ch;

}