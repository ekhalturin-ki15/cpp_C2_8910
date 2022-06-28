#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <list>


using namespace std;


struct BigInt
{
    vector<int> num;

    int sign; // Отр или полож
    // -  true
    // +  false

    void Init(string startString)
    {
        sign = false;
        if (startString.size() > 0)
            if (startString.at(0) == '-')
                sign = true;

        for (int i = startString.size() - 1; i >= sign; --i)
        {
            num.push_back(startString[i] - '0');
        }

    }
};

vector<int> a, b, c;
int sign_a, sign_b, sign_c;

int n;
int user_choose;

pair < vector<int>, int >  Sum(vector<int>& a, int& sign_a, vector<int>& b, int& sign_b)
{
    vector<int> num;
    int sign = sign_a;

    if (sign_a == sign_b)
    {
        int mem = 0;

        for (int i = 0; i < max(a.size(), b.size()); ++i)
        {
            int res = 0;

            if (i < a.size()) res = res + a[i];
            if (i < b.size()) res = res + b[i];
            res = res + mem;
            mem = res / 10;
            res = res % 10;
            num.push_back(res);
        }

        if (mem == 1) num.push_back(1);

        //vector<int> dop(num.size());

        reverse(num.begin(), num.end());
    }

    pair< vector<int>, int > res;
    res.first = num;
    res.second = sign;

    return res;// {num, sign}
};

vector<int> Init(string startString, int& sign)
{
    vector<int> num;
    sign = false;
    if (startString.size() > 0)
        if (startString.at(0) == '-')
            sign = true;

    for (int i = startString.size() - 1; i >= sign; --i)
    {
        num.push_back(startString[i] - '0');
    }

    return num;
}

int main()
{
#ifdef _DEBUG
    FILE* IN, * OUT;
    freopen_s(&IN, "input.txt", "r", stdin);
    freopen_s(&OUT, "output.txt", "w", stdout);
#endif // _DEBUG

    string s1, s2, s3;

    cin >> s1 >> s2 >> s3;

    a = Init(s1, sign_a);

    b = Init(s2, sign_b);

    c = Init(s3, sign_c);

    pair < vector<int>, int > ans = Sum(a, sign_a, b, sign_b);

    for (int i = 0; i < ans.first.size(); ++i)
    {
        cout << ans.first[i];
    }


    int a = 5;
    double d = 1.02;

    pair< int, double > pr;
    pr.first = a;
    pr.second = d;



    //Объектно ориентированное
    BigInt aa, bb, cc;

    aa.Init(s1);

    bb.Init(s2);

    cc.Init(s3);

}