
showwhowin(you, computer);

printf("\n");

again();
break;

		case 2:
			i = 0;
			getcard(you, i);


			printf("D = 10\n");
			printf("���a1���P :    %c  \n", face[you.tims[0] - 1]);


			addcard();

			i = 1;

			while (ans == 1)
			{
				getcard(you, i);

				printf("\n�A���P : %c \n", face[you.tims[i] - 1]);
				i++;


				if (you.total <= 10.5 && you.tims[5] != 0)
				{
					show(you);
					printf("�A�L����\n=====���a1 Win=====\n");
					again();
				}
				if (you.total > 10.5)
				{
					show(you);
					printf("\n*****���a2 Win*****\n");
					again();
				}

				addcard();
			}

			system("cls");
			//=======================================================
			printf("���쪱�a2\n");
			i = 0;
			getcard(you2, i);


			printf("D = 10\n");
			printf("���a2���P :    %c  \n", face[you2.tims[0] - 1]);

			addcard();

			i = 1;

			while (ans == 1)
			{
				getcard(you2, i);

				printf("\n�A���P : %c \n", face[you2.tims[i] - 1]);
				i++;


				if (you2.total <= 10.5 && you2.tims[5] != 0)
				{
					show(you2);
					printf("�A�L����\n=====���a2 Win=====\n");
					again();
				}
				if (you2.total > 10.5)
				{
					show(you2);
					printf("\n*****���a1 Win*****\n");
					again();
				}

				addcard();
			}

			printf("\n�u�P\n\n");

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

			puts("��J���~�A�A��J�@��");
			printf("1 �P�q���� 2��ӤH�� 0�h�X�C��\n");
			scanf_s("%d", &who);
			break;
		}
	} while (who <= 2);
	return 0;
}