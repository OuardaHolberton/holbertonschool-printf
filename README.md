markdown# _printf

![flowchart](flowchart.png)

## 📌 Description

`_printf` is a custom reimplementation of the standard C `printf` function.
It produces formatted output to stdout by parsing a format string
and handling specific conversion specifiers.

---

## 🛠️ Requirements

- Ubuntu 20.04 LTS
- gcc compiler
- Betty coding style

---

## 📥 Compilation
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```

---

## 🧩 Supported specifiers

| Specifier | Description |
|-----------|-------------|
| `%c` | Prints a single character |
| `%s` | Prints a string of characters |
| `%%` | Prints a literal `%` sign |

---

## 📂 File structure

| File | Description |
|------|-------------|
| `main.h` | Header file — prototypes and includes |
| `_printf.c` | Main function — parses the format string |
| `print_character.c` | Handles `%c` and `%%` |
| `print_string.c` | Handles `%s` |
| `man_3_printf` | Manual page for `_printf` |

---

## 🚀 Usage example
```c
#include "main.h"

int main(void)
{
    _printf("Hello %s! You are %c student.\n", "Holberton", 'a');
    return (0);
}
```

Output:
Hello Holberton! You are a student.

---

## ⚠️ Limitations

`_printf` does not handle:
- Flag characters
- Field width
- Precision
- Length modifiers

---

## 📖 Man page
```bash
man ./man_3_printf
```

---

## 👥 Authors

- **Ouarda Bouchema**
- **Rawan Safouan**
