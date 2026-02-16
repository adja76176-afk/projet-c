
#include <stdio.h>
int main() {
    int x,n,somme=0,cpt=0;
    float moy;
    do{
printf("saisir n entier");
scanf("%d", &n);
    }while(n<0);
    for(int i=0;i<n;i++){
        do{
            puts("veuillez saisir un entier negatif");
            scanf("%d", &x);
        }while(x>0);
         }
        if (x%2==0){
            somme+=x;
            cpt++;
        }

    moy=somme/cpt;
    printf("la moyenne des nombres pairs est %d ",moy);
return 0;
}

