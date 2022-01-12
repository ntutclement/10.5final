int main()
{


	int who, i;

	computer.total = 0;
	you.total = 0;
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
			getcard(computer);
			getcard(you);

			printf("D = 10\n");
			printf("電腦的牌 : X  \n");
			printf("你的牌 :   %c \n", face[you.tims[0] - 1]);

			printf("\n是否要加牌   1是   2否 ");
			scanf(" %d", &ans);

			while (ans != 1 && ans != 2)
			{
				printf("再輸入一次\n");
				printf("\n是否要加牌   1是   2否 ");
				scanf(" %d", &ans);
			}

			i = 1;
			while (ans == 1)
			{
				you.tims[i] = rand() % 13 + 1;

				if (you.tims[i] > 10)
				{
					you.total = you.total + 0.5;
				}
				else
				{
					you.total = you.total + you.tims[i];
				}
				remain[you.tims[i] - 1]--;

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

				printf("\n是否要加牌   1是   2否 ");
				scanf(" %d", &ans);
			}


			printf("輪到電腦\n");


			if (computer.total < 10)
			{
				i = 1;

				while (computer.total < 8)
				{
					computer.tims[i] = rand() % 13 + 1;

					if (computer.tims[i] > 10)
					{
						computer.total = computer.total + 0.5;
					}
					else
					{
						computer.total = computer.total + computer.tims[i];
					}
					remain[computer.tims[i] - 1]--;

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

			if (you.total > computer.total && you.total <= 10.5 && computer.total <= 10.5)
			{
				printf("\n=====玩家1 Win=====\n");
			}
			else if (computer.total > you.total && computer.total <= 10.5 && you.total <= 10.5)
			{
				printf("\n*****Computer Win*****\n");
			}
			else if (computer.total == you.total && computer.total <= 10.5 && you.total <= 10.5)
			{
				printf("\n-----Tie-----\n");
			}
			else
			{
				printf("no one wins\n");
			}

			printf("\n");

			again();
			break;

		case 2:
			getcard(you);


			printf("D = 10\n");
			printf("玩家1的牌 :    %c  \n", face[you.tims[0] - 1]);


			printf("\n是否要加牌   1是   2否 ");
			scanf(" %d", &ans);

			while (ans != 1 && ans != 2)
			{
				printf("再輸入一次\n");
				printf("\n是否要加牌   1是   2否 ");
				scanf(" %d", &ans);
			}

			i = 1;

			while (ans == 1)
			{
				you.tims[i] = rand() % 13 + 1;

				if (you.tims[i] > 10)
				{
					you.total = you.total + 0.5;
				}
				else
				{
					you.total = you.total + you.tims[i];
				}
				remain[you.tims[i] - 1]--;

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

				printf("\n是否要加牌   1是   2否 ");
				scanf(" %d", &ans);
			}

			system("cls");
			printf("輪到玩家2\n");

			getcard(you2);
			printf("玩家2的牌 :   %c  \n", face[you2.tims[0] - 1]);

			printf("\n是否要加牌   1是   2否 ");
			scanf(" %d", &ans);

			while (ans != 1 && ans != 2)
			{
				printf("再輸入一次\n");
				printf("\n是否要加牌   1是   2否 ");
				scanf(" %d", &ans);
			}

			i = 1;

			while (ans == 1)
			{
				you2.tims[i] = rand() % 13 + 1;

				if (you2.tims[i] > 10)
				{
					you2.total = you2.total + 0.5;
				}
				else
				{
					you2.total = you2.total + you2.tims[i];
				}
				remain[you2.tims[i] - 1]--;

				printf("\n玩家2的牌 : %c \n", face[you2.tims[i] - 1]);
				i++;


				if (you2.total <= 10.5 && you2.tims[5] != 0)
				{
					show(you2);
					printf("玩家2過五關\n=====玩家2 Win=====\n");
					again();
				}
				if (you2.total > 10.5)
				{
					show(you2);
					printf("\n*****玩家1 Win*****\n");
					again();
				}

				printf("\n是否要加牌   1是   2否 ");
				scanf(" %d", &ans);
			}

			printf("\n攤牌\n\n");

			show(you);
			show(you2);

			if (you.total > you2.total && you.total <= 10.5 && you2.total <= 10.5)
			{
				printf("\n=====玩家1 Win=====\n");
			}
			else if (you2.total > you.total && you2.total <= 10.5 && you.total <= 10.5)
			{
				printf("\n*****玩家2 Win*****\n");
			}
			else if (you2.total == you.total && you2.total <= 10.5 && you.total <= 10.5)
			{
				printf("\n-----Tie-----\n");
			}
			else
			{
				printf("no one wins\n");
			}
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
