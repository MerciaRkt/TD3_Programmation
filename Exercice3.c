/*Algorithme suppression d'un element X du tableau

VAriable
     n , i  , k , j , a ,X : entiers
    T : tableau entier [50]

Debut
    i <- 0  ; 
    Faire
        i++ ;
        Si ( i > 3 ) alors
            Fin ;
        FinSi
        Ecrire ("Entrez une valeur entre 1 et 50 , la taille du tableau :") ;
        Lire ("%d",&n) ;
    Tantque (( n < 1 ) OU (n > 50)) ;

    Ecrire (" Entrez les elements du tableau : \n");
    Pour ( i <- 0 ; i < n ; i++)
        Ecrire ("T[%" , i ,"] = " ) ;
        Lire (T[i]) ;
    FinPour

    Ecrire (" Entrez l' element a supprimer X = ") ;
    Lire ( X ) ;
    
    
    k <- 0 ;
    Pour( i = 0 ; i < n ; i++)
        Si (T[i] = X) alors
            k++ ;
        FinSi
    FinPour
    
    
    Ecrire ("Apres suppression de l'element : \n") ;
    Pour( j <- 0 ; j < n - k ; j++)
        Pour ( i <- 0 ; i < n - 1 ; i ++)
            Si ( T[i] = X) alors
                    a <- T[i];
                    T[i] <- T[i + 1] ;
                    T[i + 1] <- a ;
            FinSi
        FinPour
    FinPour

    POur ( i <- 0 ; i < n - k ; i++)
        Ecrire ("T[" , i ,"] = " , T[i]) ;
    FinPour

Fin

*/

#include <stdio.h>
#include <stdlib.h>
#define N 50

int main ()
{
    int n , i  , k , j , a ,X ;
    int T [N] ;

    i = 0  ; 
    do 
    {
        i++ ;
        if ( i > 3 )
        {
            exit (0) ;
        }
        printf ("Entrez une valeur entre 1 et 50 , la taille du tableau :") ;
        scanf ("%d",&n) ;
    }
    while (( n < 1 ) || (n > 50)) ;

    printf (" Entrez les elements du tableau : \n");
    for ( i = 0 ; i < n ; i++)
    {
        printf ("T[%d] = " , i ) ;
        scanf ("%d" , &T[i]) ;
    }

    printf (" Entrez l' element a supprimer X = ") ;
    scanf("%d" , &X) ;
    
    
    k = 0 ;
    for ( i = 0 ; i < n ; i++)
    {
        if (T[i]==X)
        {
            k++ ;
        }
    } 
    
    
    printf ("Apres suppression de l'element : \n") ;
    for ( j = 0 ; j < n - k ; j++)
    {
        for ( i = 0 ; i < n - 1 ; i ++)
        {
            if ( T[i] == X)
            {   
                    a = T[i];
                    T[i] = T[i + 1] ;
                    T[i + 1] = a ;
            }
        }
    }

    for ( i = 0 ; i < n - k ; i++)
    {
        printf ("T[%d] = %d \n" , i , T[i]) ;
    }

    return(0) ;
}
