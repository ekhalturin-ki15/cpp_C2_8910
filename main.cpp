#include <iostream>
#include <queue>
#include <set>
#include <map>
#include <vector>
#include <string>
#include <list>
#include <iomanip>

#include <unordered_map>


using namespace std;

struct B
{
    int x1, x2, x3;

};

struct A
{
    int i;
    int q;
    B b;

    void inc()
    {
        i++;
        q++;
        b.x1++;
        b.x2++;
        b.x3++;
    }
};

A sum(A l, A r)
{
    A res;

    res.i = int(l.i) + int(r.i);
    res.q = int(l.q) + int(r.q);
    res.b.x1 = 10;

    return res;
}


struct Point
{
    int x;
    int y;
};


Point Mid(Point l, Point r)
{
    Point m;
    m.x = (l.x + r.x) / 2;
    m.y = (l.y + r.y) / 2;

    return m;
}

void inc(A& a)
{
    a.i++;
    a.q++;
    a.b.x1++;
    a.b.x2++;
    a.b.x3++;
}

int sum(int l, int r)
{
    return l + r;
}



int funct1()
{

    return 1;
}

template <typename Type, typename Type2>
Type my_min(Type l, Type2 r)
{
    if (l < r) return l;
    return r;
}



template <typename Type, typename Type2>
struct Many_elements
{
    Type x, y, z;
    Type2 name;
};


int main()
{
#ifdef _DEBUG
    FILE* IN, * OUT;
    freopen_s(&IN, "input.txt", "r", stdin);
    freopen_s(&OUT, "output.txt", "w", stdout);
#endif

    int a, b;

    cout << std::fixed;

    cout << std::setprecision(12) << my_min(1, 5.6f);

    A aa, bb;

    vector<char> v;

    Many_elements<float, int> ME;

    Many_elements<int, int> e[100];





    // [5]
    // 
    // *(name + 5)
}