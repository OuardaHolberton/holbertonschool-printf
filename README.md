# _printf

## 🔄 Flowchart

The following flowchart explains the logic of `_printf` :

![flowchart](flowchart.png)

The function reads the format string character by character.
When it encounters `%` it reads the next character to identify
the specifier and calls the corresponding handler function.
Otherwise it writes the character directly to stdout.

---

## 📌 Description

`_printf` is a custom reimplementation of the standard C `printf` function,
developed as part of the Holberton School curriculum.

It produces formatted output to stdout by parsing a format string
and handling specific conversion specifiers using variadic functions.

This project aims to understand:
* String parsing character by character
* Variadic functions (`va_list`, `va_start`, `va_arg`, `va_end`)
* Low-level output with `write` instead of `printf`

---

## ⚙️ Prototype
```c
int _printf(const char *format, ...);
```

---

## 🛠️ Requirements

* Ubuntu 20.04 LTS
* gcc compiler
* Betty coding style compliant

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
| `%d` | Prints a decimal integer |
| `%i` | Prints an integer |

---

## 📂 File structure

| File | Description |
|------|-------------|
| `main.h` | Header file — prototypes and includes |
| `_printf.c` | Main function — parses the format string |
| `print_character.c` | Handles `%c` and `%%` |
| `print_string.c` | Handles `%s` |
| `print_int.c` | Handles `%d` and `%i` |
| `man_3_printf` | Manual page for `_printf` |
| `README.md` | Project documentation |

---

## 🚀 Usage example
```c
#include "main.h"

int main(void)
{
    _printf("Hello %s!\n", "Holberton");
    _printf("Character: %c\n", 'A');
    _printf("Integer: %d\n", 42);
    _printf("Percent sign: %%\n");
    return (0);
}
```

Output:
```
Hello Holberton!
Character: A
Integer: 42
Percent sign: %
```

---

## 🔄 How it works

1. `_printf` reads the format string character by character
2. If the character is not `%` → writes it directly with `write`
3. If the character is `%` → reads the next character (the specifier)
4. Calls the corresponding handler function
5. Returns the total number of characters printed

---

## ⚠️ Limitations

`_printf` does not handle:
* Flag characters (`-`, `+`, `0`, ` `)
* Field width
* Precision
* Length modifiers (`l`, `h`)

---

## 📖 Man page
```bash
man ./man_3_printf
```

---

## 🧪 Testing
```c
_printf("Char: %c\n", 'A');
_printf("String: %s\n", "Hello");
_printf("Percent: %%\n");
_printf("Int: %d\n", 42);
_printf("Int: %i\n", -42);
```

---

## 👥 Authors

* Ouarda Bouchema
* Rawan Safouan
