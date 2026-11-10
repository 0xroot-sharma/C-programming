# C Programming — 0xROOT

A complete, practical C-language learning repository, organized around the **Not Your College (NYC) — C Language Full Course for Beginners (0 to Advanced)** video.

> This repository is an independent set of notes, examples, and practice programs. It is not the instructor's official source code or notes. The explanations and programs here are original learning material, arranged to follow the public course outline.

## Reference course

- **Course:** [C Language Full Course for Beginners (0 to Advanced) — Not Your College](https://natokhd.com/video/c-language-full-course-for-beginners-0-to-advanced-one-shot-projects/Kdxem4YkrJY)
- **Instructor:** Muskan Rai
- **Length:** approximately 10 hours 35 minutes
- **Topics listed:** setup, comments and variables, data types, input, operators, header files, conditions, ternary operator, type conversion, switch, loops, flowcharts, pseudocode, debugging, nested loops, functions, recursion, arrays, multidimensional arrays, strings, pointers, structures, unions, constants, enums, dynamic memory allocation, file handling, and a file-handling project.

## Repository map

| Folder | Topics |
|---|---|
| `00-start-here` | How to compile, first program, program structure |
| `01-fundamentals` | Comments, variables, identifiers, data types, constants |
| `02-input-output` | `printf`, `scanf`, format specifiers, escape sequences |
| `03-operators` | Arithmetic, relational, logical, assignment, increment/decrement, `sizeof` |
| `04-decisions` | `if`, `if-else`, ladder, nested if, ternary, `switch` |
| `05-loops` | `for`, `while`, `do-while`, `break`, `continue` |
| `06-nested-loops-patterns` | Nested loops and pattern practice |
| `07-problem-solving` | Algorithm, pseudocode, flowchart guidance, debugging checklist |
| `08-functions` | Function declaration, definition, arguments, return values, scope |
| `09-recursion` | Base case and recursive calls |
| `10-arrays` | 1D arrays, traversal, search, sorting |
| `11-multidimensional-arrays` | 2D arrays and matrix operations |
| `12-strings` | Character arrays and standard string functions |
| `13-pointers` | Addresses, dereferencing, pointer arithmetic, pointers with arrays/functions |
| `14-structures-unions-enums` | `struct`, `union`, `enum` |
| `15-memory-management` | `malloc`, `calloc`, `realloc`, `free` |
| `16-file-handling` | Text files, file modes, reading/writing |
| `17-mini-project` | Menu-driven student-record file project |
| `practice` | Topic-wise problem list |
| `reference` | C quick reference and common mistakes |

## Compile and run

Using GCC:

```bash
gcc path/to/program.c -std=c11 -Wall -Wextra -Wpedantic -o program
./program
```

On Windows PowerShell:

```powershell
gcc .\path\to\program.c -std=c11 -Wall -Wextra -Wpedantic -o program.exe
.\program.exe
```

Each `.c` file has its own `main()` (unless explicitly documented otherwise), so compile one file at a time.

## Learning status

This repository is a **complete course companion**, not a claim that every topic has already been mastered. Mark a topic complete only after:
1. Studying the concept.
2. Running the examples yourself.
3. Solving at least two practice questions without copying.
4. Explaining the logic in your own words.

## Style

Examples use straightforward beginner-friendly C: `stdio.h`, simple variable names, loops, conditionals, small functions, and comments where they clarify a section. A few later chapters use standard library headers when the concept requires them.

## License / attribution

The course reference belongs to Not Your College and its instructor. This repository is an independent educational companion. Do not present it as official NYC material.
