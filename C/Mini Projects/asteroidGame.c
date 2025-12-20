#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#define WIDTH 50
#define HEIGHT 20
typedef struct
{
   int x, y;
} Point;
typedef struct
{
   Point Position;

} Asteroid;
typedef struct
{
   Point Position;
   int score;
} Ship;

Asteroid new_asteroid()
{
   Asteroid asteroid;
   srand(time(NULL));
   asteroid.Position.x = rand() % WIDTH;
   asteroid.Position.y = 0;
   return asteroid;
}
void move_asteroid(Asteroid *asteroid)
{
   asteroid->Position.y++;
}
Ship new_ship()
{
   Ship ship;
   ship.Position.x = WIDTH / 2;
   ship.Position.y = HEIGHT - 1;
   ship.score = 0;
   return ship;
}

void move_ship_left(Ship *ship)
{
   ship->Position.x--;
   if (ship->Position.x < 0)
      ship->Position.x = 0;
}

void move_ship_right(Ship *ship)
{
   ship->Position.x++;
   if (ship->Position.x >= WIDTH)
   {
      ship->Position.x = WIDTH - 1;
   }
}

void increase_score(Ship *ship)
{
   ship->score++;
}
bool check_collision(Ship ship, Asteroid asteroid)
{
   if (ship.Position.x == asteroid.Position.x && ship.Position.y == asteroid.Position.y)
   {
      return true;
   }
   return false;
}
int main()
{
   Asteroid asteroids[100];
   Ship ship = new_ship();
   int num_asteroid = 0;
   bool game_over = false;

   while (!game_over)
   {
      system("clear");
      printf("Score : %d\n", ship.score);

      for (int i = 0; i < HEIGHT; i++)
      {
         for (int j = 0; j < WIDTH; j++)
         {
            bool asteroid_here = false;
            for (int k = 0; k < num_asteroid; k++)
            {
               if (asteroids[k].Position.x == j && asteroids[k].Position.y == i)
               {
                  asteroid_here = true;
                  break;
               }
            }
            if (j == ship.Position.x && i == ship.Position.y)
            {
               printf("0");
            }
            else if (asteroid_here)
            {
               printf("*");
            }
            else
            {
               printf(" ");
            }
         }
         printf("\n");
      }
      for (int i = 0; i < num_asteroid; i++)
      {
         move_asteroid(&asteroids[i]);
         if (asteroids[i].Position.y == HEIGHT - 1)
         {
            for (int j = 0; j < num_asteroid - 1; ++j)
            {
               asteroids[j] = asteroids[j + 1];
            }
            num_asteroid--;
            i--;
         }
      }
      if (rand() % 10 == 0)
      {
         asteroids[num_asteroid] = new_asteroid();
         num_asteroid++;
      }
      char input;
      scanf("%c", &input);
      switch (input)
      {
      case 'a':
         move_ship_left(&ship);
         break;
      case 'd':
         move_ship_right(&ship);
         break;
      }

      for (int i = 0; i < num_asteroid; i++)
      {
         if (check_collision(ship, asteroids[i]))
         {
            game_over = true;
            break;
         }
      }
      for (int i = 0; i < num_asteroid; ++i)
      {
         if (asteroids[i].Position.y == HEIGHT - 1)
         {
            increase_score(&ship);
         }
      }
   }
   printf("Game Over ! Final score : %d \n", ship.score);
   return 0;
}