//
// Created by delcr on 29/09/2021.
//
#include <stdio.h>
#include "mesfonctions.h"

/* Fonction qui donne le plus grand nombre .
 * Paramètres :
 * - IN : a et b .
 * - OUT : le plus grand des deux . (entier)
 */


int getMax (int a , int b ){
   if (a < b) {
      return ( b );
}
   else {
          return ( a );
}}

/* Fonction qui demande de saisir un entier .
 * Paramètres :
 * - IN : rien  .
 * - OUT : entier . (entier)
 */

 int saisirEntier () {
     int entier = 0;
     printf (" \n saissisez un entier") ;
     scanf ("%d" , &entier) ;
     return (entier) ;

 }

/* Fonction qui calcule l'aire d'un rectangle .
* Paramètres :
* - IN : longueur et largueur   .
* - OUT : l'aire . (entier)
*/

int calculAire ( int lon , int lar)
{
    return (lon * lar );
}

/* Fonction qui calcule le perimetre d'un rectangle .
* Paramètres :
* - IN : longueur et largueur   .
* - OUT : perimetre  . (entier)
*/

int calculPerimetre (int lon , int lar )
{
    return ((lon + lar) * 2) ;
}

/* Fonction qui prend deux nombre en parametre  .
* Paramètres :
* - IN : n1 et n2   .
* - OUT : si le premier entier est un multiple du second
*/

int multiple (int n1 , int n2 ) {
    if (n1 % n2 == 0 ){
        return (1);
    }
    else {
        return (0);
    }
}

/* Fonction qui demande si les notes sont bien comprises entre 0 et 20  .
* Paramètres :
* - IN : note1 ,note2, note3  .
* - OUT :  la moyenne ou -1 si elles ne sont pas valides  .
*/


float calculMoyenne (int note1, int note2, int note3 ) {
    if ((note1 <= 20 && note1 >= 0) && (note2 <= 20 && note2 >= 0) && (note3 <= 20 && note3 >= 0))
    {
        return  (( (float)note1 + (float)note2 + (float)note3 ) / 3) ;

    }
    else {
        return  (-1) ;
}}

int calculNombreEleves (int nclasses )
{
    int k = 0, total = 0, neleves = 0 ;
    while ( k < nclasses ) {
        printf ( " \n Saisissez le nombre d'eleves pour cette classe");
        scanf ( "%d" , &neleves );
        total = total + neleves;
        k = k + 1;
    return (total);
}
