#include<iostream>
using namespace std;
void board();
int checkwinner();

char block[10] = { '0','1','2','3','4','5','6','7','8','9' };
int main()
{
	int player = 1, i, choice;
	char mark;
	do
	{
		board();
		player = (player % 2) ? 1 : 2;
		cout << "Player " << player << ", enter a number:  ";
		cin >> choice;
		mark = (player == 1) ? 'X' : 'O';
		if (choice == 1 && block[1] == '1')
			block[1] = mark;
		else if (choice == 2 && block[2] == '2')
			block[2] = mark;
		else if (choice == 3 && block[3] == '3')
			block[3] = mark;
		else if (choice == 4 && block[4] == '4')
			block[4] = mark;
		else if (choice == 5 && block[5] == '5')
			block[5] = mark;
		else if (choice == 6 && block[6] == '6')
			block[6] = mark;
		else if (choice == 7 && block[7] == '7')
			block[7] = mark;
		else if (choice == 8 && block[8] == '8')
			block[8] = mark;
		else if (choice == 9 && block[9] == '9')
			block[9] = mark;
		else
		{
			cout << "Invalid move" << endl;
			player--;
		}
		i = checkwinner();
		player++;
	} while (i == -1);
	board();
	if (i == 1)
		cout << "==>  \aPlayer " << --player << " win ";
	else
		cout << "==>  \aGame draw";

	return 0;
}

/*      _______________________________________________________

		FUNCTION TO DRAW BOARD OF TIC TAC TOE WITH PLAYERS MARK
		_______________________________________________________      */

void board()
{
	system("cls");
	cout << "\n\n      TIC TAC TOE    \n" << endl;
	cout << "Player 1 (X) - Player 2 (O)" << endl << endl;
	cout << "\t     |     |     " << endl;
	cout << "\t  " << block[1] << "  |  " << block[2] << "  |  " << block[3] << endl;
	cout << "\t_____|_____|_____" << endl;
	cout << "\t     |     |  " << endl;
	cout << "\t  " << block[4] << "  |  " << block[5] << "  |  " << block[6] << endl;
	cout << "\t_____|_____|_____" << endl;
	cout << "\t     |     |  " << endl;
	cout << "\t  " << block[7] << "  |  " << block[8] << "  |  " << block[9] << endl;
	cout << "\t     |     |  " << endl;
}

/*	______________________________

	FUNCTION TO RETURN GAME STATUS
	1 FOR GAME IS OVER WITH RESULT
	-1 FOR GAME IS IN PROGRESS
	O GAME IS OVER AND NO RESULT
	______________________________   */

int checkwinner()
{
	if (block[1] == block[4] && block[4] == block[7])
		return 1;
	else if (block[2] == block[5] && block[5] == block[8])
		return 1;
	else if (block[3] == block[6] && block[6] == block[9])
		return 1;
	else if (block[1] == block[2] && block[2] == block[3])
		return 1;
	else if (block[4] == block[5] && block[5] == block[6])
		return 1;
	else if (block[7] == block[8] && block[8] == block[9])
		return 1;
	else if (block[1] == block[5] && block[5] == block[9])
		return 1;
	else if (block[3] == block[5] && block[5] == block[7])
		return 1;
	else if (block[1] != '1' && block[2] != '2' && block[3] != '3' && block[4] != '4' && block[5] != '5' && block[6] != '6' && block[7] != '7' && block[8] != '8' && block[9] != '9')
		return 0;
	else
		return -1;
}

/*      _________________

		PROJECT ENDS HERE
		_________________       */
