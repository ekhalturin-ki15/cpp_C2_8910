#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct AAA
{
    int x;

    AAA() //Конструктор
    {
        x = -1;
    }

    AAA(int a)
    {
        x = a;
    }


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


    int aa;

    AAA b;


    AAA* d;

    d = new AAA[100]; // Вызов кода из 13 строки

    delete[] d;


    b.x = 10;

    return 0;
    //AAA<char> a;

    //int n;
    //cin >> n;
    vector< int > v(32);

    int a;
    while (cin >> a)
    {
        v.push_back(a); // O(1)
        cout << v.size() << " ";
        cout << v.capacity() << "\n";
    }

    v.resize(10);

    for (int i = 0; i < 10; ++i)
    {
        cout << v[i];
    }

    


}