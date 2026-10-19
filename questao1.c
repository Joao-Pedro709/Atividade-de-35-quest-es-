#include <stdio.h>

int main(){
    float nota_1;
    float nota_2;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota_1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota_2);

    float media = 0;

    media = (nota_1 + nota_2)/2;

    printf("A sua nota final foi %2.f", media);
}
