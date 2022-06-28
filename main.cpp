#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <list>

using namespace std;

//void Init(string startString);

struct BigInt
{
    vector<int> num;

    void Init(string startString)
    {
        for (int i = 0; i < startString.size(); ++i)
        {
            num.push_back(startString[i] - '0');
        }

    }
};



int main()
{
#ifdef _DEBUG
    FILE* IN, * OUT;
    freopen_s(&IN, "input.txt", "r", stdin);
    freopen_s(&OUT, "output.txt", "w", stdout);
#endif // _DEBUG

    string s1, s2;

    cin >> s1 >> s2;


    BigInt a, b;

    a.Init(s1);

    b.Init(s2);



}