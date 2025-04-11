/* On appelle carré un tableau de n lignes et de n colonnes des entiers naturels .
Le carré est magique si en effectuant la somme de tous les nombrees d'une ligne ou d'une colonne,
le  resultat est le meme quelque soit la ligne ou la colonne .
Ce programme permet de remplir et de determiner si un carre est magique ou non  

Algorithme carré  magique ou non

Constante 
    N = 100 ;
Variable 
    n, i, j : entiers ;
    T : tableau entier [N] ;
    S , somme : entiers ;

    Ecrire ("Entrez la taille du carré : ");
    Lire  ( n );

    Ecrire ("Entrez les éléments du carré :\n");
    Pour (i <- 0; i < n; i++) 
        Pour(j <- 0; j < n; j++) 
            Ecrire ("T[", i ,"][" , j ,"]=" );
            Lire ( T[i][j]);
        FinPour
        Ecrire("\n") ;
    FinPour

    // Calcul la somme de la première ligne pour  reference 
    i <- 0 ;
    S <- 0 ;
    POur (j <- 0; j < n; j++) 
        S <- S + T[i][j];
    FinPour

    somme <- 0;
    Pour (i <- 1; i < n; i++)
        Pour (j <- 0; j < n; j++) 
            somme <- somme + T[i][j];
        FinPour
        Si (somme != S ) alors
            Ecrire ( "Le carré n'est pas magique.\n");
            Fin ;
        FinSi
    FinPour

    somme <- 0 ;
    Pour (j <- 0; j < n; j++) 
        Pour (i <- 0; i < n; i++)
            somme <- somme + T[i][j];
        FinPour
        Si ( somme != S ) alors
            Ecrire ("Le carré n'est pas magique.\n");
            Fin ;
        FinSi
    FinPour

    Ecrire ("Le carré est magique !\n");

Fin


*/

#include <stdio.h>
#include <stdlib.h> 
#define N 100

int main() 
{
    int n, i, j;
    int T[N][N];
    int S , somme;

    printf("Entrez la taille du carré : ");
    scanf( "%d", &n );


    printf("Entrez les éléments du carré :\n");
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            printf ("T[%d][%d]=" , i ,j);
            scanf ("%d" , &T[i][j]);
        }
        printf ("\n") ;
    }

    // Calcul la somme de la première ligne pour  reference 
    i = 0 ;
    S = 0 ;
    for (j = 0; j < n; j++) 
    {
        S = S + T[i][j];
    }

    somme = 0;
    for (i = 1; i < n; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            somme = somme + T[i][j];
        }
        if (somme != S ) 
        {
            printf("Le carré n'est pas magique.\n");
            exit (0) ;
        }
    }

    somme = 0 ;
    for (j = 0; j < n; j++) 
    {
        for (i = 0; i < n; i++) {
            somme = somme + T[i][j];
        }
        if ( somme != S ) {
            printf("Le carré n'est pas magique.\n");
            exit(0) ;
        }
    }

    printf("Le carré est magique !\n");

    return (0);
}
