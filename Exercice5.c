/*
Etant donne un tableau d'entiers , trouver et afficher l'element le plus proche de la moyenne 

Algorithme affichage de l'element le plus proche de la moyenne

Constante 
    N = 50
variable 
    i , j , n , s , a  , b :entiers
    m ,c ,d ; reels 
    T : tableau entier [50]

i <- 0;
    faire     
        i++ ;
        Si ( i > 3 ) alors
            fin ;
        FinSi
        Ecrire ("Entrez une valeur entre 1 a 50 , la taille du tableau T:") ;
        Lire ("%d" , & n) ;
    Tant que (( n < 1 ) OU ( n > 50 )) ;

    Ecriree ("Entrez les elements de T : \n") ;
    Pour ( i = 0 ; i < n ; i ++)
        Ecrire (" T[%" , i ,"] = " );
        lire ("%d" , &T[i] );
    FinPour

    s <- 0 ;
    m <- 0 ;
    Pour ( i = 0 ; i < n ; i ++ )
        s <- s + T[i] ;
    FinPour

    m <- (float)s / n ;
    Ecrire (" m = \n " , m) ;

    Pour( j = 0 ; j < n ; j++ )
        Pour ( i = 0 ; i < n - 1 ; i++)
            Si ( T [i] > T [i + 1]) alors
                a <- T[i] ;
                T[i] <- T [i + 1] ;
                T[ i + 1] <- a ;
            FinSi
        FinPour
    FinPour


    Pour ( i = 0 ; i < n ; i ++)
        Si ( m < T[i]) alors
            b <- i ;
            c <- T[i] - m ;
            d <- m - T[i - 1 ] ;
            Fin ;
        FinSi
    FinPour

    Si ( c < d ) alors
        Ecrire (" La valeur la plus proche de la moyenne " , m , ," est : " , T[b]) ;
    
    Sinon 
        ecrire ("La valeur la plus proche de la moyenne , m < " est : " , T[b-1]) ;
    FinSi

Fin

*/
#include <stdio.h>
#include <stdlib.h>
#define N 50

int main ()

{
    int i , j , n , s , a  , b  ;
    float m , c, d ;
    int T [N] ;

    i = 0 ;
    do 
    {        
        i++ ;
        if ( i > 3 ) 
        {
            exit(0) ;
        }
        printf ("Entrez une valeur entre 1 a 50 , la taille du tableau T:") ;
        scanf ("%d" , & n) ;
    }
    while (( n < 1 ) || ( n > 50 )) ;

    printf ("Entrez les elements de T : \n") ;
    for ( i = 0 ; i < n ; i ++)
    {
        printf (" T[%d] = " , i );
        scanf ("%d" , &T[i] );
    }

    s = 0 ;
    m = 0 ;
    for ( i = 0 ; i < n ; i ++ )
    {
        s = s + T[i] ;
    }

    m = (float)s / n ;
    printf (" m = %f \n " , m) ;

    for ( j = 0 ; j < n ; j++ )
    {
        for ( i = 0 ; i < n - 1 ; i++)
        {
            if ( T [i] > T [i + 1])
            {
                a = T[i] ;
                T[i] = T [i + 1] ;
                T[ i + 1] = a ;
            }
        }
    }


    for ( i = 0 ; i < n ; i ++)
    {
        if ( m < T[i])
        {
            b = i ;
            c = T[i] - m ;
            d = m - T[i - 1 ] ;
            break ;
        }
    }

    if ( c < d )
    { 
        printf (" La valeur la plus proche de la moyenne m = %f est :  %d " ,m , T[b]) ;
    }
    else 
    {
        printf ("La valeur la plus proche de la moyenne m = %f est :  %d " , m , T[b-1]) ;
    }

    return(0) ;

}
