#include <iostream>
#include <vector>
#include <queue>

#include <algorithm>
#include <list>

using namespace std;


//Компаратор структура
//void sum(int a&) // & оригинал
void sum(int &a) // & оригинал
//Без & - копия
{
    a = 100;
}

int n;

string ans;
string s;
void recursion(int step)
{
    if (step == n)
    {
        cout << ans << "\n";
        return;
    }
    for (int i = 0; i < s.size(); ++i)
    {
        ans[step] = s[i];
        recursion(step + 1);//Перебрать оставшиеся символы
    }

    return;
}


int main()
{
#ifdef _DEBUG
    FILE* IN, * OUT;
    freopen_s(&IN, "input.txt", "r", stdin);
    freopen_s(&OUT, "output.txt", "w", stdout);
#endif // _DEBUG


    cin >> n >> s;
    ans.resize(n);

    //recursion(0);

    vector<int> pow; // 4 16 64

    int p = 1;

    for (int i = 0; i < n; ++i)
    {
        p *= s.size();
        pow.push_back(p);
    }

    for (int i = 0; i < p; ++i)
    {
        for (int j = n - 1; j >= 0; --j)
        {
            if (j > 0)
                cout << s[(i % pow[j]) / pow[j-1]];
            else
                cout << s[(i % pow[j])];
        }
        cout << "\n";
    }

}