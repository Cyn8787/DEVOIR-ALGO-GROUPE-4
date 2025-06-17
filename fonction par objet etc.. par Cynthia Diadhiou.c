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
    printf("veuillez saisir l'id de l'étudiant");
    scanf("%d",&r);
    etudiant=fopen("etudiant.txt","r+");
    while(!feof(personne,"%d %s %s %s", &tab[i].idetudiant,))
}