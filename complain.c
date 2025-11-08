#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a node structure for each complaint
typedef struct Node {
    char text[200];         // Complaint text
    struct Node *next;      // Pointer to next node
} Node;

// Function to add a complaint to the linked list
Node* add(Node *head, char *text) {
    Node *newNode = malloc(sizeof(Node));
    strcpy(newNode->text, text);
    newNode->next = head;   // Insert at beginning (can be modified)
    return newNode;
}

// Function to display all complaints
void show(Node *head) {
    Node *temp = head;
    int count = 1;
    while (temp != NULL) {
        printf("%d. %s\n", count++, temp->text);
        temp = temp->next;
    }
}

// Function to mark all complaints as resolved
void markResolved(Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        strcat(temp->text, " resolved");  // Append the word "resolved"
        temp = temp->next;
    }
}

int main() {
    Node *head = NULL;
    char text[200];
    int n;

    printf("Enter number of complaints: ");
    scanf("%d", &n);
    getchar(); // clear newline after scanf

    // Take complaint inputs
    for (int i = 0; i < n; i++) {
        printf("Enter complaint %d: ", i + 1);
        fgets(text, 200, stdin);
        text[strcspn(text, "\n")] = 0; // remove trailing newline
        head = add(head, text);
    }

    printf("\nComplaints Received:\n");
    printf("---------------------\n");
    show(head);

    markResolved(head);

    printf("\nComplaints After Resolution:\n");
    printf("-----------------------------\n");
    show(head);

    // Free allocated memory
    Node *temp;
    while (head) {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
