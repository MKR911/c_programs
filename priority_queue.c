#include <stdio.h>
#include <stdlib.h>

// Node structure to represent each element in the priority queue
struct Node {
    int data;
    int priority;
    struct Node *next;
};

// Priority Queue structure
struct PriorityQueue {
    struct Node *front;
};

// Function to initialize an empty priority queue
void initializePriorityQueue(struct PriorityQueue *pq) {
    pq->front = NULL;
}

// Function to check if the priority queue is empty
int isEmpty(struct PriorityQueue *pq) {
    return (pq->front == NULL);
}

// Function to enqueue an element into the priority queue
void enqueue(struct PriorityQueue *pq, int data, int priority) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->priority = priority;
    newNode->next = NULL;

    // If the priority queue is empty or the new node has higher priority than the front
    if (isEmpty(pq) || priority < pq->front->priority) {
        newNode->next = pq->front;
        pq->front = newNode;
    } else {
        // Traverse the list to find the correct position for the new node
        struct Node *temp = pq->front;
        while (temp->next != NULL && temp->next->priority <= priority) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

    printf("Enqueued %d with priority %d.\n", data, priority);
}

// Function to dequeue the element with the highest priority
void dequeue(struct PriorityQueue *pq) {
    if (isEmpty(pq)) {
        printf("Priority Queue is empty. Cannot dequeue.\n");
        return;
    }

    struct Node *temp = pq->front;
    pq->front = pq->front->next;
    int data = temp->data;
    free(temp);

    printf("Dequeued element with highest priority.\n");
}

// Function to traverse and display the elements in the priority queue
void traverse(struct PriorityQueue *pq) {
    if (isEmpty(pq)) {
        printf("Priority Queue is empty.\n");
        return;
    }

    printf("Priority Queue elements:\n");
    struct Node *temp = pq->front;
    while (temp != NULL) {
        printf("Data: %d, Priority: %d\n", temp->data, temp->priority);
        temp = temp->next;
    }
}

int main() {
    struct PriorityQueue pq;
    initializePriorityQueue(&pq);

    int choice, data, priority;

    do {
        printf("\nPriority Queue Operations:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Traverse\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to enqueue: ");
                scanf("%d", &data);
                printf("Enter priority for the data: ");
                scanf("%d", &priority);
                enqueue(&pq, data, priority);
                break;
            case 2:
                dequeue(&pq);
                break;
            case 3:
                traverse(&pq);
                break;
            case 4:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }

    } while (choice != 4);

    return 0;
}
