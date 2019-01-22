#include <stdio.h>
#include <stdlib.h>
#include "operation.h"

void addition(Vecteur *vecteur){
    Vecteur vecteur_temp;
    vecteur_temp.nVectoriel.nX = vecteur[0].nVectoriel.nX + vecteur[1].nVectoriel.nX;
    vecteur_temp.nVectoriel.nY = vecteur[0].nVectoriel.nY + vecteur[1].nVectoriel.nY;
    printf("L'addition des 2 vecteurs que vous avez renseigner vaut un vecteur ->z de coordonnee vectoriel:\nXz: %lf\nYz: %lf", vecteur_temp.nVectoriel.nX, vecteur_temp.nVectoriel.nY);
    fflush(stdin);
    getchar();
}

void soustraction(Vecteur *vecteur){
    Vecteur vecteur_temp;
    vecteur_temp.nVectoriel.nX = vecteur[0].nVectoriel.nX - vecteur[1].nVectoriel.nX;
    vecteur_temp.nVectoriel.nY = vecteur[0].nVectoriel.nY - vecteur[1].nVectoriel.nY;
    printf("La soustraction des 2 vecteurs que vous avez renseigner vaut un vecteur ->z de coordonnee vectoriel:\nXz: %lf\nYz: %lf", vecteur_temp.nVectoriel.nX, vecteur_temp.nVectoriel.nY);
    fflush(stdin);
    getchar();
}

void multiplication(Vecteur *vecteur){
    int nA;
    printf("Rentrer un scalaire : ");
    scanf("%d", &nA);
    Vecteur vecteur_temp;
    vecteur_temp.nVectoriel.nX = vecteur[0].nVectoriel.nX * nA;
    vecteur_temp.nVectoriel.nY = vecteur[0].nVectoriel.nY * nA;
    printf("La mutliplication du premier vecteur que vous avez renseigner avec le scalaire %d vaut un vecteur ->z de coordonnee vectoriel:\nXz: %lf\nYz: %lf", nA, vecteur_temp.nVectoriel.nX, vecteur_temp.nVectoriel.nY);
    fflush(stdin);
    getchar();
}
