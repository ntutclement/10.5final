
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