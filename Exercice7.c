//Programme qui permet de lire un texte caractere par caractere ; le texte se termine par un point .Ce programme doit afficher le nombre d'apparition du caractere 'a' et le nombre d'apparition de la suite 'es'

/*
Algorithme nombre d'apparition de 'a' et 'es'

Variable 
    i , k , l , n : entiers ;
    tab : tableau chaine de caractere[100] ;

Debut  
    i <- 0 ;
    Faire
        i++ ;
        Si ( i > 3) alors
            Fin ;
        FinSi
        Ecrire ("Veuillez entrer un texte de votre choix terminant par un point :") ;
        lire (tab) ;
        n <- strlen(tab) ;
    Tant que ( tab[n-2] <> '.') ;

    
    k <- 0 ; 
    l <- 0 ;

    Pour ( i <- 0 ; i < n ; i++)
        Si (tab[i] = 'a') alors
            k++ ;
        FinSi

        Si ((tab[i] = 'e') ET (tab[i+1] = 's')) alors
            l++ ;
        FinSi
    FinPour

    Ecrire ("Le nombre d'apparition du caractere 'a' est :" , k ," fois et le nombre d'apparition de la suite  'es' est :" , l ," fois \n" , k , l) ;

Fin
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
    int i , k , l , n;
    char tab [100] ;
    
    i = 0 ;
    do 
    {
        i++ ;
        if ( i > 3) 
        {
            exit(0) ;
        }
        printf ("Veuillez entrer un texte de votre choix terminant par un point :") ;
        fgets (tab , 100 , stdin) ;
        n = strlen(tab) ;
    }
    while ( tab[n-2] != '.') ;

    
    k = 0 ; 
    l = 0 ;

    for ( i = 0 ; i < n ; i++)
    {
        if (tab[i]== 'a')
        {
            k++ ;
        }

        if ((tab[i] == 'e') && (tab[i+1] == 's'))
        {
            l++ ;
        }
    }
    printf ("Le nombre d'apparition du caractere 'a' est : %d fois et le nombre d'apparition de la suite 'es' est : %d fois \n" , k , l) ;

    return(0) ;
}
