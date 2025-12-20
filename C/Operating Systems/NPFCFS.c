// With AT = 0


#include <stdio.h>
int main()
{
   int n;
   float totalTT = 0;
   float totalWT = 0;
   printf("Enter the number of processes : ");
   scanf("%d", &n);
   int BT[n], TT[n], WT[n];
   for (int i = 0; i < n; i++)
   {
      printf("Enter the Burst time of the process %d : ", i+1);
      scanf("%d", &BT[i]);
      // TT[1] =  BT[1];
      // TT[i] = BT[] ;
      // TT[i] = BT[i] +BT[i-1];
      // printf("Turn around time fore process %d is : %d",i,TT[i]);
   }
   TT[0] = BT[0];
   printf("Turn around time for process 1 is : %d \n", TT[0]);
   for (int i = 1; i < n; i++)
   {
      TT[i] = BT[i] + TT[i - 1];
      printf("Turn around time for process %d is %d :  \n", i+1, TT[i]);
      totalTT += TT[i];
   }
   totalTT += TT[0];

   float avgTT = totalTT / n;
   printf("Average TT = %f \n", avgTT);
    // Waiting Time Calculation
    WT[0] = 0; // First process has no waiting time
    printf("Waiting Time for Process 1: %d \n", WT[0]);
   for (int i = 1; i < n; i++)
   {
      WT[i] = TT[i] - BT[i];
      printf("WT of the process %d is : %d \n",i+1,WT[i]);
      totalWT += WT[i];
   }
   float avgWT = totalWT / n;
   printf("Average WT = %.2f ",avgWT);

   return 0;
}