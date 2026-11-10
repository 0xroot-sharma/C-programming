# 17 — Mini project: Student Record Manager

A small menu-driven project that appends student records to a text file and displays saved records.

## Concepts used
- `struct`
- Functions
- `switch`
- Loops
- File handling (`fopen`, `fprintf`, `fscanf`, `fclose`)

Compile from this folder:

```bash
gcc student_record_manager.c -std=c11 -Wall -Wextra -Wpedantic -o records
```

The program stores `roll`, a one-word `name`, and `marks` in `students.txt` in the current working directory. It is a beginner practice project, not a production database.
