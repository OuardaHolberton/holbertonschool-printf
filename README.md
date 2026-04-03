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

---

## 🛠️ Fonctions principales

* `_printf` : fonction principale
* `print_char` : affiche un caractère
* `print_string` : affiche une chaîne

---

## 📂 Structure du projet

```
.
├── main.h
├── _printf.c
├── print_char.c
├── print_string.c
```

---

## ⚠️ Limitations

* Ne gère pas :

  * les flags
  * la largeur (width)
  * la précision
  * les modificateurs de longueur
* Ne gère que `%c`, `%s` et `%%`

---

## 🧪 Tests

## 🧪 Exemple de test (main.c)

Le fichier `main.c` (non inclus dans le repository final, mais peut être present afin que l'equipe puisse verifier le code) est utilisé pour tester le comportement de la fonction `_printf` en le comparant à la fonction standard `printf`.

Il couvre plusieurs cas de test, notamment :

* affichage de chaînes simples
* comparaison des longueurs retournées
* gestion des entiers (`%d`, `%i`)
* gestion des entiers non signés (`%u`)
* affichage en octal (`%o`)
* affichage en hexadécimal (`%x`, `%X`)
* affichage de caractères (`%c`)
* affichage de chaînes (`%s`)

Exemple :

```c
int main(void)
{
    int len;
    int len2;

    len = _printf("Hello %s\n", "world");
    len2 = printf("Hello %s\n", "world");

    _printf("Length: %d\n", len);
    printf("Length: %d\n", len2);

    return (0);
}
```

Ce programme permet de vérifier que `_printf` produit la même sortie et retourne la même valeur que `printf`.

---

## 👥 Auteurs

* Nom OurdaHolerton
* Nom rawan-holberton

---

## 📜 Licence

Ce projet est réalisé dans le cadre du programme Holberton School.

