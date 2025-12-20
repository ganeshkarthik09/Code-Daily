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

void attribute_closure(char attributes[], FunctionalDependency fd_list[], int fd_count, char closure[])
{
   int changes_made;
   strcpy(closure, attributes);
   do
   {
      changes_made = 0;
      for (int i = 0; i < fd_count; i++)
      {
         int all_present = 1;
         for (int j = 0; fd_list[i].left[j] != '\0'; j++)
         {
            if (!strchr(closure, fd_list[i].left[j]))
            {
               all_present = 0;
               break;
            }
         }
         if (all_present)
         {
            for (int j = 0; fd_list[i].right[j] != '\0'; j++)
            {
               if (!strchr(closure, fd_list[i].right[j]))
               {
                  strncat(closure, &fd_list[i].right[j], 1);
                  changes_made = 1;
               }
            }
         }
      }
   } while (changes_made);
}

int is_superkey(char attributes[], char candidate[], FunctionalDependency fd_list[], int fd_count)
{
   char closure[MAX_ATTR] = "";
   attribute_closure(candidate, fd_list, fd_count, closure);
   return strspn(attributes, closure) == strlen(attributes);
}

void find_candidate_keys(char attributes[], FunctionalDependency fd_list[], int fd_count)
{
   printf("Candidate Keys:\n");
   int attr_count = strlen(attributes);
   char candidate[MAX_ATTR];
   for (int i = 1; i < (1 << attr_count); i++)
   {
      candidate[0] = '\0';
      for (int j = 0; j < attr_count; j++)
      {
         if (i & (1 << j))
         {
            strncat(candidate, &attributes[j], 1);
         }
      }
      if (is_superkey(attributes, candidate, fd_list, fd_count))
      {
         int minimal_key_found = 1;
         for (int j = 0; j < strlen(candidate); j++)
         {
            char temp[MAX_ATTR] = "";
            strncpy(temp, candidate, j);
            strncat(temp, candidate + j + 1, strlen(candidate) - j - 1);
            if (is_superkey(attributes, temp, fd_list, fd_count))
            {
               minimal_key_found = 0;
               break;
            }
         }
         if (minimal_key_found)
         {
            printf("%s\n", candidate);
         }
      }
   }
}

void find_super_keys(char attributes[], FunctionalDependency fd_list[], int fd_count)
{
   printf("Super Keys:\n");
   int attr_count = strlen(attributes);
   for (int i = 1; i < (1 << attr_count); i++)
   {
      char candidate[MAX_ATTR] = "";
      for (int j = 0; j < attr_count; j++)
      {
         if (i & (1 << j))
         {
            strncat(candidate, &attributes[j], 1);
         }
      }
      if (is_superkey(attributes, candidate, fd_list, fd_count))
      {
         printf("%s\n", candidate);
      }
   }
}

void find_prime_and_non_prime(char attributes[], FunctionalDependency fd_list[], int fd_count)
{
   printf("Prime and Non-Prime Attributes:\n");
   char cand_keys[MAX_FD][MAX_ATTR];
   int candidate_count = 0;
   int attr_count = strlen(attributes);
   for (int i = 1; i < (1 << attr_count); i++)
   {
      char candidate[MAX_ATTR] = "";
      for (int j = 0; j < attr_count; j++)
      {
         if (i & (1 << j))
         {
            strncat(candidate, &attributes[j], 1);
         }
      }
      if (is_superkey(attributes, candidate, fd_list, fd_count))
      {
         int minimal_key_found = 1;
         for (int j = 0; j < strlen(candidate); j++)
         {
            char temp[MAX_ATTR] = "";
            strncpy(temp, candidate, j);
            strncat(temp, candidate + j + 1, strlen(candidate) - j - 1);
            if (is_superkey(attributes, temp, fd_list, fd_count))
            {
               minimal_key_found = 0;
               break;
            }
         }
         if (minimal_key_found)
         {
            strcpy(cand_keys[candidate_count++], candidate);
         }
      }
   }
   char prime[MAX_ATTR] = "";
   char non_prime[MAX_ATTR] = "";
   for (int i = 0; i < attr_count; i++)
   {
      int is_prime = 0;
      for (int j = 0; j < candidate_count; j++)
      {
         if (strchr(cand_keys[j], attributes[i]))
         {
            is_prime = 1;
            break;
         }
      }
      if (is_prime)
      {
         strncat(prime, &attributes[i], 1);
      }
      else
      {
         strncat(non_prime, &attributes[i], 1);
      }
   }
   printf("Prime Attributes: %s\n", prime);
   printf("Non-Prime Attributes: %s\n", non_prime);
}

void find_extraneous_attributes(char attributes[], FunctionalDependency fd_list[], int fd_count)
{
   printf("Extraneous Attributes:\n");
   for (int i = 0; i < fd_count; i++)
   {
      char temp_left[MAX_ATTR];
      strcpy(temp_left, fd_list[i].left);
      for (int j = 0; j < strlen(temp_left); j++)
      {
         char reduced_left[MAX_ATTR] = "";
         strncpy(reduced_left, temp_left, j);
         strncat(reduced_left, temp_left + j + 1, strlen(temp_left) - j - 1);
         char closure[MAX_ATTR] = "";
         attribute_closure(reduced_left, fd_list, fd_count, closure);
         if (strspn(fd_list[i].right, closure) == strlen(fd_list[i].right))
         {
            printf("Extraneous attribute '%c' in FD %s -> %s\n", temp_left[j], fd_list[i].left, fd_list[i].right);
         }
      }
   }
}

int main()
{
   char attributes[MAX_ATTR];
   FunctionalDependency fd_list[MAX_FD];
   int fd_count;
   printf("Enter the attributes (e.g., ABCDE): ");
   scanf("%s", attributes);
   printf("Enter the number of functional dependencies: ");
   scanf("%d", &fd_count);
   for (int i = 0; i < fd_count; i++)
   {
      printf("Enter left side of FD %d (e.g., A): ", i + 1);
      scanf("%s", fd_list[i].left);
      printf("Enter right side of FD %d (e.g., B): ", i + 1);
      scanf("%s", fd_list[i].right);
   }
   char input_attr[MAX_ATTR];
   char closure[MAX_ATTR] = "";
   printf("Enter a set of attributes to compute closure (e.g., A): ");
   scanf("%s", input_attr);
   attribute_closure(input_attr, fd_list, fd_count, closure);
   printf("Closure of {%s}: %s\n", input_attr, closure);
   find_candidate_keys(attributes, fd_list, fd_count);
   find_super_keys(attributes, fd_list, fd_count);
   find_prime_and_non_prime(attributes, fd_list, fd_count);
   find_extraneous_attributes(attributes, fd_list, fd_count);
   return 0;
}