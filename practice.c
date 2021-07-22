#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    Node* next
};

typedef struct Node Node;

int getNumOfNodes();
Node* createNodes(int num);
void traverseLinkedList(Node* head);

int main() {
    int numOfNodes = getNumOfNodes();
    Node* head = createNodes(num);
    traverseLinkedList(head);

    return EXIT_SUCCESS;
}

int getNumOfNodes() {
    int num;
    printf("Input the number of nodes: ");
    scanf("%i", &num);
    return num;
}

Node* createNodes(int num) {
    Node* head = (Node*)malloc(sizeof(Node));
    Node* currentNode = head;

    for (int i = 0; i < num; i++) {
	printf("Input data for node #%i: ", i);
	scanf("%i", &currentNode->data);

	if (i = num - 1) {
		currentNode->next = (Node*)NULL;
	} else {
		currentNode->next = (Node*)malloc(sizeof(Node));
		*currentNode = currentNode->next;
	}
    }

    return head;
}

void traverseLinkedList(Node* head) {
    Node* currentNode = head;

    printf("\n\nData entered in the list: \n");
    while (currentNode->next != NULL) {
        printf("Data = %i\n", currentNode->data);
	currentNode++;
    }
}
