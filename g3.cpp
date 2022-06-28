 #include <iostream>
using namespace std;

char CaseChange(char ch)
{
	if (('a' <= ch) && (ch <= 'z')) return ch - 'a' + 'A';
	if (('A' <= ch) && (ch <= 'Z')) return ch - 'A' + 'a';

	return ch;
}

int main2()
{

#ifdef _DEBUG
	FILE* IN, * OUT;
	freopen_s(&IN, "input.txt", "r", stdin);
	freopen_s(&OUT, "output.txt", "w", stdout);
#endif

	char ch = 'B';

	cout << CaseChange(ch);


	



	return 0;
}