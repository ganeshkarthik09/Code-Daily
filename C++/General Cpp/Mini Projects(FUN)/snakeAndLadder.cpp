#include <bits/stdc++.h>
using namespace std;

int rollDie()
{
   return rand() % 6 + 1;
}

int player1 = 0, player2 = 0;

void printBoard()
{
   int board[101];
   for (int i = 1; i <= 100; ++i)
   {
      board[i] = i;
   }

   for (int row = 10; row >= 1; --row)
   {
      if (row % 2 == 0)
      {
         for (int col = 1; col <= 10; ++col)
         {
            int pos = (row - 1) * 10 + col;
            if (pos == player1)
               cout << "P1\t";
            else if (pos == player2)
               cout << "P2\t";
            else
               cout << pos << "\t";
         }
      }
      else
      {
         for (int col = 10; col >= 1; --col)
         {
            int pos = (row - 1) * 10 + col;
            if (pos == player1)
               cout << "P1\t";
            else if (pos == player2)
               cout << "P2\t";
            else
               cout << pos << "\t";
         }
      }
      cout << "\n";
   }
   cout << "\n";
}

int movePlayer(int currentPlayer, int roll)
{
   int newPosition = currentPlayer + roll;
   int snakesAndLadders[101] = {0};

   snakesAndLadders[6] = 40;
   snakesAndLadders[23] = -10;
   snakesAndLadders[45] = -7;
   snakesAndLadders[61] = -18;
   snakesAndLadders[65] = -8;
   snakesAndLadders[77] = 5;
   snakesAndLadders[98] = -10;

   int newSquare = newPosition + snakesAndLadders[newPosition];
   if (newSquare > 100)
      return currentPlayer;
   return newSquare;
}

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   srand(time(0));
   int currentPlayer = 1;
   bool won = false;

   cout << "🎲 Snakes And Ladders Game 🎲\n";
   while (!won)
   {
      cout << "Player " << currentPlayer << ", press Enter to roll the die...\n";
      cin.ignore();

      int roll = rollDie();
      cout << "You rolled a " << roll << "\n";

      if (currentPlayer == 1)
      {
         player1 = movePlayer(player1, roll);
         cout << "Player 1 moved to " << player1 << "\n";
         printBoard();
         if (player1 == 100)
         {
            cout << "🏆 Player 1 Wins !! 🏆\n";
            won = true;
         }
      }
      else
      {
         player2 = movePlayer(player2, roll);
         cout << "Player 2 moved to " << player2 << "\n"; 
         printBoard();
         if (player2 == 100)
         {
            cout << "🏆 Player 2 Wins !! 🏆\n";
            won = true;
         }
      }

      currentPlayer = (currentPlayer == 1) ? 2 : 1;
   }

   return 0;
}