//Une chaine de carctere W est un carre s' il existe une chaine U telle que W=UU ( Exemple : chercher et bonbon sont des carres .Ce programme dit si une chaine est carre ou non. 

/*
Algorithme une chaine est carree ou non

Variable
    n : entier
    W : Tableau chaine de caractere[100] ;
    U : Tableau chaine de caractere[100] ;

    Ecrire ("Entrez une chaine de caractere : ") ;
    Lire("%s" , W) ;

    n <- strlen ( W ) ;

    strncpy ( U , W , n/2 ) ;
    strcat ( U , U) ;

    Si ((strcmp ( W , U )) == 0 ) alors
        Ecrire ("Cette chaine est carree \n ") ;
    Sinon 
        Ecrire (" Cette chaine n' est pas carree \n") ;
    FinSi

Fin
*/

#include <stdio.h>
#include <string.h>

int main ()

{
    int n ;
    char W [100] ;
    char U [100] ;

    printf ("Entrez une chaine de caractere : ") ;
    scanf ("%s" , W) ;

    n = strlen ( W ) ;

    strncpy ( U , W , n/2 ) ;
    strcat ( U , U) ;

    if ((strcmp ( W , U )) == 0 )
    {
        printf ("Cette chaine est carree \n ") ;
    }
    else 
    {
        printf (" Cette chaine n' est pas carree \n") ;
    }

    return (0) ;
}
