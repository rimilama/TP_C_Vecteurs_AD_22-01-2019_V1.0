#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

void menu(Vecteur *vecteur){
    int nEnd=1;
    fflush(stdin);
    do{
        system("cls");
        printf("1 - Addition\n");
        printf("2 - Soustraction\n");
        printf("3 - Produit d'un vecteur par un scalaire\n");
        printf("ESPACE - Quitter\n");
        nEnd = choix(vecteur);
    }while(nEnd == 1);
}


int choix(Vecteur *vecteur){
    int nChoix = 1;
    char cChoix;
    fflush(stdin);
    cChoix = getchar();
    while(cChoix!='1' && cChoix!='2' && cChoix!='3' && cChoix!=' '){
        printf("\nVotre choix n'est pas disponible !\nVeuillez reessayer : ");
        fflush(stdin);
        cChoix = getchar();
    }
    if(cChoix=='1'){
        addition(vecteur);
    }else if(cChoix=='2'){
        soustraction(vecteur);
    }else if(cChoix=='3'){
        multiplication(vecteur);
    }else{
        nChoix = 0;
    }
    return nChoix;
}
