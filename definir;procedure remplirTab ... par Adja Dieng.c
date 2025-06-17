//definir la structure facture et etudiant par Adja Dieng
#include<stdio.h>
#include<string.h>
struct facture{
int idetudiant; char[6]objet;char[10]numero;float montant;
}  
//Procedure remplirTab par Adja Dieng
void remplirTab(struct facture tab[N]){
int i;
for(i=0;i<N;i++){
printf("saisir l'idetudiant");
scanf("%d,&tab[i].idetudiant");
printf("saisir l'objet");
scanf("%s,&tab[i].objet");
printf("saisir le numero");
scanf("%d,&tab[i].numero");
printf("saisir le montant");
scanf("%f,&tab[i].montant"); 
}
//Procedure afficherTab par Adja Dieng
void afficherTab(struct facture tab[N]){
 int i;
for(i=0; i<N;i++){
printf("la liste des facture est:%d %f %s %d",tab[i].idetudiant ,tab[i].objet ,tab[i].numero ,tab[i].montant);


}
}

}

