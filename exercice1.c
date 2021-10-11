#include <stdio.h>
#include <math.h>

int main(void)
{
    int a;//initialisation de la variable a
    int b;//initialisation de la variable b
    printf("valeur a\n");//on demande la valeur a
    scanf("%i", &a);//on donne une valeur à notre variable a

    printf("valeur b\n");//on demande la valeur b
    scanf("%i", &b);//on donne une valeur à notre variable b
    printf("%f\n", sqrt(a * a + b * b));//on affiche le resultat la racine carée de a + b 

}