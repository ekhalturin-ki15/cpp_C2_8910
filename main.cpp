#include <iostream>
#include <vector>
#include <queue>

#include <algorithm>
#include <list>

using namespace std;


//Компаратор структура

void sum(int& a) // & оригинал
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

    vector<int> v;
    auto a = 0;
    auto af = 0.f;
    auto ad = 0.;
    auto all = 0ll;
    auto aull = 0ull;


    while (cin >> a)
    {
        v.push_back(a);
    }

    //int size;
    //int d[size];

    v.pop_back();


    deque<int> d;

    d.push_front(23);
    d.pop_front();

    // v[i]

    cout << "\n";

    for (auto& it : v) // range-based // iterator
    {
        //int& it = v.begin()  v.end();
        cin >> it;
    }

    for (auto it : v) // range-based // iterator
    {
        //int& it = v.begin()  v.end();
        //cin >> it;
        cout << it << " ";
    }
    cout << "\n";


    return 0;


    vector<int>::iterator it = v.begin();

    auto et = v.begin();





    Hard_CMP five, dec;
    five.x = 5;
    dec.x = 10;


    sort(v.begin(), v.end(), five);


    for (int i = 0; i < v.size(); ++i)
        cout << v[i] << " ";

    cout << "\n";

    //cout << endl;
    //
    //cout << "\n";
    //cout.flush();
    //

    //cin.ignore();

    sort(v.begin(), v.end(), dec);

    for (int i = 0; i < v.size(); ++i)
        cout << v[i] << " ";

   // vector<int>::iterator it;

   // v.begin();
   // v.end();

   // v.rbegin();
   // v.rend();

   // list<int> ls; // 
   // 





   // it = v.begin();

   // cout << (*it) << " ";


   // it++;
   // cout << *(it + 5) << " ";

   // cout << *(next(it, 5));

   // prev(it, 5);

   // advance(it, -5);

   // 
   // //vector<int>::reverse_iterator rit;









   //// n / m;



}