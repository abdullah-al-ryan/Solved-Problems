#include <stdio.h>
int stack[100], top=0, s_size = 0, t_stack[100];
void push(int item);
int pop();
void display();
int main() {
    int item, choice,b;
    printf("Enter the stack size: ");
    scanf("%d", &s_size);

    do {
        printf("i. Enter 1 to push\n");
        printf("ii. Enter 2 to pop\n");
        printf("iii. Enter 3 to display\n");
        printf("iv. Enter 4 to reverse\n");
        scanf("%d", &choice);

        if(choice == 1) {
            printf("Enter an Integer to Insert: ");
        scanf("%d", &item);
            push(item);
            display();
        } else if (choice == 2) {
            pop();
            display();
        } else if (choice ==3) {
            display();
        } else if(choice == 4){
            reverse();
        } else {
            printf("Wrong Input\n");
        }
        printf("Enter 1 to continue stacking and press any key to exit\n");
        scanf("%d", &b);
    } while (b == 1);
    return 0;
}

void push(int item) {
    if(top == s_size) {
        printf("Stack overflow\n");
    } else {
        top++;
        stack[top] = item;
    }
}
int pop () {
    int item;
    if(top == 0) {
        printf("Stack is empty\n");
        return 0;
    }
    item = stack[top];
    stack[top] = 0;
    top --;
    return item;
}
void display() {
    int i;
    printf("\nThe full stack is: \n");
    for(i=s_size; i>=1; i--) {
        printf("%d\n", stack[i]);
    }
}
void reverse() {
    int i, j;
    for(i=1; i<=s_size; i++) {
        t_stack[i] = stack[i];
    }
    for(j=1; j<=s_size; j++) {
        stack[j] = t_stack[j];
    }
    printf("Stack reversed\n");
    display();
}
