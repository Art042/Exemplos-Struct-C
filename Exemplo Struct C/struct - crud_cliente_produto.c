/*
Exeplo de Struc em C cadastro de Documentos
Desenvolvida no primeiro Periodo de SI - IFMA 2019.1
Por Artur
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct registro{
char clientes[15];
char documentos[30];
}registro;

    int main(){
    registro clientes[15];
    int cod_clientes[20];
    char nome[30], fone[20], endereco[50];
    int op, op2, i=0, j=0;
    int num_doc[30],data_pag[8], data_venc[8];
    float valor, juros;

    do{
        printf("\t\tMenu\nEscolha as opcoes a baixo\n1) Cadastrar Cliente\n2) Cadastrar Documentos\n3) Alterar informacoes sobre clientes\n4) Mostrar o Total de documentos de determinado cliente\n5) Sair");
        scanf("%d", &op);

        if(op==1){
            for(i=0; i<15; i++){
                printf("\nDigite o codio do cliente:\n");
                scanf("%d", &clientes[i]);
            }
                printf("Digite o nome do cliente: \n");
                scanf("%s", &nome.clientes[i]);
                fflush(stdin);
                printf("Digite o telefone do Cliente: \n")
                scanf("%s", &fone.clientes[i]);
                fflush(stdin);
                printf("Digite o endere�o do Cliente: \n")
                scanf("%s", &endereco.clientes[i]);
                fflush(stdin);

        }

        if(op==2){
            printf("Digite o numero de cadastro do cliente: \n");
            scanf("%d" &i);
            printf("Cliente[i]", clinte[i]);
            for(j=0; j<30; j++){
                printf("Cadastrar Documentos: \n");
                scanf("%d", &num_doc.documentos[j].clientes[i]);
            }
                    printf("Digite o valor do documento(mes dia ano): \n");
                    scanf("%f", &valor.documentos[j].clientes[i]);
                    printf("Digite a data do pagamento do documento (mes dia ano): \n");
                    scanf("%f", &data_pag.documentos[j].clientes[i]);
                    printf("Digite a data de vencimento do documento (mes dia ano): \n");
                    scanf("%f", &data_venc.documentos[j].clientes[i]);

                    if(data_pag>data_venc){
                        valor = valor*1.05;
                    }else{
                    valor = valor;
                    }
        }

        if(op==3){
            printf("Digite o codigo do cliente: \n");
            scanf("%d", &i);
            scanf("%s", clientes[i]);
          do{
            printf("Digite o que deseja alterar:\n");
            printf("1) Dados do cliente\n 2)Dados da documentacao\n3) Retornanr a Menu inicial.\n");

                if(op2==1){
                        printf("Digite o nome do cliente: \n");
                        scanf("%s", &nome.clientes[i]);
                        fflush(stdin);
                        printf("Digite o telefone do Cliente: \n")
                        scanf("%s", &fone.clientes[i]);
                        fflush(stdin);
                        printf("Digite o endere�o do Cliente: \n")
                        scanf("%s", &endereco.clientes[i]);
                        fflush(stdin);
                    }
                if(op==2){
                    printf("Digite o numero do Documento: \n");
                    scanf("%d", &j)
                    scanf("%s", &documentos[j].clientes[i]);
                    printf("Digite o valor do documento(mes dia ano): \n");
                    scanf("%f", &valor.documentos[j].clientes[i]);
                    printf("Digite a data do pagamento do documento (mes dia ano): \n");
                    scanf("%f", &data_pag.documentos[j].clientes[i]);
                    printf("Digite a data de vencimento do documento (mes dia ano): \n");
                    scanf("%f", &data_venc.documentos[j].clientes[i]);
                }
          }while()
        }

        if(op==4){
            printf("Digite o numero de cadastro do cliente: \n");
            scanf("%d" &i);
            printf("O cliente %s tem %d documentos cadastrados", nome.clientes, documentos[j+1].clientes);
        }

        }while(op!=5);

    return 0;
    }
