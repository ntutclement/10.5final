typedef struct _player
{
	char name;
	int tims[6];
	float total;
}player;
player computer;
player you;
player you2;


const char face[13] = { 'A', '2', '3', '4', '5', '6', '7', '8', '9', 'D', 'J', 'Q', 'K' };   // 0~12, D = 10
int remain[13] = { 4 };
int ans;
const char* flower[4] = { "Hearts","Diamonds","Clubs","Spades" };


void show(player x);
void showwhowin(player x, player z);

void show(player x)
{
	int i;
	if (x.name == 'c')
	{

		printf("�q���Ҧ����P : ");

		for (i = 0; i < 5; i++)
		{
			printf("%c ", face[computer.tims[i] - 1]);
		}

		printf("�q�����`�M : %.1f \n", computer.total);
	}
	else if (x.name == 'y')
	{

		printf("�A�Ҧ����P : ");

		for (i = 0; i < 6; i++)
		{
			printf("%c ", face[you.tims[i] - 1]);
		}

		printf("�A���`�M : %.1f \n", you.total);
	}
	else if (x.name == 'q')
	{

		printf("���a2�Ҧ����P : ");

		for (i = 0; i < 6; i++)
		{
			printf("%c ", face[you2.tims[i] - 1]);
		}

		printf("���a2���`�M : %.1f \n", you2.total);
	}
}


void showwhowin(player x, player z)
{
	if ((x.total = you.total) && (z.total = computer.total))
	{
		if ((x.total > z.total) && (x.total <= 10.5) && (z.total <= 10.5))
		{
			printf("\n=====���a1 Win=====\n");
		}
		else if ((z.total > x.total) && (z.total <= 10.5) && (x.total <= 10.5))
		{
			printf("\n*****Computer Win*****\n");
		}
		else if ((z.total == x.total) && (z.total <= 10.5) && (x.total <= 10.5))
		{
			printf("\n-----Tie-----\n");
		}
		else
		{
			printf("XXXXX No One Win XXXXX\n");
		}
	}

	else if ((x.total = you.total) && (z.total = you2.total))
	{
		if ((x.total > z.total) && (x.total <= 10.5) && (z.total <= 10.5))
		{
			printf("\n=====���a1 Win=====\n");
		}
		else if ((z.total > x.total) && (z.total <= 10.5) && (x.total <= 10.5))
		{
			printf("\n*****���a2 Win*****\n");
		}
		else if ((z.total == x.total) && (z.total <= 10.5) && (x.total <= 10.5))
		{
			printf("\n-----Tie-----\n");
		}
		else
		{
			printf("XXXXX No One Win XXXXX\n");
		}
	}

}