#include<iostream>

struct ch
{
	char name[31];
	int vote = 0;
	int rank;
};

int main()
{
	struct ch ch[10];
	int num = 0, vote, rank = 1;
	char name[9][31];
	for (int i = 1; i <= 8; i++)
	{
		std::cin >> ch[i].name;
	}
	scanf_s("%d", &num);
	for (int i = 0; i < num; i++)
	{
		scanf_s("%d", &vote);
		ch[vote].vote++;
	}
	for (num; num >= 0; num--)
	{
		for (int i = 1; i <= 8; i++)
		{
			if (ch[i].vote == num)
			{
				ch[i].rank = rank;
				rank++;
			}
		}
	}
	for (int i = 1; i <= 8; i++)
	{
		if (ch[i].rank == 8)
		{
			for (int j = 1; j <= 8; j++)
			{
				if (ch[i].vote == ch[j].vote)
				{
					ch[j].rank = 8;
				}
			}
		}
	}
	for (int i = 1; i <= 8; i++)
	{
		if (ch[i].rank < 8)
		{
			std::cout << ch[i].name <<std::endl;
		}
	}
	return 0;
}