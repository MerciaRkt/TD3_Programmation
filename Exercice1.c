/*Programme qui saisit un tableau d'entiers de taille N(constante) et qui l'affiche 
de telle sorte que tous les entiers pairs se retrouvent avant les entiers impairs */


/*Algorithme affichage ordonne des nombres pairs et impairs

Constante 
    N = 50 ;

variable 
    n , i , j ,  k ,a : entiers ;
    T : tableau entier [N] ;

Debut 
    i <- 0 ; 
    Faire
        i++ ;
        Si ( i > 3 ) alors
            Fin ;
        FinSi
        Ecrire ("Entrez une valeur entre 1 et 50,la taille du tableau T :");
        Lire (n);
    Tantque ((n < 1) OU (n > 50));
    
    Ecrire ("Entrez les elements du tableau T :")
    Pour ( i <- 0 ; i < n ; i++)
        Ecrire ("T[" , i ,"] = ") ;
        Lire ( T[i] ) ;
    FinPour

    k = 0
    Ecrire ("Quand les entiers pairs se retrouvent avant les premiers impairs") ;
    Pour ( i <- 0 ; i < n ; i++)
        Si (T[i] % 2 == 0 ) alors
            k++ ;
        FinSi
    FinPour

    Pour ( i <- 0 ; i < n - k ; i++ )
        Pour ( j <- 0  ; j < n - 1  ; j++)
            Si ( T[j] % 2  != 0 )
                a <- T[j] ;
                T[j] <- T[j + 1] ;
                T[j + 1] <-- a ;
            FinSi
        FinPour
    FinPour

    Pour ( i = 0 ; i < n ; i ++ )
        Ecrireln ( "T[", i ,"] =", T [i] )  ;
    FinPour

Fin
*/

#include <stdio.h>
#include <stdlib.h>
#define N 50

int main ()

{
    int n , i , j , k  , a;
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
        printf ("T[%d] =" , i) ;
        scanf ("%d" ,&T[i]) ;
    }

    printf ("Quand les entiers pairs se retrouvent avant les premiers impairs \n");
    
    k = 0;
    for ( i = 0 ; i < n ; i++)
    {
        if ( T[i] % 2 == 0 )
        {
            k++ ;
        }
    }

    for ( i = 0 ; i < n - k ; i++)
        {
            for ( j = 0 ; j < n  - 1 ; j ++)
            {
                if  ( T [j] % 2 != 0 ) 
                {
                    a = T [j] ;
                    T [j] = T [j + 1] ;
                    T [j + 1] = a ;
                }

            }
        }
        

    for ( i = 0 ; i < n ; i ++ )
    {
        printf ( "T[%d] = %d \n", i , T [i] )  ;
    }

    return(0) ;
}
