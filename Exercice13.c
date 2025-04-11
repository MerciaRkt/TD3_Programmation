/* Programme C qui permet d'afficher un triangle de Pascal  de degre N 

Algorithme Triangle de Pascal 

Variable 
    N , i , j : entiers
    tab  : tableau entier [T][T] ;

    
Debut
    Ecrire ("Entrez le degre N du triangle de Pascal : ") ;
    Lire ( N ) ; 

    //Initialisation du tableau avec 0
    Pour ( i <- 0 ; i <= N ; i++ )
        Pour ( j <- 0 ; j <= N ; j++ )
            tab[i][j] <- 0 ;
        FinPour
    FinPour

    //Le premier element de chaque ligne et la diagonale sont toujours 1
    Pour ( i <- 0 ; i <= N ; i++ )
        tab[i][0] <- 1 ;
        tab[i][i] <- 1 ;
    FinPour

    Pour ( i <- 2 ; i <= N ; i++ )
        Pour ( j <- 1 ; j <= N ; j++ )
            tab[i][j] <- ( tab[i - 1][j - 1] + tab[i -1][j] ) ;
        FinPour
    FinPour

    Ecrire ("Triangle de Pascal : \n") ;

    Pour ( i <- 0 ; i <= N ; i++ )
        Pour ( j <- 0 ; j <= N ; j++ )
            Si (tab[i][j] != 0 ) alors
                Ecrire ("\t" , tab[i][j]) ;
            FinSi
        FinPour
        Ecrire ("\n") ;
    FinPour

Fin

*/

#include <stdio.h>
#define T 100

int main() 

{
    int N , i , j ;
    int tab[T][T] ;

    printf ("Entrez le degre N du triangle de Pascal : ") ;
    scanf ("%d" , &N ) ; 

    //Initialisation du tableau avec 0
    for ( i = 0 ; i <= N ; i++ )
    {
        for ( j = 0 ; j <= N ; j++ )
        {
            tab[i][j] = 0 ;
        }
    }

    //Le premier element de chaque ligne et la diagonale sont toujours 1
    for ( i = 0 ; i <= N ; i++ )
    {
        tab[i][0] = 1 ;
        tab[i][i] = 1 ;
    }

    for ( i = 2 ; i <= N ; i++ )
    {
        for ( j = 1 ; j <= N ; j++ )
        {
            tab[i][j] = ( tab[i - 1][j - 1] + tab[i -1][j] ) ;
        }
    } 

    printf ("Triangle de Pascal : \n") ;

    for ( i = 0 ; i <= N ; i++ )
    {
        for ( j = 0 ; j <= N ; j++ )
        {
            if (tab[i][j] != 0 )
            {
                printf ("%d\t" , tab[i][j]) ;
            }
        }
        printf("\n") ;
    }

    return(0) ;
}