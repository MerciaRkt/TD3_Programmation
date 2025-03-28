//Programme C qui permet d'inserer un element X dans un tableau d'entier trie 

/*Algorithme Triage d'un tableau

variable 
    n , i , j ,  k ,a, X : entiers
    T : tableau entier [50]

Debut 
    i <- 0 ; 
    Faire
        i++ ;
        Si ( i > 3 ) alors
            Fin ;
        FinSi
        Ecrire ("Entrez une valeur entre 1 et 50,la taille du tableau T :");
        Lire (N);
    Tantque ((N < 1) || (N > 50));
    
    Ecrire ("Entrez les elements du tableau T :")
    Pour ( i <- 0 ; i < n ; i++)
        Ecrire ("T[" , i ,"] = ") ;
        Lire ( T[i] ) ;
    FinPour

    Ecrire("Triage du tableau \n") ;
    
    Pour( j = 0 ; j < n ; j++ )
        Pour ( i = 0 ; i < n -1 ; i++)
            Si ( T [i] > T [i + 1]) alors
                a <- T[i] ;
                T[i] <- T [i + 1] ;
                T[ i + 1] <- a ;
            FinSi
        FinPour
    FinPour

    Pour ( i = 0 ; i < n ; i ++ )
        Ecrireln ( "T[", i ,"] =", T [i] )  ;
    FinPour



    Ecrire ("Entrez un autre element a inserer dans le tableau :") ;
    Lire ( X ) ;

    Pour ( i = 0 ; i < n + 1 ; i ++)
        Si ( i == n) alors
            T[i] = X ;
        FinSi
    FinPour

    Pour( j = 0 ; j < n + 1 ; j++ )
        Pour ( i = 0 ; i < n ; i++)
            Si ( T [i] > T [i + 1]) alors
                a <- T[i] ;
                T[i] <- T [i + 1] ;
                T[ i + 1] <- a ;
            FinSi
        FinPour
    FinPour
 
    Ecrire ("Apres triage : \n") ;
    Pour ( i = 0 ; i <=8n ; i ++ )
        Ecrireln ( "T[", i ,"] =", T [i] )  ;
    FinPour

Fin
*/

#include <stdio.h>
#include <stdlib.h>
#define N 50

int main ()

{
    int n , i , j , k  , a , X;
    int T [N] ;

    i = 0 ;
    do 
    {
        i++ ;
        if (i > 3)
        {
            exit(0) ;
        }
        printf ("Entrez une valeur entre 1 a 50 , la taille du tableau :") ;
        scanf ("%d",&n) ;
    }
    while (( n < 1 ) || ( n > 50)) ;

    printf ("Entrez les elements du tableau : \n") ;
    for ( i = 0 ; i < n ; i++)
    {
        printf ("tab[%d] =" , i) ;
        scanf ("%d" ,&T[i]) ;
    }

    printf ("Triage du tabeau \n") ;
    for ( j = 0 ; j < n ; j++ )
    {
        for ( i = 0 ; i < n-1 ; i++)
        {
            if ( T [i] > T [i + 1])
            {
                a = T[i] ;
                T[i] = T [i + 1] ;
                T[ i + 1] = a ;
            }
        }
    }

    for ( i = 0 ; i < n ; i ++ )
    {
        printf ( "T[%d] = %d \n", i , T [i] )  ;
    }



    printf ("Entrez un autre element a inserer dans le tableau :") ;
    scanf ( "%d" , &X ) ;

    for ( i = 0 ; i < n + 1 ; i++ )
    {
        if ( i == n )
        {
            T[i] = X ;
        }
    }


   for ( j = 0 ; j < n + 1 ; j++ )
    {
        for ( i = 0 ; i < n  ; i++)
        {
            if ( T [i] > T [i + 1])
            {
                a = T[i] ;
                T[i] = T [i + 1] ;
                T[ i + 1] = a ;
            }
        }
    }

    printf ("Apres triage : \n ") ;

    for ( i = 0 ; i <= n ; i ++ )
    {
        printf ( "T[%d] = %d \n", i , T [i] )  ;
    }

    return(0) ;
}