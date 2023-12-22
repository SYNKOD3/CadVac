#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	int num, idade, nvac;
	int confcad = 1;
	int confend = 1;
	int decisao = 777;
	int vacinas = 0;
	int VarLoop = 1;
	char vacfalt[50], nome[50], cpf[50], telefone[50], cep[50], rua[50], ncasa[50], bairro[50];
	
	setlocale(LC_ALL,"Portuguese");
 
	while (VarLoop == 1) {
		system("cls");
		printf("--------------------------------------------------------------------------------\n");
		printf("\t\t>>> CARTEIRA DE SAÚDE DA CRIANÇA <<<\n");
		printf("--------------------------------------------------------------------------------\n");
		printf("\n");
		printf ("SEJA BEM-VINDO, DIGITE A OPÇÃO QUE DESEJA REALIZAR:\n");
		printf("\n");
		printf("1 - Incluir os dados de identificação da criança;\n");
		printf("2 - Incluir o endereço da criança;\n");
		printf("3 - Incluir o registro das vacinas da criança;\n");
		printf("4 - Apagar todos os registros da criança;\n");
		printf("5 - Listar todos os dados da CSC;\n");
		printf("6 - Sair do Programa;\n");
		printf("\n\n\nFeito por Thiago Rodrigues\n");
		printf("________________________________________________________________________________\n"); 	
		scanf("%d", &num);
	 
		switch(num){
			case 1:	
				decisao = 2;
				confcad = 0;
			 	
				system("cls");
				printf("-----------------------------------------------------------------------\n");
				printf("\t\t>>> INICIANDO CADASTRO DE DADOS <<<\n");
				printf("-----------------------------------------------------------------------\n");
				fflush(stdin);
				printf("Digite o nome da criança: ");
				gets(nome);
				fflush(stdin);
				printf("Digite o CPF da criança: ");
				gets(cpf);
				fflush(stdin);
				printf("Digite a idade da criança: ");
				scanf("%d", &idade);
				fflush(stdin);
				printf("Telefone dos pais ou responsável: ");
				scanf(" %s", &telefone);
			break;
			 
			case 2:	
				decisao = 2;		
				confend = 0;
				
				system("cls");
				printf("-----------------------------------------------------------------------\n");
				printf("\t>>> INICIANDO CADASTRO DE ENDEREÇO - FSA/BA <<<\n");
				printf("-----------------------------------------------------------------------\n\n");
				fflush(stdin);
				printf("Digite o CEP do local onde a criança reside: ");
				scanf("%s", &cep);
				fflush(stdin);
				printf("Digite o nome do bairro onde a criança reside: ");
				gets(bairro);
				fflush(stdin);
				printf("Digite o nome da rua onde a criança reside: ");
				gets(rua);
				fflush(stdin);
				printf("Digite o número da casa onde a criança reside: ");
				scanf(" %s", &ncasa);
			break;
			
			case 3:					
				decisao = 2;	
				
				system("cls");
				printf("-----------------------------------------------------------------------\n");
				printf("\t\t>>> INICIANDO VERIFICAÇÃO DE VACINAS <<<\n");
				printf("-----------------------------------------------------------------------\n\n");
				printf("A criança já tomou todas as vacinas disponíveis para a idade dela até o \n momento? 1 -> SIM / 2 -> NÃO\n");
				scanf("%d", &vacinas);
				
				if (vacinas == 1){
					printf("Parabéns, sua caderneta está atualizada, aguarde por novas campanhas de vacinação!");
				} 
				
				if (vacinas == 2){
					printf("\nQuantas vacinas faltam a criança tomar? ");
					scanf("%d", &nvac);
					fflush(stdin);	
					printf("\nCite abaixo as vacinas que a criança ainda não tomou para ser avisado \n assim que disponíveis:\n");
					gets(vacfalt);
					fflush(stdin);
				}
				
				if (vacinas > 2){
					printf("OPÇÃO INVÁLIDA, ESCOLHA 1 OU 2!");
					printf("\a");
				}
				
				if (vacinas == 0){
					printf("OPÇÃO INVÁLIDA, ESCOLHA 1 OU 2!");
					printf("\a");
				}
			break;
			
			case 4:
			    system("cls");
			    printf("-----------------------------------------------------------------------\n");
			    printf("\t\t>>> INICIANDO PROCESSO DE REMOÇÃO DE DADOS <<<\n");
			    printf("-----------------------------------------------------------------------\n\n");
			    printf("Deseja realmente apagar todos os registros da criança? 1 -> SIM / 2 -> NÃO\n");
			    scanf("%d", &decisao);
			    
			    if (decisao == 1){			        
			        printf("\n\n");
			        printf("\t\t>>> TODOS OS REGISTROS FORAM APAGADOS! <<<\n");
			    } 
			    
			    if (decisao == 2) {
			        printf("\nNenhum registro foi deletado\n");
			    }
			    
			    if (decisao == 0) {				
			        printf("\nVOCÊ BUGOU O SISTEMA '-', volte novamente e escolha 1 OU 2 para desbugar!\n");
			        printf("\a");
			    }
			    
			    if (decisao > 2){
			        printf("\nVOCÊ BUGOU O SISTEMA '-', volte novamente e escolha 1 OU 2 para desbugar!\n");
			        printf("\a");
			    }
			break;				
				
			case 5:
				system("cls");
				printf("-----------------------------------------------------------------------\n");
				printf("\t\t>>> EXIBINDO DADOS CADASTRAIS <<<\n");
				printf("-----------------------------------------------------------------------\n\n");
				
				if (decisao == 1 || decisao == 777){
					printf("NOME: Dados não cadastrados\n");
					printf("CPF: Dados não cadastrados\n");
					printf("IDADE: Dados não cadastrados\n");
					printf("TELEFONE DO RESPONSÁVEL: Dados não cadastrados\n");
					printf("\nOs dados de residência dessa criança ainda não foram cadastrados!");
					printf("\n\n\t>>> NENHUM REGISTRO DE VACINAÇÃO FOI ENCONTRADO <<<\n");
				}  
				
				if (decisao == 2 && confcad == 0 && confend == 1){					 
					printf("NOME:%s\n", nome);
					printf("CPF:%s\n", cpf);
					printf("IDADE:%d\n", idade);
					printf("TELEFONE DO RESPONSÁVEL:%s\n", telefone);
					printf("\nOs dados de residência dessa criança ainda não foram cadastrados!");

					if (vacinas == 1){
						printf("\nA criança possui todos os registros de vacinas atualizados!\n");
					}									
					if (vacinas == 2){
						printf("\nA criança ainda precisa tomar %d vacinas, sendo elas %s\n", nvac, vacfalt);					
					} 						
					if (vacinas == 0) {
						printf("\n\n\t>>> NENHUM REGISTRO DE VACINAÇÃO FOI ENCONTRADO <<<\n");
					}
				}
				
				if (decisao == 2 && confcad == 0 && confend == 0){
					printf("NOME:%s\n", nome);
					printf("CPF:%s\n", cpf);
					printf("IDADE:%d\n", idade);
					printf("TELEFONE DO RESPONSÁVEL:%s\n", telefone);
					printf("\nEsta criança reside na %s em residência de número %s, situada\nno bairro %s, de CEP %s.\n", rua, ncasa, bairro, cep);

					if (vacinas == 1){
						printf("\nA criança possui todos os registros de vacinas atualizados!\n");
					}									
					if (vacinas == 2){
						printf("\nA criança ainda precisa tomar %d vacinas, sendo elas %s\n", nvac, vacfalt);					
					} 						
					if (vacinas == 0) {
						printf("\n\n\t>>> NENHUM REGISTRO DE VACINAÇÃO FOI ENCONTRADO <<<\n");
					}
				}
			break;
				
			case 6:
				system("cls");
				VarLoop = 0;
				printf("-----------------------------------------------------------------------\n");
				printf("\t\t\t>>> DESLIGANDO SISTEMAS... <<<\n");
				printf("-----------------------------------------------------------------------\n");
			break;
			
			default:
				printf("\t\t>>> OPÇÃO INVÁLIDA, TENTE NOVAMENTE! <<<");
				printf("\a");
		}
	
		printf("\n-----------------------------------------------------------------------\n");
		printf("\tSucesso na operação, pressione ENTER para continuar...\n");
		printf("-----------------------------------------------------------------------\n");
		getchar();
		system("pause");
	}
	
	return (0);
}
