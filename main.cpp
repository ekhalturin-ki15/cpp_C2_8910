#include <iostream>
#include <queue>
#include <set>
#include <map>
#include <vector>
#include <string>
#include <list>
#include <stack>

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



int main()
{
#ifdef _DEBUG
    FILE* IN, * OUT;
    freopen_s(&IN, "input.txt", "r", stdin);
    freopen_s(&OUT, "output.txt", "w", stdout);
#endif

    func(0);

    //return 0;

    int a = 0, b = 1;

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> a; // Считываем в секунду 2*10^6


    cout << a + b; // O(1) ~За секунду 10^7 

    //От быстрых к медленым
    // ^ | & << >> ~
    //++    10^8
    //--
    //+
    //-
    //*
    // /
    // %    10^6
    // && || ! == < >




    int n = 100;
    for (int i = 0; i < n; ++i) // O(n)  - Линейная
    {
        cout << a + b; // O(1) -Константная

    }



    for (int i = 0; i < n; ++i) // O(n^2) - Квадратичная
    {
        for (int i = 0; i < n; ++i) // O(n) 
        {
            cout << a + b; // O(1) 

        }
    }

    vector<int> v;
    sort( v.begin(), v.end() ); // O(n * log n) 

    for (int i = 1; i < n; i *= 2) // O(log n) - Логарифмическая
    {
        cout << a + b; // O(1) 
    }


    //v[i]; //O(1)

    //[i]

    // *(v + i)

    int it = 5;
    vector<int> m = { 0, 1, 2, 3, 4, 5 ,6 ,7 ,8, 9 };

    vector<int> n_m = { 0, 1, 2, 3, 4 , 6 ,7 ,8, 9 };

    for (int i = it; i < m.size() - 1; ++i)  // O(n)
        m[i] = m[i + 1];

    m.pop_back(); // O(1)

    m.push_back(it); // O(1)


   
    vector<int> maa = { 0, 1, 2, 3, 4, 9 ,6 ,7 ,8 }; // Изменение порядка swap и pop_back

    // deque
    //queue<char> q;
    //q.pop(); // Удаление с начала
    //q.push('A'); //Добавление в конец
    //q.emplace('L');////Добавление в конец конструирование на месте
    //q.front();
    //q.back();

    //// Мы не можем узнать, кто в середине
    //// vector с урезаным функционалом
    //stack<int> st;

    //st.push(100); //В конец
    //st.pop(); //С конца
    //st.top(); // Посмотреть с конца конца

    //deque<int> de;

    //de.pop_front();
    //de[10];
    //de.push_front(100);
    //de.push_back(80);
    //// Неверно *(de + 10)



    list<int> ls;
    
    ls.push_back(1);
    ls.push_back(2);
    ls.push_back(3);

    ls.insert(ls.begin(), 5);

    list<int>::iterator ls_it = ls.begin();
    ++++ls_it;
    ls.insert(ls_it, 10); 
    ls.insert(ls_it, 11); 
    ls.insert(ls_it, 12); 
    ls.insert(ls_it, 11);
    ls.insert(ls_it, 11);
    ls.erase(ls_it);

    ls.erase(ls.begin());

    cout <<  "\n";
    /*for (list<int>::iterator ls_it = ls.begin();
        ls_it != ls.end();
        ++ls_it)
    {
        cout << *ls_it << "\n";

    }*/


    for (list<int>::iterator next, ls_it = ls.begin();
        ls_it != ls.end();
        ls_it = next)
    {

        next = ++ls_it;
        --ls_it;

        if ((*ls_it) == 11)
        {
            ls.erase(ls_it);
            
            continue;
        }

        cout << *ls_it << "\n";

    }


}