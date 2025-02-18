#include <stdio.h>
#define qtd 2
//chamada de funcoes
void leDatas();
int calculoDias(int dia, int mes, int ano);
int diferencaDias();
//struct das datas
typedef struct{
    int dia, mes, ano, dias;
} Data;
//variaveis globais
Data data[qtd];

int main() {
    //le as datas
    leDatas();
    //chama a funcao que calcula a diferenca e imprime o resultado
    printf("Diferenca de dias: %d", diferencaDias());
    return 0;
}

//calcula o total de dias de cada data
int calculoDias(int dia, int mes, int ano){
    return dia+(mes*30)+(ano*365);
}

//le as datas, armazena e chama a funcao de calculo de dias totais
void leDatas(){
    for(int i=0; i<qtd; i++) {
        //le as datas
        printf("Insira uma data(D M A): ");
        scanf("%d %d %d", &data[i].dia, &data[i].mes, &data[i].ano);
        //calcula o total de dias da data
        data[i].dias=calculoDias(data[i].dia, data[i].mes, data[i].ano);
    }
}

//calcula a diferenca de dias entre a data maior e a menor
int diferencaDias(){
    if(data[0].dias>data[1].dias) {
        return data[0].dias-data[1].dias;
    } else {
        return data[1].dias-data[0].dias;
    }
}
