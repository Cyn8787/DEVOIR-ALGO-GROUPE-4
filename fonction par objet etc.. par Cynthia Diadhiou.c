//Fonction somme par objet par Cynthia Murielle Diadhiou
float sommeparobjet(struct facture tab[N]){
    int i;
   float somme=0;
   for(i=0; i<N; i++) {
sommeparobjet= somme+tab[i].montant;
   }
   return sommeparobjet;
}
//Procédure recherche par id et factureparétudiant par Cynthia Murielle Diadhiou
void  afficherfactureparétudiant(struct facture tab[N]){
    int r;
    int idrecherche;
    printf("veuillez saisir l'id de l'étudiant à chercher");
    scanf("%d",&idrecherche);
    for(i=0; i<N; i++){
        if(tab[i.idetudiant==idrecherche])
    }
   
}