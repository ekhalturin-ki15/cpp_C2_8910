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

bool cmp(int l, int r)
{
    return l > r;
}


struct Hard_CMP
{
    int x;

    bool operator () (int l, int r)
    {
        return abs(l-x) < abs(r - x);
    }
};


int main()
{
#ifdef _DEBUG
    FILE* IN, * OUT;
    freopen_s(&IN, "input.txt", "r", stdin);
    freopen_s(&OUT, "output.txt", "w", stdout);
#endif // _DEBUG


    //auto a = min(1, 0);

    //auto b = max(1., 0.);

    
    vector<int> v = {5 , 4 , 2 , 3 , 1};

    sort(v.begin(), v.end());

    do
    {
        for (auto it : v)
            cout << it << " ";
        cout << "\n";


    } while (next_permutation(v.begin(), v.end()));







    //for (auto it : v)
    //    cout << it << " ";





    

}