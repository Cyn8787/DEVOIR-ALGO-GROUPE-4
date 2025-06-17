//somme total des montants par fatou mbengue
float sommemontant (struct facture tab[N]){
int i;

    float somme = 0;
    for (i = 0; i < N; i++) {
        somme += Tab[i].montant;
    }
    return somme;
}
//le montant minimal par fatou mbengue
float minmontant(struct facture tab[N]) {
    float min = tab[0].montant;
    for (int i = 1; i < N; i++) {
        if (tab[i].montant < min) {
            min = tab[i].montant;
        }
    }
    return min;
}
//le montant minimal par fatou mbengue
float maxmontant(struct facture tab[N]) {
    float max = tab[0].montant;
    for (int i = 1; i < N; i++) {
        if (tab[i].montant > max){
            max = tab[i].montant;
        }
    }
 return max;
}