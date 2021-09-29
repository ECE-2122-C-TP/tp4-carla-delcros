//
// Created by delcr on 29/09/2021.
//
#include "TD4.h"
#include <stdio.h>
#include "mesfonctions.h"
#define COMPARATIF 10

/* void exercice1 () {
    int a = 0, b = 0;
    printf(" Saissisez un entier ");
    scanf(" %d", &a);
    printf(" Saissisez un  autre entier \n ");
    scanf(" %d", &b);
    printf ("Le plus grand entier est : %d" , getMax (a , b) ) ;
}
*/
void exercice2 (){
    int entier = 0 ;
    printf ("l'entier choisi est : %d", saisirEntier ())  ;
}


void exercice3 () {
    int lon = saisirEntier() , lar = saisirEntier() ;
    printf ( " L'aire du rectangle est:  %d" , calculAire ( lon , lar) ) ;
    printf ( " Le perimetre du rectangle est:  %d" , calculPerimetre ( lon , lar )) ;

}

void exercice4 () {
    int n = saisirEntier () ;
    const int div3 = 3 ;
        if  (multiple(n,div3) == 1 ) {
        printf ("il s'agit d'un multiple de trois ") ;
    }
    else {
        printf (" Ce n'est pas un multiple de trois ") ;
    }
    if ( n > COMPARATIF  ) {
        printf ("\n L'entier est supperieur a 10 " ) ;
    }
    else {
        printf ("\n L'entier n'est pas supperieur a 10 " );
}
}

void exercice5 (){
    int note1 = saisirEntier() , note2 = saisirEntier() , note3 = saisirEntier() ;
    printf ("La moyenne est : %f " , calculMoyenne ( note1, note2, note3 ));
}


void exercice5_7 () {
    int nclasses = saisirEntier();
    printf ("le nombre d'eleve dans l'ecole est : %d",  calculNombreEleves ( nclasses)) ;


}

void exercice5_8 (){
    int nombre = saisirEntier();

}