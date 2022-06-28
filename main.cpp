#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <list>
#include <string>

//#include <bits/stdc++.h>


using namespace std;


struct BigInt
{
    vector<int> num;

    bool sign = false; // Отр или полож
    // -  true
    // +  false


    void Invers(int amount)
    {
        sign = (!sign);

        bool loan = false;

        vector<int> new_num;

        for (int i = 0; i < amount; ++i)
        {
            int temp = 0;
            if (i < num.size())
            {
                temp = num[i];
            }

            if (loan)
            {
                temp = 9 - temp;
            }
            else
            {
                temp = 10 - temp;
                if (temp == 10) temp = 0;
            }

            if (i < num.size())
            {
                if (num[i] != 0) loan = true;
            }

            new_num.push_back(temp);
        }

        num = new_num;
    }

    int size()
    {
        return num.size();
    }

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

    void Read()
    {
        string s;
        cin >> s;
        Init(s);
    }

    void Out()
    {
        if (sign)
            cout << "-";
        for (int i = num.size() - 1; i >= 0; --i)
        {
            cout << num[i];
        }
        cout << "\n";
    }
};

BigInt Sum(BigInt a, BigInt b);




BigInt Dif(BigInt a, BigInt b)
{
    b.sign = (!b.sign);

    return Sum(a, b);
}

BigInt Sum(BigInt a, BigInt b)
{
    if (a.sign == b.sign)
    {
        BigInt result;

        result.sign = a.sign;

        int mem = 0;

        for (int i = 0; i < max(a.num.size(), b.num.size()); ++i)
        {
            int temp = 0;

            if (i < a.num.size()) temp += a.num[i];
            if (i < b.num.size()) temp += b.num[i];
            temp = temp + mem;
            mem = temp / 10;
            temp %= 10;
            result.num.push_back(temp);
        }

        if (mem == 1) result.num.push_back(1);


        return result;// {num, sign}
        //reverse(result.num.begin(), result.num.end());
    }
    else
    {
        b.Invers(max(a.size(), b.size()));

        BigInt d = Sum(a, b);

        if (d.size() > max(a.size(), b.size()))
        {
            d.num.pop_back();
            d.sign = a.sign;

            while (d.size() > 1)
            {
                if (d.num.back() == 0)
                    // d.num[d.num.size() - 1]
                {
                    d.num.pop_back();
                }
                else
                    break;
            }

            if ((d.size() == 1) && (d.num.back() == 0))
                d.sign = false;

            return d;
        }
        else
        {
            d.Invers(max(a.size(), b.size()));
            d.sign = (!a.sign);

            while (d.size() > 1)
            {
                if (d.num.back() == 0)
                    // d.num[d.num.size() - 1]
                {
                    d.num.pop_back();
                }
                else
                    break;
            }

            if ((d.size() == 1) && (d.num.back() == 0))
                d.sign = false;

            return d;
        }
    }

}

//vector<int> a, b, c;
//int sign_a, sign_b, sign_c;

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

    return  res;// { num, sign };
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


struct long_long_long_int // 16 байт
{
    long long a; // 8 байт
    long long b; // 8 байт
};

long_long_long_int c, d, ff; 


struct People
{

    int x;
    int y;

    string name;


    void Move(int dx, int dy)
    {
        x += dx;
        y += dy;
        cout << name + " " + std::to_string(x) + " " + std::to_string(y);
        cout << "\n";
    }

    void Move()
    {
        x++;
        y++;

        cout << name + " " + std::to_string(x) + " " + std::to_string(y);
        cout << "\n";
    }


    void Breath()
    {
        cout << name + " thzzzzz";
        cout << "\n";
    }
};

struct many_el
//class many_el
{
//public:
    int i;
    char ch;
    string s;
    double d;
    int j;
    int a[50];
    vector<int> m;
    vector<vector<vector<int>>> vvv;




};


many_el zz, ashash;


int main()
{
#ifdef _DEBUG
    FILE* IN, * OUT;
    freopen_s(&IN, "input.txt", "r", stdin);
    freopen_s(&OUT, "output.txt", "w", stdout);
#endif // _DEBUG

   /* ff.a = c.a + d.a;

    zz.m = { 3, 4, 6, 54, 32, 2 };
    
    ashash.m = { 3, 4, 3, 2, 21 };

    People Jack, Vladimir, Igor;

    Jack.name = "Jack";
    Vladimir.name = "Vladimir";
    Igor.name = "Igor";

    Jack.x = 10;
    Jack.y = 50;

    Igor.Breath();

    Vladimir.Move(10, -40);

    return 0;*/


    ////string s1, s2, s3;

    ////cin >> s1 >> s2 >> s3;

    ///*a = Init(s1, sign_a);

    //b = Init(s2, sign_b);

    //c = Init(s3, sign_c);

    //pair < vector<int>, int > ans = Sum(a, sign_a, b, sign_b);

    //for (int i = 0; i < ans.first.size(); ++i)
    //{
    //    cout << ans.first[i];
    //}


    //int a = 5;
    //double d = 1.02;

    //pair< int, double > pr;
    //pr.first = a;
    //pr.second = d;*/
    ////BigInt vv[5];

    //vector<BigInt> v(5);

    //for (int i = 0; i < v.size(); ++i)
    //{
    //    v[i].Read();
    //}

    //for (int i = 0; i < v.size(); ++i)
    //{
    //    v[i].Out();
    //}


    ////Объектно ориентированное
    BigInt aa, bb, cc, dd;

    aa.Read();

    bb.Read();

    dd = Sum(aa, bb);


    dd = Dif(aa, bb);

    dd.Out();

   /* for (int i = 0; i < dd.num.size(); ++i)
    {
        cout << dd.num[i];
    }*/

    



    return 0;
}