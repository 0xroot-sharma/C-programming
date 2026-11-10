# C quick reference

## Basic program

```c
#include <stdio.h>

int main(void) {
    printf("Hello\n");
    return 0;
}
```

## Common format specifiers

| Type | `printf` | `scanf` |
|---|---|---|
| `int` | `%d` | `%d` |
| `char` | `%c` | `%c` |
| `float` | `%f` | `%f` |
| `double` | `%f` or `%lf` | `%lf` |
| string (`char[]`) | `%s` | `%s` |
| `size_t` | `%zu` | — |

## Escape sequences

- `\n` newline
- `\t` horizontal tab
- `\\` backslash
- `\"` double quote
- `\'` single quote
- `\0` null character

## Common headers

- `<stdio.h>` input/output
- `<stdlib.h>` memory allocation, conversions, program utilities
- `<string.h>` string functions
- `<math.h>` mathematical functions
- `<ctype.h>` character testing/conversion

## Mistakes I made at start

- Using `=` when you mean `==`.
- Forgetting `&` in `scanf` for ordinary scalar variables.
- Using the wrong format specifier.
- Accessing an array outside its bounds.
- Using an uninitialized variable or pointer.
- Forgetting to free dynamically allocated memory.
- Forgetting to close an opened file.
- Using `gets()` to read a string.
- Assuming `int`, `float`, and `double` sizes are identical on every system.
