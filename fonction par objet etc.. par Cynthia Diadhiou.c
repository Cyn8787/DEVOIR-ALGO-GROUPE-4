//Fonction somme par objet par Cynthia Murielle Diadhiou
float sommeparobjet(struct facture tab[N]){
    int i;
    const char*objet;
   float somme=0;
   for(i=0; i<N; i++) {
sommeparobjet= somme+tab[i].montant;
   }
   return sommeparobjet;
}
//Procédure factureparetudiant par Cynthia Murielle Diadhiou
void  afficherfactureparetudiant(struct facture tab[N]){
    int r;
    int idrecherche;
    printf("veuillez saisir l'id de l'étudiant à chercher");
    scanf("%d",&idrecherche);
    for(i=0; i<N; i++){
        if(tab[i].idetudiant==idrecherche){
            printf("La facture est: %d %f %s %d", tab[i].numero , tab[i].montant , tab[i].objet , tab[i].idetudiant);
        }
    }

}
//fonction principale pour tester
main(){
    remplirTab(tab);
    afficheTab(tab);
    printf("la somme totale des montants: %f", sommetab);
    printf("le montant minimum: %f", mintab);
    printf("le montant maximal: %f" ,maxtab);
    printf("somme des factures par objet %f" , sommeparobjet);
    int idrecherche;
    printf("entrez id de l'étudiant:");
    scanf("%d" ,&idrecherche);
afficherfactureparetudiant(tab, idrecherche);
}