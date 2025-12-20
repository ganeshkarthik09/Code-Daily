#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ATTR 100
#define MAX_FD 100

typedef struct
{
   char left[MAX_ATTR];
   char right[MAX_ATTR];
} FunctionalDependency;

// Function to compute attribute closure
void compute_closure(char att[], FunctionalDependency fd_list[], int fd_count, char closure[])
{
   int updated;
   strcpy(closure, att);
   do
   {
      updated = 0;
      for (int i = 0; i < fd_count; i++)
      {
         int contains_all = 1;
         for (int j = 0; fd_list[i].left[j] != '\0'; j++)
         {
            if (!strchr(closure, fd_list[i].left[j]))
            {
               contains_all = 0;
               break;
            }
         }
         if (contains_all)
         {
            for (int j = 0; fd_list[i].right[j] != '\0'; j++)
            {
               if (!strchr(closure, fd_list[i].right[j]))
               {
                  strncat(closure, &fd_list[i].right[j], 1);
                  updated = 1;
               }
            }
         }
      }
   } while (updated);
}

// Check if a set of attributes is a superkey
int is_superkey(char att[], char candkey[], FunctionalDependency fd_list[], int fd_count)
{
   char closure[MAX_ATTR] = "";
   compute_closure(candkey, fd_list, fd_count, closure);
   return strlen(closure) == strlen(att);
}

// Find all candidate keys
void find_candidate_keys(char att[], FunctionalDependency fd_list[], int fd_count)
{
   printf("Candidate Keys:\n");
   int total_attrs = strlen(att);
   char candkey[MAX_ATTR];
   for (int i = 1; i < (1 << total_attrs); i++)
   {
      candkey[0] = '\0';
      for (int j = 0; j < total_attrs; j++)
      {
         if (i & (1 << j))
         {
            strncat(candkey, &att[j], 1);
         }
      }
      if (is_superkey(att, candkey, fd_list, fd_count))
      {
         int is_minimal = 1;
         for (int j = 0; j < strlen(candkey); j++)
         {
            char temp[MAX_ATTR] = "";
            strncpy(temp, candkey, j);
            strncat(temp, candkey + j + 1, strlen(candkey) - j - 1);
            if (is_superkey(att, temp, fd_list, fd_count))
            {
               is_minimal = 0;
               break;
            }
         }
         if (is_minimal)
         {
            printf("%s\n", candkey);
         }
      }
   }
}

int main()
{
   char att[MAX_ATTR];
   FunctionalDependency fd_list[MAX_FD];
   int fd_count;

   printf("Enter all attributes (e.g., ABCDE): ");
   scanf("%s", att);

   printf("How many functional dependencies? ");
   scanf("%d", &fd_count);

   for (int i = 0; i < fd_count; i++)
   {
      printf("Left-hand side of FD %d: ", i + 1);
      scanf("%s", fd_list[i].left);
      printf("Right-hand side of FD %d: ", i + 1);
      scanf("%s", fd_list[i].right);
   }

   char input_attr[MAX_ATTR], closure[MAX_ATTR] = "";
   printf("Enter attributes to compute closure (e.g., A): ");
   scanf("%s", input_attr);

   compute_closure(input_attr, fd_list, fd_count, closure);
   printf("Closure of {%s}: %s\n", input_attr, closure);

   find_candidate_keys(att, fd_list, fd_count);

   return 0;
}