/*
Exeplo de Struc em C cadastro de Funcionarios
Desenvolvida no primeiro Periodo de SI - IFMA 2019.1
Por Artur
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    char nome[20];
    float vendas[3];
    int pontos[3];
    float tpontos;
}funcionarios;

int main(){
    float total=0;
    int nfun;
    int i=0,j=0;
    int maior=0,emp=0,emp1=0,emp2=0;
    char mes[3][20]={{"novembro"},{"dezembro"},{"janeiro"}};
    printf("Digite o numero de funcionarios temporarios contratados: \n");
    scanf("%d",&nfun);
    funcionarios fun[nfun];
    //Coleta Nome e o total de cada mes
    for(i=0;i<nfun;i++){
        printf("Nome: \n");
        scanf("%s",&fun[i].nome);
        for(j=0;j<3;j++){
            printf("Total %s: ",mes[j]);
            scanf("%f",&fun[i].vendas[j]);
            //Soma logo o total de vendas
            total+=fun[i].vendas[j];
        }
    }
    //total de pontos
    for(i=0;i<nfun;i++){
        fun[i].tpontos=0;
        for(j=0;j<3;j++){
           fun[i].tpontos+=fun[i].vendas[j];
        }
    }
    //Soma do total de pontos a cada mes
    for(i=0;i<nfun;i++){
        fun[i].pontos[0]=fun[i].vendas[0];
        fun[i].pontos[1]=fun[i].vendas[1]+fun[i].vendas[0];
        fun[i].pontos[2]=fun[i].vendas[2]+fun[i].vendas[1]+fun[i].vendas[0];
    }
    //Maior pontua�ao ou empate
    for(i=1;i<nfun;i++){
        if(fun[i].tpontos>fun[maior].tpontos){
            maior=i;
            emp=0;
        }else if(fun[i].tpontos==fun[maior].tpontos){
            emp=1;
            emp1=maior;
            emp2=i;
        }
    }
    //Imprime os pontos de cada funcionario durante cada mes
    for(j=0;j<3;j++){
        printf("%s\n",mes[j]);
        for(i=0;i<nfun;i++){
            printf("%s: %d pontos\n",fun[i].nome,fun[i].pontos[j]/100);
        }
    }
    //Imprime o/os /funionario/os
    if(emp==0){
        printf("Melhor funcionario: %s\n\n",fun[maior].nome);
    }else if(emp==1){
        printf("Melhores funcionarios: %s & %s\n\n",fun[emp1].nome,fun[emp2].nome);
    }
    //Imprime o total de vendas
    printf("Total %.2f reais",total);
    return 0;
}
