#include <stdio.h>
#include <string.h>
int main(void)
{
    // Open CSV file
    FILE *file = fopen("voiture.csv", "a");//premier argument est le nom du fichier
    //le deuxième argument est soit r, soit w, soit a,...

    if (!file)
    {
        return 1;
    }

    char modele[50];//on initialise la variable model et on lui attribue 50 character max
    char plaque[50];//on initialise la variable plaque et on lui attribue 50 character max
    printf("modele : ");//on affiche modele avec un espace vide pour rentrer le nom du modele de voiture
    scanf("%s", modele);//on rentre le nom qu'on a choisie pour le modele de voiture
    printf("plaque : ");//on affiche plaque avec un espace vide pour rentrer la plaque de la voiture
    scanf("%s", plaque);//on rentre le nom qu'on a choisie pour la plaque de la voiture
    // Print to file
    fprintf(file, "%s, %s\n", modele, plaque);
    // Close file
    fclose(file);
}