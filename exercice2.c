#include <stdio.h>

void swap(int *a, int *b);//on initialise une fonction swap pour a et b

int main(void)
{
    int a = 0;//on initialise la variable a
    int b = 0;//on initialise la variable b
    int tmp = 0;//on initialise la variable tmp

    printf("valeur a : ");//on demande la valeur a
    scanf("%i", &a);//on donne une valeur à notre variable a
    printf("a : %i\n", a);//on affiche la valeur de notre variable a
    
    printf("valeur b : ");//on demande la valeur b
    scanf("%i", &b);//on donne une valeur à notre variable b
    printf("b : %i\n", b);//on affiche la valeur de notre variable a
    
    printf("a vaut %i et b vaut %i\n", a, b);//on affiche la valeur de a et b 
    swap(&a, &b);//on swap la valeur des variable a et b
    printf("a vaut maintenant %i et b vaut maintenant %i\n", a, b);//on affiche la nouvelle valeur des variable a et b apres le swap
}
void swap(int *a, int *b)//on cast notre fonction swap
{
    int tmp = *a;//on attribue notre variable a à la variable tmp
    *a = *b;//on attribue notre variable b à la varible a
    *b = tmp;//on attribue notre variable tmp à la variable b
}