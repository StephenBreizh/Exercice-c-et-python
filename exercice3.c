#include <stdio.h>

int main(void)//on initialise notre fonction principale
{
    int a = 0;//on initialise notre variable a
    int b = 0;//on initialise notre variable b
    int c = 0;//on initialise notre variable b
    int max = 0;//on initialise notre variable max
    
    printf("premier chiffre : \n");//on demande le premier chiffre
    scanf("%i", &a);//on donne une valeur à la variable a
    
    printf("deuxieme chiffre : \n");//on demande le deuxieme chiffre
    scanf("%i", &b);//on donne une valeur à la variable b
    
    printf("troisieme chiffre : \n");//on demande le troisieme chiffre
    scanf("%i", &c);//on donne une valeur à la variable c
    
    if (a > b)//si la variable a est supérieur à la variable b
    {
        max = a;//on attribue la variable a à la variable max
    }
    else if (b > c)//autrement si la variable b est supérieur à la variable c 
    {
        max = b;//on attribue la variable b à la variable max
    }
    else
    {
        max = c;//on attribue la variable c à la variable max
    }
    printf("le plus grand chiffre est : %i\n", max);//afficher le plus grand chiffre
}