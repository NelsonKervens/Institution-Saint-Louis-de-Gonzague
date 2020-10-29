#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//NELSON
//Kervens Sheelove
//Institution Saint Louis de Gonzague
//NS3-BLEUE
//Le 28/10/2020
/*Algorithme qui calcule l'age de l'utilisateur.
Et qui affiche s'il est majeur ou mineur.*/
int main(int argc, char *argv[])
{
  int AnneeNaissance=0, age=0;//Declaration des variables.
  const int AnneeEncours=2020;//La constante(l'annee en cours)
  printf("Entrer votre annee de naissance :\n");//On demande à l'utilisateur l'annee de naissance.
  scanf("%d", &AnneeNaissance);
  age=AnneeEncours-AnneeNaissance;//Calcule de l'âge de l'utilisateur.
  if(AnneeNaissance>AnneeEncours)//Condition avant le calcule de l'age.
  {
    printf("ERREUR !\n");
  }
  else if(age>=18)//On est majeur a 18 ans ou plus.
  {
    printf("Vous avez %d ans\n", age);//Dans ce cas, on affiche l'age de l'utilisateur.
    printf("Vous etes majeur !\n");//La condition else if s'execute.
  }
  else//Pour les autres cas.
  {
    printf("Vous avez %d ans\n", age);//On affiche egalement l'age de l'utilisateur.
    printf("Vous etes mineur !\n");//La condition else s'execute selon l'annee entre par l'utilisateur.
  }
  return 0;
}