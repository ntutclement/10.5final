void getcard(player x, int a)
{
	int i;
	if (x.name == 'c')
	{
		for (i = a; i <= a; i++)
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
		}
	}
	else if (x.name == 'y')
	{
		for (i = a; i <= a; i++)
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
		}
	}
	else if (x.name == 'q')
	{
		for (i = a; i <= a; i++)
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
		}
	}
}

void again()
{
	int agn;

	printf("\n是否再來一局   1是   2否 ");
	scanf(" %d", &agn);

	while ((agn != 1) || (agn != 2))
	{
		if (agn == 1)
		{
			system("cls");
			main();
		}
		else if (agn == 2)
		{
			exit(EXIT_SUCCESS);
		}
		else
		{
			printf("再輸入一次");
			printf("\n是否再來一局   1是   2否 ");
			scanf(" %d", &agn);
		}
	}
}


void addcard()
{
	printf("\n是否要加牌   1是   2否 ");
	scanf(" %d", &ans);

	while ((ans != 1) && (ans != 2))
	{
		printf("再輸入一次\n");
		printf("\n是否要加牌   1是   2否 ");
		scanf(" %d", &ans);
	}
}