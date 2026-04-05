# _printf

## 📌 Description

`_printf` est une réimplémentation simplifiée de la fonction standard `printf` du langage C.

Cette fonction produit une sortie formatée vers la sortie standard (`stdout`) en interprétant une chaîne de format contenant différents spécificateurs.

Ce projet a pour objectif de comprendre :

* le parsing de chaînes
* les fonctions variadiques (`va_list`, `va_start`, `va_arg`, `va_end`)
* la gestion de la mémoire et de l'affichage bas niveau avec `write`

---

## ⚙️ Prototype

```c
int _printf(const char *format, ...);
```

---

## 📥 Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```

---

## 🚀 Utilisation

Exemple simple :

```c
#include "main.h"
/**
 * main - Entry point for testing _printf
 *
 * Description:
 * This function tests the _printf function by printing a simple
 * string with a %s specifier. It demonstrates how _printf
 * handles string formatting and returns the number of characters printed.
 *
 * Return: Always 0.
 */
int main(void)
{
    _printf("Hello %s!\n", "world");
    return (0);
}
```

---

## 🧩 Fonctionnalités implémentées

| Spécificateur | Description                      |
| ------------- | -------------------------------- |
| `%c`          | Affiche un caractère             |
| `%s`          | Affiche une chaîne de caractères |
| `%%`          | Affiche le caractère `%`         |
| `%d`          | Affiche un entier décimal        |
| `%i`          | Affiche un entier décimal        |
---

## 🛠️ Fonctions principales

* `_printf` : fonction principale qui parcourt la chaîne de format et gère les spécificateurs
* `handle_format` : sélectionne la fonction appropriée selon le spécificateur
* `print_char` : affiche un caractère
* `print_string` : affiche une chaîne de caractères
* `print_int` : affiche un entier (`%d` ou `%i`)

---

## 📂 Structure du projet

```
_printf/
├── main.h            # Header file avec les prototypes et include guards
├── _printf.c          # Fonction principale _printf
├── handle_format.c    # Dispatch selon le spécificateur
├── print_char.c       # Affichage d'un caractère
├── print_string.c     # Affichage d'une chaîne de caractères
├── print_int.c        # Affichage d'un entier (%d et %i)
├── README.md              # Documentation du projet
├── _printf.3              # Man page
└── main.c                 # Fichier de test (facultatif, non rendu)
```

---

## ⚠️ Limitations

* Ne gère pas :

  * les flags
  * la largeur (width)
  * la précision
  * les modificateurs de longueur


---

## 🧪 Tests

## 🧪 Exemple de test (main.c)

Le fichier `main.c` peut être utilisé pour tester le comportement de la fonction `_printf` en la comparant à la fonction standard `printf`.

Il couvre plusieurs cas de test correspondant aux spécificateurs implémentés :

* affichage de caractères (`%c`)
* affichage de chaînes (`%s`)
* affichage d'entiers (`%d` et `%i`)
* affichage du caractère `%` (`%%`)
* comparaison des longueurs retournées par `_printf` et `printf`


Exemple de tests :

```c
_printf("Char: %c\n", 'A');
_printf("String: %s\n", "Hello");
_printf("Percent: %%\n");
_printf("Int: %d\n", 42);
_printf("Int: %i\n", -42);
_printf("%s %c %% %d %i\n", "Test", 'X', 123, -456);
```

Ce programme permet de vérifier que `_printf` produit la même sortie et retourne la même valeur que `printf`.

---

## 👥 Auteurs

* Nom OurdaHolerton
* Nom rawan-holberton

---

## 📜 Licence

Ce projet est réalisé dans le cadre du programme Holberton School.

