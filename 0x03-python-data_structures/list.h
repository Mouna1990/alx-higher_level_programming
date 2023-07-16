#ifndef LIST_H
#define LIST_H

typedef struct {
    void** data;
    size_t size;
    size_t allocated;
} List;

List* list_create();
void list_destroy(List* list);
void list_add(List* list, void* item);
void list_remove(List* list, size_t index);
size_t list_size(const List* list);
void* list_get(const List* list, size_t index);

#endif /* LIST_H */
