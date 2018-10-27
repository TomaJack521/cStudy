#include<stdio.h>
#include<stdlib.h>

struct listNode{
    int order;
    struct listNode *nextPtr;
};

typedef struct listNode ListNode;
typedef ListNode *ListNodePtr;

void insert(ListNodePtr *sPtr, int data);
int delete(ListNodePtr *sPtr, int data);
int isEmpty(ListNodePtr sPtr);
void printList(ListNodePtr sPtr);
void introduce(void);

int main(void){
    ListNodePtr starPtr = NULL;
    unsigned int choice;
    int value;

    introduce();
    printf("%s", "? ");
    scanf("%u", &choice);

    while(choice != 3){
        switch(choice){
            case 1:

                puts("input an integer to add");
                scanf("%d", &value);
                insert(&starPtr, value);
                printList(starPtr);
                break;

            case 2:

                if(!isEmpty(starPtr)){
                    puts("empty list");
                }else{
                    puts("input an integer to delete");
                    scanf("%d", &value);
                    if(delete(&starPtr, value)){
                        printList(starPtr);
                    }else{
                        puts("value not fund");
                    }
                }
                break;

            default:

                puts("invalid choice\n");
                introduce();
                break;
        }
        puts("? ");
        scanf("%d", &choice);
    }

    puts("End of run");
}

void insert(ListNodePtr *sPtr, int data){
    ListNodePtr newPtr;
    ListNodePtr passPtr;
    ListNodePtr currentPtr;

    newPtr = malloc (sizeof(ListNode));

    if(newPtr == NULL){
        puts("malloc fail");
    }else{
        newPtr->order = data;
        newPtr->nextPtr = NULL;

        passPtr = NULL;
        currentPtr = *sPtr;

        while(currentPtr != NULL && data > currentPtr->order){
            passPtr = currentPtr;
            currentPtr = currentPtr->nextPtr;
        }

        if(passPtr == NULL){
            newPtr->nextPtr = *sPtr;
            *sPtr = newPtr;
        }else{
            passPtr->nextPtr = newPtr;
            newPtr->nextPtr = currentPtr;
        }
    }
}