/*====================================================================
 That program removes the empty spaces contained at the beginning of
 the char chart and once it reached the first other symbol of the
 ascii table, the function(strltrim) modify char_chart previously
 transmitted in parameter of that function and then returns it.
 ====================================================================*/
#include <stdio.h>
#include <string.h>
#include <malloc.h> // Include calloc, malloc, free...

/*=====PROTOTYPES=====*/
char* strltrim(char*);

int main()
{
   char char_chart_main[]="           I'll delete the empty spaces before that sentence.";

   printf("%s\n", char_chart_main);
   strltrim(char_chart_main);
   printf("%s\n\n", char_chart_main);
}
char* strltrim(char* char_chart)//Function that removes the empty spaces.
{
   char* pt_begin;

   pt_begin=char_chart;

   while(*pt_begin == ' ')
      pt_begin++;

   strcpy(char_chart, pt_begin);

   return char_chart;

}










/*
char* strltrim(char* char_chart)//char_chart contient l'adresse de la première cellule du tableau char_chart_main.
{

   char* beginning; // On déclare un pointeur

   beginning=char_chart; // Puisque char_chart est une addresse, on place cette addresse dans le beginning.

   while(*beginning == ' ') // On accède à la donnée qui se trouve dans beginning en déréférencent.
      beginning=beginning+1; //On ajoute une position au pointeur (donc adresse contenu dans le pointeur + le type char) ==> ce qui le fait se déplacer d'une position dans le tableau.
      // Si tu déréférence, tu vas écraser le ' ' par ' '+1, ce qui donne je sais pas trop quoi mais tu veux pointer le lieu et non accèder à la cellule.
      // Déréférencer (*) fait accèder à la donnée de la cellule pour la modifier et le pointeur montre ou elle se trouve.
   strcpy(char_chart, beginning); // J'imagine que strcpy prend une position et avec une boucle copie tout ce qui vient depuis le pointeur
                                 // dans une chaine de caractère.
   return char_chart;
}
*/
