#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

struct Node *insertAtBeginning(struct Node *head, int data)
{
    struct Node *newNode = createNode(data);
    if (head == NULL)
    {
        newNode->next = newNode;
        return newNode;
    }
    struct Node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = head;
    return newNode;
}

struct Node *insertAtEnd(struct Node *head, int data)
{
    struct Node *newNode = createNode(data);
    if (head == NULL)
    {
        newNode->next = newNode;
        return newNode;
    }
    struct Node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = head;
    return head;
}

struct Node *insertAtPosition(struct Node *head, int data, int position)
{
    if (position < 0)
    {
        return head;
    }
    if (position == 0)
    {
        return insertAtBeginning(head, data);
    }
    struct Node *newNode = createNode(data);
    struct Node *temp = head;
    for (int i = 0; temp->next != head && i < position - 1; i++)
    {
        temp = temp->next;
    }
    if (temp->next == head)
    {
        return insertAtEnd(head, data);
    }
    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}

struct Node *deleteAtBeginning(struct Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (head->next == head)
    {
        free(head);
        return NULL;
    }
    struct Node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    struct Node *toDelete = head;
    temp->next = head->next;
    head = head->next;
    free(toDelete);
    return head;
}

struct Node *deleteAtEnd(struct Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (head->next == head)
    {
        free(head);
        return NULL;
    }
    struct Node *temp = head;
    while (temp->next->next != head)
    {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = head;
    return head;
}

struct Node *deleteAtPosition(struct Node *head, int position)
{
    if (head == NULL || position < 0)
    {
        return head;
    }
    if (position == 0)
    {
        return deleteAtBeginning(head);
    }
    struct Node *temp = head;
    struct Node *prev = NULL;
    for (int i = 0; temp->next != head && i < position; i++)
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp == head)
    {
        return head;
    }
    prev->next = temp->next;
    free(temp);
    return head;
}

struct Node *deleteValue(struct Node *head, int value)
{
    struct Node *temp = head;
    struct Node *prev = NULL;

    if (temp != NULL && temp->data == value)
    {
        head = deleteAtBeginning(head);
        return head;
    }

    while (temp != NULL && temp->data != value)
    {
        prev = temp;
        temp = temp->next;
        if (temp == head)
        {
            break;
        }
    }

    if (temp == head)
    {
        return head;
    }

    prev->next = temp->next;
    free(temp);
    return head;
}

int searchList(struct Node *head, int value)
{
    struct Node *current = head;
    if (current == NULL)
        return 0;
    do
    {
        if (current->data == value)
        {
            return 1;
        }
        current = current->next;
    } while (current != head);
    return 0;
}

struct Node *updateValue(struct Node *head, int oldValue, int newValue)
{
    struct Node *current = head;
    if (current == NULL)
        return head;
    do
    {
        if (current->data == oldValue)
        {
            current->data = newValue;
            return head;
        }
        current = current->next;
    } while (current != head);
    printf("Value %d not found in the list.\n", oldValue);
    return head;
}

struct Node *sortList(struct Node *head)
{
    if (head == NULL || head->next == head)
        return head;

    struct Node *current = head;
    struct Node *index = NULL;
    int temp;

    do
    {
        index = current->next;
        while (index != head)
        {
            if (current->data > index->data)
            {
                temp = current->data;
                current->data = index->data;
                index->data = temp;
            }
            index = index->next;
        }
        current = current->next;
    } while (current->next != head);
    return head;
}

void printList(struct Node *head)
{
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }
    struct Node *temp = head;
    do
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("(back to head: %d)\n", head->data);
}

int main()
{
    struct Node *head = NULL;
    int choice, data, position, oldValue, newValue;

    while (1)
    {
        printf("Choose an operation:\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Insert at Position\n");
        printf("4. Delete at Beginning\n");
        printf("5. Delete at End\n");
        printf("6. Delete at Position\n");
        printf("7. Delete a Value\n");
        printf("8. Search Value\n");
        printf("9. Update Value\n");
        printf("10. Sort List\n");
        printf("11. Print List\n");
        printf("12. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter data to insert at beginning: ");
            scanf("%d", &data);
            head = insertAtBeginning(head, data);
            break;
        case 2:
            printf("Enter data to insert at end: ");
            scanf("%d", &data);
            head = insertAtEnd(head, data);
            break;
        case 3:
            printf("Enter data to insert: ");
            scanf("%d", &data);
            printf("Enter position to insert at: ");
            scanf("%d", &position);
            head = insertAtPosition(head, data, position);
            break;
        case 4:
            head = deleteAtBeginning(head);
            break;
        case 5:
            head = deleteAtEnd(head);
            break;
        case 6:
            printf("Enter position to delete at: ");
            scanf("%d", &position);
            head = deleteAtPosition(head, position);
            break;
        case 7:
            printf("Enter value to delete: ");
            scanf("%d", &data);
            head = deleteValue(head, data);
            break;
        case 8:
            printf("Enter value to search: ");
            scanf("%d", &data);
            if (searchList(head, data))
            {
                printf("Value %d found in the list.\n", data);
            }
            else
            {
                printf("Value %d not found in the list.\n", data);
            }
            break;
        case 9:
            printf("Enter old value to update: ");
            scanf("%d", &oldValue);
            printf("Enter new value: ");
            scanf("%d", &newValue);
            head = updateValue(head, oldValue, newValue);
            break;
        case 10:
            head = sortList(head);
            printf("List sorted successfully.\n");
            break;
        case 11:
            printList(head);
            break;
        case 12:
            while (head != NULL)
            {
                struct Node *temp = head;
                head = head->next;
                free(temp);
                if (head == temp)
                    break;
            }
            exit(0);
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
