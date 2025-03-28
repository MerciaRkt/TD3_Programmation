//Programme qui lit une chaine de caracteres et verifie si elle est palindrome ou non . Une chaine de caracteres est dite palindrome si elle se lit de la meme maniere dans les deux sens 

/*
Algorithme palindrome

Variable
    i  , n , k : entiers
    tab : tableau chaine de caractere[100] ;
    inverse : tableau chaine de caractere[100] ;
    a : caractere ;

Debut
    Ecrire("Entrez un mot de votre choix :") ;
    Lire( tab) ;

    strcpy (inverse , tab ) ;
    n <- strlen (inverse) ;
    k <- 1 ;
    Pour ( i = 0 ; i < n ; i++)
        Si (i < n - k )
            a <- inverse[i];
            inverse[i] <- inverse[n - k] ;
            inverse[n - k] <- a ;
            k++ ;
        FinSi
    FinSi


    strcmp ( tab , inverse) ;

    Si (strcmp ( tab , inverse) == 0) 
        ecrire ("Cette chaine de caractere est palindrome \n") ;
    Sinon 
        Ecrire(" cette chaine de caractere n'est pas palindrome \n") ;
    FinSi

Fin


*/

#include <stdio.h>
#include <string.h>

int main()

{
    int i  , n , k ;
    char tab [100] ;
    char inverse [100] ;
    char a ;
    printf("Entrez un mot de votre choix :") ;
    scanf ("%s" , tab) ;

    strcpy (inverse , tab ) ;
    n = strlen (inverse) ;
    k = 1 ;
    for ( i = 0 ; i < n ; i++)
    {
        if (i < n - k )
        {
            a = inverse[i];
            inverse[i] = inverse[n - k] ;
            inverse[n - k] = a ;
            k++ ;
        }
    }

    strcmp ( tab , inverse) ;

    if (strcmp ( tab , inverse) == 0) 
    {
        printf ("Cette chaine de caractere est palindrome \n") ;
    }
    else 
    {
        printf(" cette chaine de caractere n'est pas palindrome \n") ;
    }

    return(0) ;
}
