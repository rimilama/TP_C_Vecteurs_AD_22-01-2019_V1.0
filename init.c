#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "init.h"

//**************************************************************************************************************//
//
//  Description : Fonction qui cr�e 2 vecteurs
//
//  Entr�es : 1 tableau de structure
//
//  Sorties : /
//
//  Notes : /
//
//***************************************************************************************************************//
void crea_vecteur(Vecteur *vecteur){
    int nI;
    for(nI=0;nI<NB_VECTEUR;nI++){
        if(nI==0){
            printf("Soit un premier ");
        }else{
            printf("Soit un autre ");
        }
        printf("vecteur ->AB :\nCoordonnee du point A:\nXa: ");
        scanf("%lf", &vecteur[nI].nA.nX);
        printf("\nYa: ");
        scanf("%lf", &vecteur[nI].nA.nY);
        printf("\nCoordonnee du point B:\nXb: ");
        scanf("%lf", &vecteur[nI].nB.nX);
        printf("\nYb: ");
        scanf("%lf", &vecteur[nI].nB.nY);
        vecteur[nI].nVectoriel.nX = vecteur[nI].nB.nX - vecteur[nI].nA.nX;
        vecteur[nI].nVectoriel.nY = vecteur[nI].nB.nY - vecteur[nI].nA.nY;
        vecteur[nI].nNorme = sqrt(pow(vecteur[nI].nVectoriel.nX, 2) + pow(vecteur[nI].nVectoriel.nY, 2));
        system("cls");
    }
}
