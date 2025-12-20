#include <stdio.h>
#include <limits.h>
int main()
{
   int n;
   printf("Enter the number of processes : ");
   scanf("%d", &n);
   int AT[n], BT[n];
   for (int i = 0; i < n; i++)
   {
      printf("Enter the AT of the process %d  :", i + 1);
      scanf("%d", &AT[i]);
      printf("Enter the BT of the process %d  :", i + 1);
      scanf("%d", &BT[i]);
   }

   int sum = 0;  // Total Waiting Time
   int comp = 0; // Number of completed processes
   int time = 0; // Current time

   while (comp < n)
   {
      int min = INT_MAX;
      int idx = -1;
      for (int i = 0; i < n; i++)
      {
         if (AT[i] <= time && BT[i] && AT[i] < min)
         {
            min = AT[i];
            idx = i;
         }
      }

      if (idx == -1)
      {
         time++;
         continue;
      }
      time += BT[idx];
      sum += time - AT[idx] - BT[idx];
      comp++;
      BT[idx] = 0;
   }

   printf(" Average  WT is : %.2f", (float)sum / n);

   return 0;
}