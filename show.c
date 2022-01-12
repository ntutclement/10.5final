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

void show(player x)
{
	int i;
	if (x.name == 'c')
	{

		printf("電腦所有的牌 : ");

		for (i = 0; i < 5; i++)
		{
			printf("%c ", face[computer.tims[i] - 1]);
		}

		printf("電腦的總和 : %.1f \n", computer.total);
	}
	else if (x.name == 'y')
	{

		printf("你所有的牌 : ");

		for (i = 0; i < 6; i++)
		{
			printf("%c ", face[you.tims[i] - 1]);
		}

		printf("你的總和 : %.1f \n", you.total);
	}
	else if (x.name == 'q')
	{

		printf("玩家2所有的牌 : ");

		for (i = 0; i < 6; i++)
		{
			printf("%c ", face[you2.tims[i] - 1]);
		}

		printf("玩家2的總和 : %.1f \n", you2.total);
	}
}