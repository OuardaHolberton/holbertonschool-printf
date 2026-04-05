#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * _printf - imprime du texte selon un format spécifié
 *
 * @format: chaîne de format contenant du texte et des spécificateurs
 *
 * Description: Cette fonction gère les spécificateurs suivants :
 *  - %c : caractère
 *  - %s : chaîne de caractères
 *  - %d : entier signé
 *  - %i : entier signé
 *  - %% : caractère '%'
 *
 * Return: le nombre total de caractères affichés, -1 si format est NULL
 */

int _printf(const char *format, ...)
{
	int i = 0;      /* Index pour parcourir la chaîne format */
	int count = 0;  /* Compteur total de caractères affichés */
	va_list args;   /* Liste des arguments variables */

	/* Vérification de sécurité : format ne doit pas être NULL */
	if (format == NULL)
		return (-1);

	/* Initialisation de la liste d'arguments */
	va_start(args, format);

	/* Parcours de chaque caractère de la chaîne format */
	while (format[i])
	{
		/* Si on rencontre un '%' => c'est un spécificateur */
		if (format[i] == '%')
		{
			i++;  /* Passer au caractère suivant pour identifier le type */
			/* Gestion des différents spécificateurs */
			if (format[i] == 'c') /* Caractère */
				count += print_char(va_arg(args, int));
			else if (format[i] == 's') /* Chaîne */
				count += print_string(va_arg(args, char *));
			else if (format[i] == 'd' || format[i] == 'i') /* Entier signé */
				count += print_int(va_arg(args, int));
			else if (format[i] == '%') /* Caractère '%' littéral */
				count += write(1, "%", 1);
		}
		else
		{
			/* Sinon, caractère normal : affichage direct */
			count += write(1, &format[i], 1);
		}
		i++; /* Passer au caractère suivant */
	}
	/* Fin de la lecture des arguments variables */
	va_end(args);

	/* Retourner le nombre total de caractères affichés */
	return (count);
}
