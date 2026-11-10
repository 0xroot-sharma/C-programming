# 15 — Dynamic memory management

Dynamic memory is requested at runtime from the heap:
- `malloc(size)` allocates uninitialized bytes.
- `calloc(count, size)` allocates and zero-initializes storage.
- `realloc(ptr, size)` resizes an allocation.
- `free(ptr)` releases an allocation.

Always check allocation results. Keep the original pointer safe when using `realloc`, and free memory when it is no longer needed.
