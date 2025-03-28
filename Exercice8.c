//On appelle bigramme une suite de deux letttres . Ce programme calcule le nombre d'occurence d' un bigramme donne dans une chaine de caracteres

/*
Algorithme nombre d'occcurences d' un bigramme 

Variable 
    i  , n , k : entiers
    tab : tableau chaine de caractere[100] ;

    ecrire ("Entrez une chaine de caractere :\n") ;
    Lire ( tab ) ;

    n <- strlen( tab ) ;

    k <- 0 ;
    Pour ( i = 0 ; i < n -1 ; i ++) 
        Si ((( tab[i] >= 'a') ET (tab[i] <= 'z')) OU ((tab[i] >= 'A') ET (tab[i] <= 'Z')))
            Si ((( tab[i+1] >= 'a') ET (tab[i+1] <= 'z')) OU ((tab[i+1] >= 'A') ET (tab[i+1] <= 'Z')))
                k++ ;
            FinSi
        FinSi
    Finour

    Ecrire ("Le nombre de bigramme dans cette chaine est : \n" , k) ;

Fin
*/


#include <stdio.h>
#include <string.h>

int main ()

{
    int i  , n , k;
    char tab [100] ;

    printf ("Entrez une chaine de caractere :\n") ;
    fgets ( tab , 100 , stdin) ;

    n = strlen( tab ) ;

    k = 0 ;
    for ( i = 0 ; i < n -1 ; i ++) 
    {
        if ((( tab[i] >= 'a') && (tab[i] <= 'z')) || ((tab[i] >= 'A') && (tab[i] <= 'Z')))
        {
            if ((( tab[i+1] >= 'a') && (tab[i+1] <= 'z')) || ((tab[i+1] >= 'A') && (tab[i+1] <= 'Z')))
            {
                k++ ;
            }
        }
    }

    printf ("Le nombre de bigramme dans cette chaine est : %d \n" , k) ;

    return (0) ;

}
