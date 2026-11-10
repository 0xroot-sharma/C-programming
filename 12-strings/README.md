# 12 — Strings

C has no built-in `string` type. A C string is a character array terminated by the null character `\0`. Use `<string.h>` for common string operations. Avoid `gets()`; it is unsafe and removed from the C standard. `fgets()` is a safer way to read a line into a fixed-size array.
