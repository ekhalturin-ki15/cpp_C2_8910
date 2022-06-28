 #include <iostream>
using namespace std;

char CaseChange(char ch)
{
	if (('a' <= ch) && (ch <= 'z')) return ch - 'A' + 'a';
	else return ch - 'a' + 'A';
}

int main()
{

#ifdef _DEBUG
	FILE* IN, * OUT;
	freopen_s(&IN, "input.txt", "r", stdin);
	freopen_s(&OUT, "output.txt", "w", stdout);
#endif

	int n;
	int a[1010];

	cin >> n;

	for (int i = 1; i <= n; ++i)
		cin >> a[i];

	a[0] = 11;
	a[n+1] = 10;

	int ans = 0;

	bool fl = true;
	while (fl)
	{

		fl = false;


		int amount = 0;
		int prev = 12;


		for (int i = 1; i <= n+1; ++i)
		{
			if (a[i] == -1) continue;

			if (a[i] != prev)
			{
				if (amount >= 3)
				{
					ans += amount;

					for (int j = i; j >= 0; --j)
					{
						if (a[j] == prev)
						{
							a[j] = -1;
							amount--;
						}
						if (amount == 0) break;
					}

					fl = true;
				}

				amount = 1;
				prev = a[i];
			}
			else
			{
				amount++;
			}
		}





	}



	cout << ans;

	



	return 0;
}