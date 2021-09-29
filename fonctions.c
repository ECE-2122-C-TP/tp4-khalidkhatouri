//
// Created by hp on 29/09/2021.
//

#include<stdio.h>
#include"fonctions.h"

int getMax(int nombre1,int nombre2)
{ int grand;
    if(nombre1>nombre2)
        grand=nombre1;
    else if (nombre1<nombre2)
        grand=nombre2;
    else if (nombre1==nombre2)
        grand=0;
    return grand;

}
int saisirUnEntier( )
{
    int n;
    printf("saisir un entier\n");
    scanf("%d", &n);
    return n;
}
int calculeAire(int longueur,int largeur)
{
    int aire;
    aire= longueur*largeur;
    return aire;
}
int perimetre(int longueur,int largeur)
{
    int peri;
    peri= (longueur+largeur)*2;
    return peri;
}

int booleen(int nombre1,int nombre2)
{
    int go=0;
    if(nombre1%nombre2==0)
    {
        go=1;

    }
    else if(nombre1%nombre2!=0)
        go=0;

    return go;
}