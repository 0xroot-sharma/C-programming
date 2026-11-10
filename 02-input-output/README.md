# 02 — Input and output

`printf()` displays formatted output. `scanf()` reads formatted input. For most ordinary variables, pass the variable's address to `scanf()` using `&`. Character arrays used as strings are an exception: the array name already converts to a pointer to its first element.

Common conversions: `%d` for `int`, `%f` for `float` in `scanf`, `%f` for `float` and `%lf` for `double` in `printf`, `%c` for `char`, `%s` for a string, `%zu` for `size_t`.
