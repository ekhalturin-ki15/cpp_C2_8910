#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


//Компаратор структура

bool cmp(int l, int r)
{
    return l > r;
}


int main()
{
#ifdef _DEBUG
    FILE* IN, * OUT;
    freopen_s(&IN, "input.txt", "r", stdin);
    freopen_s(&OUT, "output.txt", "w", stdout);
#endif // _DEBUG

    int n, m; (n - 1) / m;

    vector<int> v;
    int a;

    while (cin >> a)
    {
        v.push_back(a);
    }


    for (int pos_max = 0; pos_max < v.size() - 1; ++pos_max)
    {
        int pos = pos_max;
        int cur_max = v[pos];

        for (int i = pos_max + 1; i < v.size(); ++i)
        {
            if (cmp(v[i], v[pos]))
            {
                cur_max = v[i];
                pos = i;
            }
        }

        // pos_max pos
        //std::swap(v[pos], v[pos_max]);

        //int temp = v[pos];
        //v[pos] = v[pos_max];
        //v[pos_max] = temp;

        //a//
        if (pos_max != pos)
        {
            v[pos_max] = v[pos_max] ^ v[pos];
            ////b
            v[pos] = v[pos] ^ v[pos_max]; // a изн
            v[pos_max] = v[pos_max] ^ v[pos]; // b изн
        }
    }

    //for (int i = 0; i < v.size(); ++i)
     //   cout << v[i] << " ";


    vector<int>::iterator it;

    v.begin();
    v.end();

    v.rbegin();
    v.rend();


    it = v.begin();

    it++;


    
    //vector<int>::reverse_iterator rit;









   // n / m;



}