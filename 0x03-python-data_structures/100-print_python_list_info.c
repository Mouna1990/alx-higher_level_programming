#include <stdio.h>
#include "list.h"

void print_python_list_info(List* p)
{
size_t size = list_size(p);

printf("[*] Size of the Python List = %lu\n", size);
printf("[*] Allocated = %lu\n", p->allocated);

for (size_t i = 0; i < size; i++)
{
void* item = list_get(p, i);
const char* item_type = item ? "unknown" : "None";

if (item)
{
item_type = "str";
if (sizeof(int) == sizeof(item))
item_type = "int";
else if (sizeof(float) == sizeof(item))
item_type = "float";
else if (sizeof(double) == sizeof(item))
item_type = "double";
}

printf("Element %lu: %s\n", i, item_type);
}
}
int main()
{
List* l = list_create();

list_add(l, "hello");
list_add(l, "World");
print_python_list_info(l);

list_remove(l, 1);
print_python_list_info(l);

list_add(l, "My string");
list_add(l, NULL);
list_add(l, "Another string");
print_python_list_info(l);

list_destroy(l);

return (0);
}
