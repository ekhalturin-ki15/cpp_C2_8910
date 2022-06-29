#include <iostream>
#include <queue>
#include <set>
#include <map>
#include <vector>
#include <string>
#include <list>
#include <stack>
#include <forward_list>

#include <iomanip>

#include <unordered_map>

#include <algorithm>


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



//
//Point Mid(Point l, Point r)
//{
//    Point m;
//    m.x = (l.x + r.x) / 2;
//    m.y = (l.y + r.y) / 2;
//
//    return m;
//}

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
struct Many_elements
{
    Type x, y, z;
    Type2 name;
};



void func(int step)
{
    if (step == 2) return;

    func(step + 1);
    cout << "";
    return;
}


struct Point
{
    int x;
    string y;
    int z;
};

int main()
{
#ifdef _DEBUG
    FILE* IN, * OUT;
    freopen_s(&IN, "input.txt", "r", stdin);
    freopen_s(&OUT, "output.txt", "w", stdout);
#endif

    //Point p;
    //p.x = 1;
    //p.y = 2;
    //p.z = -1;
    //auto [f, g, e] = p;

    //g = "3424234";


    cout.width(10);
    cout << fixed;

    cout << setprecision(10) << 1.34;


    multimap<int, int > mmai;
    mmai.find(1); // iterator
    //Не перегружен []

    //Лучше
    map <int, vector< int > > mavi;

    //mavi[1].front();

    func(0);
    // <

    map <int, int> mai;

    mai[-1000] = 200;
    mai[-1000] = 100;

    map < vector<int>, int > mav;

    mav[{1, 0, 1}]++;
    mav[{0, 0, 1}]++;
    mav[{1, 0, 1}]++;
    mav[{1, 0, 1}]++;

    map <string, int> ma;

    ma["1224"] = 100;
    ma[""] = -1;

    cout << ma["1224"];
    ma["1224"] = 999;
    cout << "\n" << ma["1224"] << "\n";

    ma["2"] = 2;
    ma["1"] = 1;
    ma["3"] = 3;

    ma.erase("3");

    for (map<string, int>::iterator it = ma.begin(); it != ma.end(); ++it)
    {
        //pair< const string, int> x = *it;
        //cout << x.first <<" "<<x.second<<"\n";

        // it->   ~   (*it). 
        //Стрелочка - это получение по значению и обращение к полю

        //cout << it->first << " " << it->second << "\n";
        cout << (*it).first << " " << (*it).second << "\n";
    }


    // pair< const string, int> 


    //return 0;

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    multiset< string > ms;

    ms.insert("aaa");
    ms.insert("bbb");
    ms.insert("00");
    ms.insert("111");
    ms.insert("abb");
    ms.insert("ccc");
    ms.insert("cccc");
    ms.insert("00");
    //ms.erase("00"); // Удалит все равные 
    while (ms.find("00") != ms.end())
        ms.erase(ms.find("00"));// Удалит один экземпляр по итератору


    set< string, greater<string> > s; // <


    s.insert("aaa");
    s.insert("bbb");
    s.insert("00");
    s.insert("111");
    s.insert("abb");
    s.insert("ccc");
    s.insert("cccc");
    s.insert("00"); // Все уникальные, копии игнорируются

    s.erase(s.begin());

    s.erase("aaa"); // А вот это вектор не умеет O(log n)

    s.find("abb"); // O(log n) 
    // log2 1e6 = 20
    // 1024 ~ 1000   2^10 ~ 10^3
    // 1024 * 1024 ~ 1e6


    for (set< string >::iterator it = s.find("abb"); it != s.end(); ++it)
        cout << *it <<"\n";

    
    //O(logN) 

    vector<string> v;
    v.push_back("aaa");
    v.push_back("bbb");
    v.push_back("00");
    v.push_back("abb");
    v.push_back("00");

    sort(v.begin(), v.end(), less<string>() ); // Но это быстрее

    set<int> ns; // Но в обратном порядке

    int x = 5;

    ns.insert(-x);




    sort(v.begin(), v.end(), greater<string>()); // Но это быстрее

    //Требуется <

    // Похоже на set

    // 
    //priority_queue<int, vector<int>, greater<int>> pq;
    priority_queue<int> pq;//Обертка над vector, превращёный в heap при помощи make_heap

    //Быстрее set (Поиск кратчайшего пути в графе через Дейкстра priority_queue)

    pq.push(-5); 
    pq.push(-3);
    pq.push(-1);
    pq.push(-2);
    pq.push(-4);
    

    
    cout << -pq.top() << "\n"; //Первый элемент (максимум) (который удаляется pop)
    pq.pop(); // Удаляем наибольший
    cout <<  -pq.top();

    vector<int> vv;
    vv= { 1, 2, 3, 4, 5 };
    //Куча
    make_heap(vv.begin(), vv.end());

    pop_heap(vv.begin(), vv.end());
    vv.pop_back();

    vv.push_back(2);
    push_heap(vv.begin(), vv.end());

    //У vector<int> нет хэширование
    //unordered_map<vector<int>, int> ucm;

    //Ключ - те данные, которые хэшируемые
    unordered_map<int, int> um;

    um[234234] = 1; // O(1) преимущество только при size > 1e7
    um[11212] = 2;
    um[5435435] = 3;
    um[854] = 4;
    um[45343] = 5;

    // (cpp 17) контертест всегда колизии //X * 107897

    cout << "\n" << "\n" << "\n" << "\n"<<um[5435435] << "\n";





    for (auto [l, r] : um) // cpp 17 >
    {
        cout << l << " " << r <<"\n";
    }




}