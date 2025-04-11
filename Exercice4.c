// Soient deux tableaux d' entiers T1(maximum 50) et T2 (max 100). Ce programme permet de verifier que T2 existe dans T1 .Si T2 existe dans T1 , alors on supprime les elements de T2 dans T1 .

/* Algorithme Suppression des elements de T2 dans T1

Constante 
    maximum = 50 ;
    max = 10 ;

Variable 
    n , m , i , j , a , k  : entiers ;
    T1 : tableau entier [maximum] ;
    T2 : tableau entier [max] ;

Debut 
    i <- 0 ;
    Faire 
        i++ ;
        Si ( i > 3 ) 
            Fin ;
        FinSi
        Ecrire ("Entrez une valeur entre 1 a 50 , la taille de T1 :") ;
        Lire  ( n ) ;
    Tantque (( n < 1 ) ou ( n > 50 )) ;
    
    j <- 0 ;
    Faire
        j++ ;
        Si ( j > 3 )
            Fin ;
        FinSi
        Ecrire ("Entrez une valeur entre 1 a 100 , la taille de T2 :") ;
        Lire ( m ) ;
    Tantque ( m < 1 ) || ( m > 50 )) ;

    Ecrireln ("Les elements du tableau T1 :") ;

    Pour ( i <- 0 ; i < n ; i ++)
        Ecrire ("T1 [", i ,"] =" ) ;
        Lire ( T1[i] ) ;
    FinPour

    Ecrire ("Les elements du tableau T2 :\n") ;

    Pour ( j <- 0 ; j < m ; j++) 
        Ecrire ("T2 [" , i ,"] ="  ) ;
        Lire ( T2[j] ) ;
    FinPour

    k <- 0 ;
    Pour ( j <- 0 ; j < m ; j ++) 
        Pour ( i <- 0 ; i < n ; i++)
            Si( T1[ i ] = T2[ j ])
                k ++ ;
                Ecrireln ("T2[" , j  ,"] =  " ,T2[j] ," existe dans T1 ")  ;
            FinSi
        FinPour
    FinPour

    Si ( k = 0 ) alors
        Ecrire (" il n'y a aucun element de T2 dans T1") ;
        Fin ;
    FinSi

    Ecrireln ("") ;
    
    Pour ( j <- 0 ; j < m ; j ++) 
        Pour ( i <- 0 ; i < n -1 ; i++)
            Si ( T1[ i ] == T2[ j ])
                a <- T1[ i ] ;
                T1[ i ] <- T1[ i + 1] ;
                T1[ i + 1] <- a ;
            FinSi
        FinPour
    FinPour

    Ecrireln ("Apres suppression des elements de T2 dans T1 :") ;
    Ecrireln ("tableau T1 :") ;
    Pour ( i <- 0 ; i <  n - k ; i ++ )
        Ecrire (" " , T1[i]) ;
    FinPour

    Ecrireln ("") ;

    Ecrireln ("tableau T2 :") ;
    Pour ( j <- 0 ; j < m ; j++)
        Ecrireln (" ", T2[j] ) ;
    FinPour

Fin
*/



#include <stdio.h>
#include <stdlib.h>

#define maximum 50
#define max 100

int main ()

{
    int n , m , i , j , a , k ;
    int T1 [maximum] ;
    int T2 [max] ;

    i = 0 ;
    do 
    {        
        i++ ;
        if ( i > 3 ) 
        {
            exit(0) ;
        }
        printf ("Entrez une valeur entre 1 a 50 , la taille de T1 :") ;
        scanf ("%d" , & n) ;
    }
    while (( n < 1 ) || ( n > 50 )) ;

    j = 0 ;
    do 
    {
        j++ ;
        if ( j > 3 ) 
        {
            exit(0) ;
        }
        printf ("Entrez une valeur entre 1 a 100 , la taille de T2 :") ;
        scanf ("%d" , & m) ;
    }
    while (( m < 1 ) || ( m > 50 )) ;

    printf (" Entrez les elements du tableau T1 :\n") ;
    
    for ( i = 0 ; i < n ; i ++)
    {
        printf ("T1 [%d] =" , i ) ;
        scanf ("%d"  , & T1[i] ) ;
    }

    printf ("Entrez les elements du tableau T2 :\n") ;
    
    for ( j = 0 ; j < m ; j++) 
    {
        printf ("T2 [%d] =" , j ) ;
        scanf ("%d"  , & T2[j] ) ;
    }

    k = 0 ;
    for ( j = 0 ; j < m ; j ++) 
    {
        for ( i = 0 ; i < n ; i++)
        {
            if ( T1[ i ] == T2[ j ])
            {
                k ++ ;
                printf ("T2[%d] = %d existe dans T1 \n" , j  ,  T2[j])  ;
            }
        }
    }

    if ( k == 0 )
    {
        printf (" il n'y a aucun element de T2 dans T1") ;
        exit (0) ;
    }

    printf ("\n") ;
    
    for ( j = 0 ; j < m ; j ++) 
    {
        for ( i = 0 ; i < n -1 ; i++)
        {   
            if ( T1[ i ] == T2[ j ]) 
            {
                a = T1[ i ] ;
                T1[ i ] = T1[ i + 1] ;
                T1[ i + 1] = a ;
            }
        }
    }

    printf ("Apres suppression des elements de T2 dans T1 :\n") ;
    printf ("tableau T1 :\n") ;
    for ( i = 0 ; i <  n - k ; i ++ )
    {
        printf (" %d\t" , T1[i]) ;
    }

    printf ("\n") ;

    printf ("tableau T2 :\n") ;
    for ( j = 0 ; j < m ; j++)
    {
        printf(" %d\t " , T2[j] ) ;
    
    }

    return(0) ;
}
