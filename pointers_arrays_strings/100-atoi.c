#include "main.h"

int _atoi(char *s)
int _atoi(const char *str) /* Déclaration de la fonction _atoi qui prend une chaîne en entrée et retourne un entier */
{
    int i = 0; /* Initialisation de l'index i pour parcourir la chaîne */
    int sign = 1; /* Variable pour stocker le signe du nombre (1 par défaut, -1 si négatif) */
    int result = 0; /* Variable pour stocker le résultat final (l'entier converti) */

    /* Ignorer les espaces blancs au début */
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') /* Tant qu'on trouve des espaces, tabulations ou retours à la ligne */
        i++; /* On avance dans la chaîne */

    /* Gérer le signe + ou - */
    if (str[i] == '-' || str[i] == '+') /* Si le caractère actuel est un signe */
    {
        if (str[i] == '-') /* Si c'est un signe moins */
            sign = -1; /* On change le signe du résultat en négatif */
        i++; /* On passe au caractère suivant */
    }

    /* Convertir les chiffres */
    while (str[i] >= '0' && str[i] <= '9') /* Tant que le caractère est un chiffre entre '0' et '9' */
    {
        result = result * 10 + (str[i] - '0'); /* On multiplie le résultat courant par 10 et on ajoute la valeur du chiffre */
        i++; /* On passe au caractère suivant */
    }
}
