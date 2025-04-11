/*Programme C qui permet de crypter une phrase en français ; ne contenant que des lettres . Il s'agit d'ajouter "IT" à chaque fois
que l'on rencontre une consonne suivie d'une voyelle 

Algorithme phrase en crypté

Constante 
    N = 100 ;

Variables 
    i , j , m , n : entiers ;
    tab : tableau entier [N] ;
    voyelles : tableau chaine de caracteres [] = "aeiouyAEUOYI" ;

Debut 
    Ecrire ("Entrez une phrase : ") ;
    Lire ( tab );

    n <- strlen(tab) - 1 ;

    Ecrire (" Phrase en français : " , tab ) ;
    
    Pour ( i <- 0 ; i < n ; i++)
        Si (((tab[i]>= 'A') ET (tab[i]<='Z' )) OU ((tab[i]>= 'a') ET (tab[i]<='z' )) OU tab[i] = ' ') alors
            Pour ( j <- 0 ; j < 12 ; j++) 
                Si (tab[i]= voyelles[j]) alors
                    fin ;
                FinSi
            FinPour

            Si ( j = 12 ) alors
                Pour ( j <- 0 ; j < 12 ; j++)
                    Si (tab[i+1] = voyelles[j]) alors
                        Pour ( m <- n ; m >i ; m--)
                            tab[m+2] <- tab[m] ;
                        FinPour
                    
                        tab[i+1] <- 'I';
                        tab[i+2] <- 'T' ;
                        n <- n + 2 ;
                        i <- i + 2 ;
                    FinSi
                FinPour
            FinSi 
 

        Sinon
            Ecrire ("Votre phrase contient des caractères non autorisé \n ") ;
            fin ;

        FinSi
    FinPour

    Ecrire ("Phrase en cryptée : \n" , tab ) ;

Fin




*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100

int main ()
{
    int i , j , m , n ;
    char tab [N] ;
    char voyelles [] = "aeiouyAEUOYI" ;


    printf ("Entrez une phrase : ") ;
    fgets (tab , N  , stdin) ;

    n = strlen(tab) - 1 ;

    printf (" Phrase en français : %s " , tab ) ;
    
    for ( i = 0 ; i < n ; i++)
    {
        if (((tab[i]>= 'A') && (tab[i]<='Z' )) || ((tab[i]>= 'a') && (tab[i]<='z' )) ||  tab[i] == ' ') //Verifie si c'est une lettre
        {
            for ( j = 0 ; j < 12 ; j++)//Verifie si  tab[i] est une consonne 
            {
                if (tab[i] == voyelles[j])
                {
                    break ;
                }
            }

            if ( j == 12 ) //tab[i] est une consonne 
            {
                for ( j = 0 ; j < 12 ; j++)
                {
                    if (tab[i+1]==voyelles[j]) //Si le caractere suivant est une voyelle 
                    { 
                        for ( m = n ; m >i ; m--)
                        {
                            tab[m+2] = tab[m] ;
                        }
                        
                        tab[i+1] = 'I';
                        tab[i+2] = 'T' ;
                        n = n + 2 ;
                        i = i + 2 ;
                    }
                }
            } 
 
        }

    else 
    {
        printf ("Votre phrase contient des caractères non autorisé \n ") ;
        exit(0) ;
    }

    }

    printf ("Phrase en cryptée : %s \n" , tab ) ;

    return(0) ;

}
