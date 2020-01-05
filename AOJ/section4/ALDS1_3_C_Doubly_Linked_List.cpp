#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string.h>     // for strcmp()

struct Node {
    int key;
    Node *prev, *next;
};

class Doubly_Linked_List{
    public:
        Node *nil;
        Doubly_Linked_List();
        void insert(int key);
        Node* listSearch(int key);
        void deleteNode(Node *t);
        void deleteFirst();
        void deleteLast();
        void deleteKey(int Key);
        void print_list();
};

Doubly_Linked_List::Doubly_Linked_List(){
    nil = (Node *)malloc(sizeof(Node));
    nil->next = nil;
    nil->prev = nil;
}

void Doubly_Linked_List::insert(int key){
    Node *x = (Node *)malloc(sizeof(Node));
    x->key = key;
    x->next = nil->next;
    nil->next->prev = x;
    nil->next = x;
    x->prev = nil;
}

Node* Doubly_Linked_List::listSearch(int key){
    Node* cur = nil->next;
    while (cur != nil && cur->key != key){
        cur = cur->next;
    }
    return cur;
}

void Doubly_Linked_List::deleteNode(Node *t){
    if (t == nil) return;
    t->next->prev = t->prev;
    t->prev->next = t->next;
    free(t);
}

void Doubly_Linked_List::deleteFirst(){
    deleteNode(nil->next);
}

void Doubly_Linked_List::deleteLast(){
    deleteNode(nil->prev);
}

void Doubly_Linked_List::deleteKey(int key){
    deleteNode(listSearch(key));
}

void Doubly_Linked_List::print_list(){
    Node *cur = nil->next;
    int count = 0;
    while (true){
        if (cur == nil) break;
        if (count++ > 0) printf(" ");
        printf("%d", cur->key);
        cur = cur->next;
    }
    printf("\n");
}

int main() {
    int N, key;
    char command[100];
    char *command_1 = "insert";
    char *command_2 = "delete";
    char *command_3 = "deleteFirst";
    char *command_4 = "deleteLast";

    scanf("%d", &N);

    Doubly_Linked_List doubly_linked_list;
    for (int i = 0; i < N; i++){
        // scanf("%s%d", command, &key);
        // printf("command = %s, key = %d\n", command, key);
        std::cin >> command;
        if (strcmp(command, command_1) == 0){
            std::cin >> key;
            doubly_linked_list.insert(key);
        } else if (strcmp(command, command_2) == 0){
            std::cin >> key;
            doubly_linked_list.deleteKey(key);
        } else if (strcmp(command, command_3) == 0){
            doubly_linked_list.deleteFirst();
        } else if (strcmp(command, command_4) == 0){
            doubly_linked_list.deleteLast();
        } else {
            // printf("command = %s, key = %d\n", command, key);
            break;
        }
    }
    doubly_linked_list.print_list();

    return 0;
}
