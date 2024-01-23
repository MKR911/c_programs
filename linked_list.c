#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}*head;

void insert();
void delete();
void count();
void traverse();
void search();
void sort();
void reverse();

int main()
{
    struct Node *p;
    int n, choice;

    printf("Enter no. of nodes: ");
    scanf("%d",&n);

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            head = (struct Node *)malloc(sizeof(struct Node));
            p = head;
        }
        else
        {
            p->next = (struct Node *)malloc(sizeof(struct Node));
            p = p->next;
        }
        scanf("%d",&p->data);
    }
    p->next = NULL;

    printf("MENU:\n1. Insert the node at a position\n2. Delete a node from specific position\n3. Count\n4. Traverse\n5. Search\n6. Sort\n7. Reverse\n8. Exit");
    printf("\nEnter choice: ");
    scanf("%d", &choice);

    while (1)
    {
        switch (choice)
        {
            case 1:
                insert();
                break;

            case 2:
                delete();
                break;

            case 3:
                count();
                break;

            case 4:
                traverse();
                break;

            case 5:
                search();
                break;

            case 6:
                sort();
                break;

            case 7:
                reverse();
                break;

            case 8:
                return 0;

            default:
                printf("Invalid Input!!!");
                break;
        }

        printf("\nEnter choice: ");
        scanf("%d", &choice);
    }
    return 0;
}

void insert(){
    struct Node *newNode, *p = head;
    int pos, ele;

    printf("Enter element: ");
    scanf("%d",&ele);

    printf("Enter position: ");
    scanf("%d",&pos);

    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = ele;

    if(pos == 0){
        newNode->next = head;
        head = newNode;
        return;
    }

    for (int i = 2; i < pos; i++)
    {
        p = p->next;
    }

    if (p == NULL)
    {
        newNode->next = NULL;
        p->next = newNode;
    }
    else
    {
        newNode->next = p->next;
        p->next = newNode;
    }
    

    printf("Node inserted");
    return;
}

void delete(){
    struct Node *temp, *p = head;
    int pos;

    printf("Enter position: ");
    scanf("%d", &pos);

    if(pos == 0){
        temp = p;
        head = p->next;

        free(temp);
        return;
    }

    for (int i = 2; i < pos; i++)
    {
        p = p->next;
    }
    if (p->next->next == NULL)
    {
        temp = p->next;
    }
    else
    {
        temp = p->next;
        p->next = temp->next;
    }
    
    free(temp);
    return;
}

void count(){
    struct Node *p;
    int count = 0;

    if (head == NULL)
    {
        printf("\nEmpty list....");
        return;
    }

    p = head;
    while (p != NULL)
    {
        count++;
        p = p->next;
    }
    printf("%d", count);
    return;
}

void traverse(){
    struct Node *p;

    if (head == NULL)
    {
        printf("\nEmpty list....");
        return;
    }

    p = head;
    while (p != NULL)
    {
        printf("%d  ",p->data);
        p = p->next;
    }
    printf("\n");
    return;  
}

void search(){
    struct Node *p = head;
    int ele, count = 0;

    printf("Enter element: ");
    scanf("%d", &ele);

    while (p->data != ele)
    {
        count++;
        p = p->next;
    }

    printf("Element found at %d position", count);
}

void sort(){
    struct Node *curr = head;
    struct Node *temp;
    int tempData;

    while (curr != NULL)
    {
        temp = curr->next;

        while (temp != NULL)
        {
            if (curr->data > temp->data)
            {
                tempData = curr->data;
                curr->data = temp->data;
                temp->data = tempData;
            }
            temp = temp->next;
        }
        curr = curr->next;
    }
    printf("List Sorted\n"); 
}

