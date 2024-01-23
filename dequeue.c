/*
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5

struct Deque {
    int arr[MAX_SIZE];
    int front, rear;
};

void initializeDeque(struct Deque *dq) {
    dq->front = -1;
    dq->rear = -1;
}

int isFull(struct Deque *dq) {
    return ((dq->front == 0 && dq->rear == MAX_SIZE - 1) || (dq->front == dq->rear + 1));
}

int isEmpty(struct Deque *dq) {
    return (dq->front == -1);
}

void enqueueFront(struct Deque *dq, int value) {
    if (isFull(dq)) {
        printf("Deque is full. Cannot enqueue.\n");
        return;
    }

    if (dq->front == -1) {
        dq->front = dq->rear = 0;
    } else if (dq->front == 0) {
        dq->front = MAX_SIZE - 1;
    } else {
        dq->front--;
    }

    dq->arr[dq->front] = value;
    printf("Enqueued %d at the front.\n", value);
}

void enqueueRear(struct Deque *dq, int value) {
    if (isFull(dq)) {
        printf("Deque is full. Cannot enqueue.\n");
        return;
    }

    if (dq->front == -1) {
        dq->front = dq->rear = 0;
    } else if (dq->rear == MAX_SIZE - 1) {
        dq->rear = 0;
    } else {
        dq->rear++;
    }

    dq->arr[dq->rear] = value;
    printf("Enqueued %d at the rear.\n", value);
}

void dequeueFront(struct Deque *dq) {
    if (isEmpty(dq)) {
        printf("Deque is empty. Cannot dequeue.\n");
        return;
    }

    printf("Dequeued %d from the front.\n", dq->arr[dq->front]);

    if (dq->front == dq->rear) {
        dq->front = dq->rear = -1;
    } else if (dq->front == MAX_SIZE - 1) {
        dq->front = 0;
    } else {
        dq->front++;
    }
}

void dequeueRear(struct Deque *dq) {
    if (isEmpty(dq)) {
        printf("Deque is empty. Cannot dequeue.\n");
        return;
    }

    printf("Dequeued %d from the rear.\n", dq->arr[dq->rear]);

    if (dq->front == dq->rear) {
        dq->front = dq->rear = -1;
    } else if (dq->rear == 0) {
        dq->rear = MAX_SIZE - 1;
    } else {
        dq->rear--;
    }
}

void peekFront(struct Deque *dq) {
    if (isEmpty(dq)) {
        printf("Deque is empty.\n");
        return;
    }

    printf("Front element: %d\n", dq->arr[dq->front]);
}

void peekRear(struct Deque *dq) {
    if (isEmpty(dq)) {
        printf("Deque is empty.\n");
        return;
    }

    printf("Rear element: %d\n", dq->arr[dq->rear]);
}

int main() {
    struct Deque dq;
    initializeDeque(&dq);

    int choice, value;

    do {
        printf("\nDeque Operations:\n");
        printf("1. Enqueue Front\n");
        printf("2. Enqueue Rear\n");
        printf("3. Dequeue Front\n");
        printf("4. Dequeue Rear\n");
        printf("5. Peek Front\n");
        printf("6. Peek Rear\n");
        printf("7. Is Empty\n");
        printf("8. Is Full\n");
        printf("9. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to enqueue at the front: ");
                scanf("%d", &value);
                enqueueFront(&dq, value);
                break;
            case 2:
                printf("Enter the value to enqueue at the rear: ");
                scanf("%d", &value);
                enqueueRear(&dq, value);
                break;
            case 3:
                dequeueFront(&dq);
                break;
            case 4:
                dequeueRear(&dq);
                break;
            case 5:
                peekFront(&dq);
                break;
            case 6:
                peekRear(&dq);
                break;
            case 7:
                if (isEmpty(&dq)) {
                    printf("Deque is empty.\n");
                } else {
                    printf("Deque is not empty.\n");
                }
                break;
            case 8:
                if (isFull(&dq)) {
                    printf("Deque is full.\n");
                } else {
                    printf("Deque is not full.\n");
                }
                break;
            case 9:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }

    } while (choice != 9);

    return 0;
}
*/







#include<stdio.h>


int main(){
int n;
printf("Enter the size of queue: ");
scanf("%d" , &n);

int q[n];
int front  = -1;
int rear = -1;
int data;
int t;
int temp;
while(1){
    printf("enter the choice : ");
    scanf("%d" , &t);
switch(t){
    case 1: //insert at front
    printf("enter the data to enqueue:");
    scanf("%d", &data);
    if(front==-1 && rear==-1){
        front++;
        rear++;
    }
    else{
        if(front == 0){
            printf("queue overflow");
            break;
        }
        else{
            front--;
        }
    }
    q[front] = data;
    break;
    case 2: //insert at rear
    printf("enter the data to enqueue:");
    scanf("%d", &data);
    if(front==-1 && rear==-1){
        front++;
        rear++;
    }
    else{
        if(rear == n-1){
            printf("queue overflow");
            break;
        }
        else{
            rear++;
        }
    }
    q[rear] = data;
    break;

    case 3: //delete from front
    if(front == -1 || front>rear){
        printf("queue underflow");
    }
    else{
        front++;
    }
    break;

    case 4: // delete at rear;
    if(rear==-1 || rear<front){
        printf("queue underflow");
    }
    else{
        rear--;
    }
    break;

    case 5: //display;
    temp = front;
    while(temp<=rear && front!=-1){
        printf("%d " , q[temp]);
        temp++;
    }
    break;

    case 6://exit
    exit(0);
    break;
}
}
    return 0;
}