#include<stdio.h>
#include<math.h>

int main(){

    int codPrato, codSobremesa, codBebida, totalCalorias = 0;

        printf("--------------Cardapio--------------");
         printf("\nPratos \t\t\t 1- Vegetariano \n\t\t\t 2- Peixe \n\t\t\t 3- Frango \n\t\t\t 4- Carne");

         printf("\nDigite o codigo do prato:");
         scanf("%d", &codPrato);

    switch(codPrato){
        case 1:
            totalCalorias = 180;
            break;
        case 2:
            totalCalorias = 230;
            break;
        case 3:
            totalCalorias = 250;
            break;
        case 4:
            totalCalorias = 350;
            break;

        default:
        printf("Codigo do prato invalido - siga para a sobremesa");
    }

        printf("\nSobremesa \t\t\t 1- Abacaxi \n\t\t\t 2- Sorvete Diet \n\t\t\t 3- Mousse Diet \n\t\t\t 4- Mousse Chocolate");

         printf("\nDigite o codigo da Sobremesa:");
         scanf("%d", &codSobremesa);


    switch(codSobremesa){
        case 1:
            totalCalorias += 75;
            break;
        case 2:
            totalCalorias += 110;
            break;
        case 3:
            totalCalorias += 170;
            break;
        case 4: 
            totalCalorias += 200;
            break;

        default:
        printf("Codigo do prato invalido - siga para a Bebida");
    }

        printf("\nBebida \t\t\t 1- Chá \n\t\t\t 2- Suco de Laranja \n\t\t\t 3- Suco de Melão \n\t\t\t 4- Refrigerante Diet");

         printf("\nDigite o codigo da Bebida:");
         scanf("%d", &codBebida);


        switch(codSobremesa){
        case 1:
            totalCalorias += 20;
            break;
        case 2:
            totalCalorias += 70;
            break;
        case 3:
            totalCalorias += 100;
            break;
        case 4: 
            totalCalorias += 65;
            break;

            default:
            printf("Codigo do suco invalido");
        }

        printf ("Total de calortias da refeiçao: %d", totalCalorias);

}