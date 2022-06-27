#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct AAA
{
    int x = 10;

    void Out()
    {
        cout << x;
    }


};


int main()
{

#ifdef _DEBUG
    FILE* IN, * OUT;
    freopen_s(&IN, "input.txt", "r", stdin);
    freopen_s(&OUT, "output.txt", "w", stdout);
#endif // _DEBUG

    AAA b;
    //AAA<char> a;

    //int n;
    //cin >> n;
    vector<int> v;

    int a;
    while (cin >> a)
    {
        v.push_back(a);
    }

    cout << v.size();


    //v.resize(n);

    //for (int i = 0; i < n; ++i)
        //cin >> v[i];

    //vector<  int  > v;

    ////v.push_back(10);

    ////size_t;
    ////unsigned long long a = v.size();

    //v.resize(1000);



    //// [10] //*(v + 10)


    //v[10] = 99;
    //cout << v[10] << " " << v[0] <<"\n";

    //v.push_back(10);

    //cout << v.size();


}