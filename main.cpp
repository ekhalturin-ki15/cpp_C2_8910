#include <cstdio>

#ifdef _DEBUG
	#pragma warning (disable : 4996)
#endif

int main()
{
	int a, b; // ������������� 32 ��� (4 ��������) -> -2^31 2^31 - 1
	unsigned int ua; // �� ��� ����������� 32 ��� (4 �����) -> 0 2^32 - 1

	long long la; // ������������� 64 ��� (8 ��������) -> -2^63 2^63 - 1
	unsigned long long ula;

	float f; // ������������ ��������� (4 ����)  �� ������ 
	double df; // ������������ ��������� (8 ����)  �� ������ 
	long double ldf; // ������������ ��������� (10 ����)  �� ������ 
					// extendet

	char ch; // 1 ���� ������ � ��������� [0 256) ascii

	bool bl; // 0 1
	bool bl2; 


	int abl;
	//cppreference
	
	//scanf(" %d %d", &a, &b);
	//scanf("%d %c %d %f", &a, &ch, &abl, &f);

	//printf("%d\t\t\n%d", a % b, a - (a / b) * b);

	//printf("%d %c %d %f", 1000 , ch, bl, f);

	// + - * / % 

	// & | ^ ~ << >>

	// && || < > == != !

	a = 0xd6;


	printf("\t\t%x", a | 0x31);
	printf("\t\t%x", a & 0x31);
	printf("\t\t%x", a ^ 0x31);
	printf("\t\t%x", a >> 2); // 0x35
	printf("\t\t%x", a << 3); // 0x6b0
	printf("\t\t%d", ~0); // -1

	printf("\t\t%d", a && 0);



	//a = 500 % 3;
	//a = 500 - (500 / 3) * 3;


	if (true)
	{
		a + 1 + 4;
		b = a + 2;
	}
	else
	{

	}


	a = (true ? 100 : 323 ); //  100
	a = (false ? 100 : 323); // 323

layble:
	switch (23)
	{
	case 1:


		break;
	case 2:

		if (1)
		{

		}
		break;

	}

	//for ( A ; B  ; C )

	//A -- ��������� ������������� 
	//B -- ���� true ���� �����������
	//C -- ��� �����, ����������� � ����� ���� �����


	//A -> B -> ������� -> C -> B -> ������� -> C ->.... 
	{
		int i = 0; // A
		for (; ; ++i) // ������� ���. � ��������� ���-�� �����
		{
			if (!(i < 10)) break; // B

			continue; // �������� � ���� C
		}
	}

	// ������ ���� B
	//while (�) // ������� ���. �� �� ����� ���-�� �����
	while (true)
	{

		continue; // B
	}


	//���� � ������������
	do
	{

		continue; // B
	} while (true); // B


	if (a == 5) // je jne � asm
		goto layble; //jmp � asm







	return 0; 


}


