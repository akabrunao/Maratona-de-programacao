#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define HASH_SIZE 1000003
#define MAX_NAME_LENGTH 32

struct entry {
    char *key;
    int count;
    struct entry *next;
};

struct entry *hash_table[HASH_SIZE] = {NULL};

unsigned long hash_function(const char *str) {
    unsigned long hash = 5381;
    int c;

    while ((c = *str++)) {
        hash = ((hash << 5) + hash) + c;
    }

    return hash % HASH_SIZE;
}

struct entry *find_entry(const char *key) {
    unsigned long hash = hash_function(key);
    struct entry *e = hash_table[hash];
    while (e != NULL) {
        if (strcmp(e->key, key) == 0) {
            return e;
        }
        e = e->next;
    }
    return NULL;
}

struct entry *add_entry(const char *key) {
    unsigned long hash = hash_function(key);
    struct entry *e = (struct entry *)malloc(sizeof(struct entry));
    e->key = strdup(key);
    e->count = 1;
    e->next = hash_table[hash];
    hash_table[hash] = e;
    return e;
}

int main() {
    int n;
    scanf("%d", &n);

    char name[MAX_NAME_LENGTH + 1];
    for (int i = 0; i < n; ++i) {
        scanf("%32s", name);
        struct entry *e = find_entry(name);
        if (e == NULL) {
            printf("OK\n");
            add_entry(name);
        } else {
            printf("%s%d\n", name, e->count);
            e->count++;
        }
    }

    return 0;
}
