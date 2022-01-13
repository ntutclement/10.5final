int main()
{

	int who, i;

	computer.total = 0;
	you.total = 0;
	you2.total = 0;

	computer.name = 'c';
	you.name = 'y';
	you2.name = 'q';


	for (i = 0; i < 6; i++)
	{
		computer.tims[i] = 0;
		you.tims[i] = 0;
		you2.tims[i] = 0;
	}

	printf("開始遊戲 要與誰玩\n");
	printf("1 與電腦玩 2兩個人玩 0退出遊戲\n");
	scanf_s("%d", &who);
	srand(time(NULL));

	do
	{
		switch (who)
		{
		case 1:
			i = 0;
			getcard(computer, i);
			getcard(you, i);

			printf("D = 10\n");
			printf("電腦的牌 : X  \n");
			printf("你的牌 :   %c \n", face[you.tims[0] - 1]);

			addcard();

			i = 1;
			while (ans == 1)
			{
				getcard(you, i);

				printf("\n你的牌 : %c \n", face[you.tims[i] - 1]);
				i++;

				if (you.total <= 10.5 && you.tims[4] != 0)
				{
					show(you);
					printf("你過五關\n=====You Win=====\n");
					again();
				}
				if (you.total > 10.5)
				{
					show(you);
					printf("\n*****Computer Win*****\n");
					again();
				}

				addcard();
			}


			printf("輪到電腦\n");


			if (computer.total < 10)
			{
				i = 1;

				while (computer.total < 8)
				{
					getcard(computer, i);

					printf("\n電腦的牌 : %c \n", face[computer.tims[i] - 1]);
					i++;

					if (computer.total <= 10.5 && computer.tims[4] != 0)
					{
						show(computer);
						printf("電腦過五關 \n*****Computer Win*****\n");
						again();
					}
					if (computer.total > 10.5)
					{
						show(computer);
						printf("\n=====You Win=====\n");
						again();
					}
				}
			}

			printf("\n攤牌\n\n");

			show(computer);
			show(you);

			showwhowin(you, computer);

			printf("\n");

			again();
			break;

		case 2:
			i = 0;
			getcard(you, i);


			printf("D = 10\n");
			printf("玩家1的牌 :    %c  \n", face[you.tims[0] - 1]);


			addcard();

			i = 1;

			while (ans == 1)
			{
				getcard(you, i);

				printf("\n你的牌 : %c \n", face[you.tims[i] - 1]);
				i++;


				if (you.total <= 10.5 && you.tims[5] != 0)
				{
					show(you);
					printf("你過五關\n=====玩家1 Win=====\n");
					again();
				}
				if (you.total > 10.5)
				{
					show(you);
					printf("\n*****玩家2 Win*****\n");
					again();
				}

				addcard();
			}

			system("cls");
			//=======================================================
			printf("輪到玩家2\n");
			i = 0;
			getcard(you2, i);


			printf("D = 10\n");
			printf("玩家2的牌 :    %c  \n", face[you2.tims[0] - 1]);

			addcard();

			i = 1;

			while (ans == 1)
			{
				getcard(you2, i);

				printf("\n你的牌 : %c \n", face[you2.tims[i] - 1]);
				i++;


				if (you2.total <= 10.5 && you2.tims[5] != 0)
				{
					show(you2);
					printf("你過五關\n=====玩家2 Win=====\n");
					again();
				}
				if (you2.total > 10.5)
				{
					show(you2);
					printf("\n*****玩家1 Win*****\n");
					again();
				}

				addcard();
			}

			printf("\n攤牌\n\n");

			show(you);
			show(you2);

			showwhowin(you, you2);
			printf("\n");

			again();
			break;
		case 0:

			exit(EXIT_SUCCESS);
			break;

		default:

			puts("輸入錯誤，再輸入一次");
			printf("1 與電腦玩 2兩個人玩 0退出遊戲\n");
			scanf_s("%d", &who);
			break;
		}
	} while (who <= 2);
	return 0;
}