void reverse(){
    struct Node *temp, *prev = NULL, *curr = head;

    while (curr != NULL)
    {
        temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    head = prev;
}




// #include <stdio.h>
// #include <stdlib.h>

// // Define the structure for a node in the linked list
// struct Node
// {
//     int data;
//     struct Node *next;
// };

// // Function to insert a node at a specific position in the list
// void insertNode(struct Node **head, int data, int position)
// {
//     struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
//     newNode->data = data;

//     if (position == 1)
//     {
//         newNode->next = *head;
//         *head = newNode;
//         return;
//     }

//     struct Node *current = *head;
//     int count = 1;

//     while (current != NULL && count < position - 1)
//     {
//         current = current->next;
//         count++;
//     }

//     if (current == NULL)
//     {
//         printf("Invalid position\n");
//         return;
//     }

//     newNode->next = current->next;
//     current->next = newNode;
// }

// // function to delete
// void deleteAtAnyPosition(struct Node *head,int key)
// {
//     struct Node *temp = head, *prev;
//     if (temp == NULL)
//     {
//         printf("\nEmpty List...");
//         return;
//     }
//     if (temp != NULL && temp->data == key)
//     {
//         printf("\nValue of the deleted node = %d", temp->data);
//         head = temp->next;
//         free(temp);
//         return;
//     }

//     while (temp && temp->data != key)
//     {
//         prev = temp;
//         temp = temp->next;
//     }
//     if (temp == NULL)
//     {
//         printf("\nSearched value does not exist in the list...");

//         return;
//     }
//     printf("\nValue of the deleted node = %d", temp->data);
//     prev->next = temp->next;
//     free(temp);
// }

// // Function to traverse and print the linked list
// void traverse(struct Node *head)
// {
//     struct Node *current = head;

//     while (current != NULL)
//     {
//         printf("%d -> ", current->data);
//         current = current->next;
//     }

//     printf("NULL\n");
// }

// // Function to search for an element in the linked list
// void search(struct Node *head, int element)
// {
//     struct Node *current = head;
//     int position = 1;

//     while (current != NULL)
//     {
//         if (current->data == element)
//         {
//             printf("Element found at node-%d\n", position);
//             return;
//         }
//         current = current->next;
//         position++;
//     }

//     printf("Element not found\n");
// }

// // Function to sort the linked list in ascending order
// void sort(struct Node **head)
// {
//     struct Node *current = *head;
//     struct Node *temp;
//     int tempData;

//     while (current != NULL)
//     {
//         temp = current->next;

//         while (temp != NULL)
//         {
//             if (current->data > temp->data)
//             {
//                 tempData = current->data;
//                 current->data = temp->data;
//                 temp->data = tempData;
//             }
//             temp = temp->next;
//         }
//         current = current->next;
//     }
// }

// // Function to reverse the linked list
// void reverse(struct Node **head)
// {
//     struct Node *prev = NULL;
//     struct Node *current = *head;
//     struct Node *nextNode;

//     while (current != NULL)
//     {
//         nextNode = current->next;
//         current->next = prev;
//         prev = current;
//         current = nextNode;
//     }

//     *head = prev;
// }

// int main()
// {
//     struct Node *head = NULL;
//     int n, element, position, key;

//     printf("Enter number of nodes: ");
//     scanf("%d", &n);

//     printf("Enter the elements: ");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &element);
//         insertNode(&head, element, i + 1);
//     }

//     int choice;
//     while (1)
//     {
//         printf("MENU:\n");
//         printf("1. Insert the node at a position\n");
//         printf("2. Delete a node from specific position\n");
//         printf("3. Count\n");
//         printf("4. Traverse\n");
//         printf("5. Search\n");
//         printf("6. Sort\n");
//         printf("7. Reverse\n");
//         printf("8. Exit\n");

//         printf("Enter choice: ");
//         scanf("%d", &choice);

//         switch (choice)
//         {
//         case 1:
//             printf("Enter element: ");
//             scanf("%d", &element);
//             printf("Enter position: ");
//             scanf("%d", &position);
//             insertNode(&head, element, position);
//             printf("Node inserted\n");
//             break;
//         case 2:
//             printf("Enter element: ");
//             scanf("%d", &key);
//             deleteAtAnyPosition(head, key);
//         case 3:

//         case 4:
//             traverse(head);
//             break;
//         case 5:
//             printf("Enter element to be searched: ");
//             scanf("%d", &element);
//             search(head, element);
//             break;
//         case 6:
//             sort(&head);
//             break;
//         case 7:
//             reverse(&head);
//             printf("Reverse list: ");
//             traverse(head);
//             break;
//         case 8:
//             return 0;
//         default:
//             printf("Invalid choice\n");
//         }
//     }

//     return 0;
// }