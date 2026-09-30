#include <stdio.h>

int main()
{

    // Variáveis (int) - Fluxo de Estado
    int operador = 1; // Estado "Nova Estrutura"
    //int escolha = 0; 



    // Variáveis (float) - Renda
    float renda_mensal = 0;
    float total_renda = 0; 


    // Variáveis (float) - Gastos 
    float gastosAlimentacao = 0;
    float totalgastosAlimentacao = 0; 

    float gastosTransporte = 0;
    float totalgastosTransporte = 0; 

    float gastosLazer = 0;
    float totalgastosLazer = 0;

    float gastosSaude = 0;
    float totalgastosSaude = 0;

    float gastosOutros = 0;
    float totalgastosOutros = 0; 

    float totalgastos;

    // Variáveis (char) - Fluxo de Interação 
    char opcao[2]; 

    // Estados "operador"
    /*
    Operador = 1 --- Menu
    Operador = 2 --- Informar a renda mensal
    Operador = 3 --- Cadastrar gastos
    */

    while(operador != 0)
    {
    
        printf("========================================================================= \n");
        
        printf("Controle Financeiro \n");

        printf("\n");
    
        printf("1. Informar a renda mensal \n");
        printf("2. Cadastrar gastos \n");
        printf("3. Consultar gastos \n");
        printf("4. Consultar Situações  Financeiras \n");
        printf("5. Ver estatísticas \n");
        printf("6. Sair \n");

        printf("========================================================================= \n");

        printf("\n"); 

        // Variável (int)
        int valido = 0; 
        while (valido == 0)
        {
            opcao[0] = '\0'; 

            printf("Digita a Opção: ");
            scanf(" %s", &opcao);

            printf("\n");

            valido = 1;

            for(int i = 0; opcao[i] != '\0'; i++)
            {
                // Variável (char)
                char caractere = opcao[i];

                if( !(caractere >= '0' && caractere <= '9') )
                {
                    printf("Tente Novamente \n");

                    valido = 0;

                    break;
                }
            }    
        }
        
        if (valido == 1)
        {
            if (opcao[0] == '6')
            {
                printf("Até Mais \n");
                operador = 0;
            }
            else if (opcao[0] == '1')
            {
                // Variável (int)
                int sub_operador = 1;

                // Variável (char)
                char sub_opcao[2];

                while (sub_operador != 3)
                {
                    printf("\n=== GESTAO DE RENDA ===\n");

                    printf("1. Informar / Atualizar Renda \n");
                    printf("2. Consultar Renda \n");
                    printf("3. Voltar ao Menu Principal \n");
                    
                    // Variável (int)
                    int sub_valido = 0;
                    while(sub_valido == 0)
                    {

                        sub_opcao[0] = '\0'; 

                        printf("Escolha uma opcao: ");
                        scanf(" %s", &sub_opcao); 

                        printf("\n");

                        sub_valido = 1;

                        int j = 0;

                        while(sub_opcao[j] != '\0')
                        {
                            char sub_caractere = sub_opcao[j]; 

                            if( !(sub_caractere >= '0' && sub_caractere <= '9') )
                            {
                                printf("Tente Novamente \n");
                            
                                sub_valido = 0;

                                break;
                            }
                            j++; 
                        }
                    }

                    if(sub_valido == 1)
                    {

                        if(sub_opcao[0] == '3')
                        {
                            printf("Até Mais \n");
                            sub_operador = 3;
                        }
                        else if (sub_opcao[0] == '1')
                        {
                            //renda_mensal = 0;

                            // Variável (int)
                            int operadorRenda = 1; 

                            // Variável (char)
                            char opcaoRenda[2];

                            while (operadorRenda != 2)
                            {

                                printf("=== Menu Renda === \n");
                                
                                printf("1. Informar / Atualizar Renda \n");
                                printf("2. Sair \n");

                                int valida_menu_renda = 0;
                                while(valida_menu_renda == 0) 
                                {
                                    opcaoRenda[0] = '\0';  

                                    printf("Escolha a sua Opção: ");
                                    scanf(" %s", opcaoRenda);

                                    printf("\n"); 

                                    valida_menu_renda = 1;

                                    for(int k = 0; opcaoRenda[k] !=0 ; k++)
                                    {
                                        char caractereRenda = opcaoRenda[k];

                                        if ( !(caractereRenda >= '0' && caractereRenda <= '9') )
                                        {
                                            printf("Tente Novamente \n");

                                            valida_menu_renda = 0;

                                            break;
                                        }
                                    }
                                } 

                                if(valida_menu_renda == 1){

                                    if(opcaoRenda[0] == '2')
                                        {
                                            printf("Até Mais \n"); 
                                            operadorRenda = 2; 
                                            
                                        }
                                    
                                    else if(opcaoRenda[0] == '1'){    
                                    
                                        int validaRenda = 0;
                                        while (validaRenda == 0)
                                        {
                                        

                                            printf("Informe a sua renda: ");
                                            scanf("%f", &renda_mensal);

                                            printf("\n");

                                            validaRenda = 1;

                                            if(renda_mensal < 0)
                                            {
                                                printf("Tente Novamente \n");

                                                validaRenda = 0; 
                                            }
                                            else
                                            {
                                            total_renda += renda_mensal;

                                            printf("Adicionada a Renda \n");

                                            validaRenda = 1;
                                            }
                                        }
                                        operadorRenda = 2; 
                                    }
                                    else
                                    {
                                        printf("Opção Inválida \n");
                                        operadorRenda = 1;
                                    }
                                }

                            }
                             
                        }
                        else if (sub_opcao[0] = '2')
                        {
                            //renda_mensal = 0;

                            // Variável (int)
                            int operadorConsultaRenda = 1; 

                            // Variável (char)
                            char opcaoConsultarRenda[2];

                            while (operadorConsultaRenda != 2)
                            {

                                printf("=== Menu Consultar Renda === \n");
                                
                                printf("1. Consultar Renda \n");
                                printf("2. Sair \n");

                                int validaConsultarRenda = 0;
                                while(validaConsultarRenda == 0) 
                                {
                                    opcaoConsultarRenda[0] = '\0';  

                                    printf("Escolha a sua Opção: ");
                                    scanf(" %s", opcaoConsultarRenda);

                                    printf("\n"); 

                                    validaConsultarRenda = 1;

                                    for(int l = 0; opcaoConsultarRenda[l] !=0 ; l++)
                                    {
                                        char caractereConsultarRenda = opcaoConsultarRenda[l];

                                        if ( !(caractereConsultarRenda >= '0' && caractereConsultarRenda <= '9') )
                                        {
                                            printf("Tente Novamente \n");

                                            validaConsultarRenda = 0;

                                            break;
                                        }
                                    }
                                } 

                                if(validaConsultarRenda == 1)
                                {

                                    if(opcaoConsultarRenda[0] == '2')
                                        {
                                            printf("Até Mais \n"); 
                                            operadorConsultaRenda = 2; 
                                            
                                        }
                                    
                                    else if(opcaoConsultarRenda[0] == '1')
                                    {    
                                        opcaoConsultarRenda[0] = '\0';

                                        printf("Sua Renda atual: R$ %.2f\n", total_renda);

                                        printf("\n");

                                        printf("Digite 2 para sair \n");
                                        scanf(" %s", opcaoConsultarRenda);

                                        operadorConsultaRenda = 2;
                                    }
                                    else
                                    {
                                        printf("Opção Inválida \n"); 
                                        operadorConsultaRenda = 1;
                                    }
                                }
                            }
                        }
                        else
                        {
                            printf("Opção Inválida \n");
                            sub_operador = 1;
                        }
                    }
                }
                  operador = 2;
            }
            else if(opcao[0] == '2')
            {
                // Variável (int)
                int sub_operador2 = 1;

                // Variável (char)
                char sub_opcao2[2];

                while (sub_operador2 != 6)
                {
                    printf("\n=== Menu de Gastos ===\n");

                    printf("1. Alimentação \n");
                    printf("2. Transporte \n");
                    printf("3. Lazer \n");
                    printf("4. Saúde \n");
                    printf("5. Outros \n");
                    printf("6. Saída \n"); 
                    
                    // Variável (int)
                    int sub_valido2 = 0;
                    while(sub_valido2 == 0)
                    {

                        sub_opcao2[0] = '\0'; 

                        printf("Escolha uma opcao: ");
                        scanf(" %s", &sub_opcao2); 

                        printf("\n");

                        sub_valido2 = 1;

                        int a = 0;

                        while(sub_opcao2[a] != '\0')
                        {
                            char sub_caractere2 = sub_opcao2[a]; 

                            if( !(sub_caractere2 >= '0' && sub_caractere2 <= '9') )
                            {
                                printf("Tente Novamente \n");
                            
                                sub_valido2 = 0;

                                break;
                            }
                            a++; 
                        }
                    }

                    if(sub_valido2 == 1)
                    {

                        switch(sub_opcao2[0])
                        {
                            case '1':
                            {
                                printf("=== Alimentação === \n");

                                int validaGastosAlimentacao = 0;
                                while (validaGastosAlimentacao == 0)
                                {
                                        
                                    printf("Informe o gasto da sua alimentação: ");
                                    scanf("%f", &gastosAlimentacao);

                                    printf("\n");

                                    validaGastosAlimentacao = 1;

                                    if(gastosAlimentacao < 0)
                                    {
                                        printf("Tente Novamente \n");

                                        validaGastosAlimentacao = 0; 
                                    }
                                    else
                                    {
                                        totalgastosAlimentacao += gastosAlimentacao;

                                        printf("Adicionado gasto em alimentação \n");

                                        validaGastosAlimentacao = 1;
                                    }
                                }
                                sub_operador2 = 1;
                            break;
                            }

                            case '2':
                            {
                                printf("=== Transporte === \n");

                                int validaGastosTransporte = 0;
                                while (validaGastosTransporte == 0)
                                {
                                        
                                    printf("Informe o gasto da sua alimentação: ");
                                    scanf("%f", &gastosTransporte);

                                    printf("\n");

                                    validaGastosTransporte = 1;

                                    if(gastosTransporte < 0)
                                    {
                                        printf("Tente Novamente \n");

                                        validaGastosTransporte = 0; 
                                    }
                                    else
                                    {
                                        totalgastosTransporte += gastosTransporte;

                                        printf("Adicionado gasto em Transporte \n");

                                        validaGastosTransporte = 1;
                                    }
                                }
                            
                                sub_operador2 = 1;
                            break;
                            }

                            case '3':
                            {
                                printf("=== Lazer === \n");

                                int validaGastosLazer = 0;
                                while (validaGastosLazer == 0)
                                {
                                        
                                    printf("Informe o gasto da sua alimentação: ");
                                    scanf("%f", &gastosLazer);

                                    printf("\n");

                                    validaGastosLazer = 1;

                                    if(gastosLazer < 0)
                                    {
                                        printf("Tente Novamente \n");

                                        validaGastosLazer = 0; 
                                    }
                                    else
                                    {
                                        totalgastosLazer += gastosLazer;

                                        printf("Adicionado gasto em alimentação \n");

                                        validaGastosLazer = 1;
                                    }
                                }
                                sub_operador2 = 1;
                            break;
                            }

                            case '4':
                            {
                                printf("=== Saúde === \n");

                                int validaGastosSaude = 0;
                                while (validaGastosSaude == 0)
                                {
                                        
                                    printf("Informe o gasto da sua alimentação: ");
                                    scanf("%f", &gastosSaude);

                                    printf("\n");

                                    validaGastosSaude = 1;

                                    if(gastosSaude < 0)
                                    {
                                        printf("Tente Novamente \n");

                                        validaGastosSaude = 0; 
                                    }
                                    else
                                    {
                                        totalgastosSaude += gastosSaude;

                                        printf("Adicionado gasto em alimentação \n");

                                        validaGastosSaude = 1;
                                    }
                                }
                                sub_operador2 = 1;
                            break;
                            }

                            case '5':
                            {
                                printf("=== Outros === \n");

                                int validaGastosOutros = 0;
                                while (validaGastosOutros == 0)
                                {
                                        
                                    printf("Informe o gasto da sua alimentação: ");
                                    scanf("%f", &gastosOutros);

                                    printf("\n");

                                    validaGastosOutros = 1;

                                    if(gastosOutros < 0)
                                    {
                                        printf("Tente Novamente \n");

                                        validaGastosOutros = 0; 
                                    }
                                    else
                                    {
                                        totalgastosOutros += gastosOutros;

                                        printf("Adicionado gasto em alimentação \n");

                                        validaGastosOutros = 1;
                                    }
                                }
                                sub_operador2 = 1;
                            break;
                            }

                            case '6':
                            {
                                printf("Até Mais \n"); 

                                sub_operador2 = 6;
                            break;
                            }

                            default:
                                printf("Opção Inválida \n");
                                sub_operador2 = 1;
                            break; 
                        }
                    }
                }
            }
            else if(opcao[0] == '3')
            {
                opcao[0] = '\0'; 

                printf("========================================================================= \n");

                printf("=== Consultar gastos === \n");

                printf("\n");

                printf("Alimentação - R$: %.2f \n", totalgastosAlimentacao);
                printf("Transporte - R$: %.2f \n", totalgastosTransporte);
                printf("Lazer - R$: %.2f \n", totalgastosLazer);
                printf("Saúde - R$: %.2f \n", totalgastosSaude);
                printf("Outros - R$: %.2f \n", totalgastosOutros);

                totalgastos = totalgastosAlimentacao + totalgastosTransporte + totalgastosLazer + totalgastosSaude + totalgastosOutros;

                printf("========================================================================= \n");
                
                printf("Resultado - R$: %.2f \n", totalgastos);

                printf("========================================================================= \n");
                printf("Digite 1 para sair: ");
                scanf(" %s", opcao);

                operador = 1; 

            }   
            else if (opcao[0] == '4')
            {
                opcao[0] = '\0';
    
                printf("========================================\n");
                printf("     Sistuação Financeira    \n");
                printf("========================================\n");

                printf("-> Maior foco de despesa: ");
    
                if (totalgastosAlimentacao >= totalgastosTransporte && 
                    totalgastosAlimentacao >= totalgastosLazer && 
                    totalgastosAlimentacao >= totalgastosSaude && 
                    totalgastosAlimentacao >= totalgastosOutros) 
                {
                    printf("Alimentacao (R$ %.2f)\n", totalgastosAlimentacao);
                }
                else if (totalgastosTransporte >= totalgastosAlimentacao && 
                    totalgastosTransporte >= totalgastosLazer && 
                    totalgastosTransporte >= totalgastosSaude && 
                    totalgastosTransporte >= totalgastosOutros) 
                {
                    printf("Transporte (R$ %.2f)\n", totalgastosTransporte);
                }
                else if (totalgastosLazer >= totalgastosAlimentacao && 
                    totalgastosLazer >= totalgastosTransporte && 
                    totalgastosLazer >= totalgastosSaude && 
                    totalgastosLazer >= totalgastosOutros) 
                {
                    printf("Lazer (R$ %.2f)\n", totalgastosLazer);
                }
                else if (totalgastosSaude >= totalgastosAlimentacao && 
                    totalgastosSaude >= totalgastosTransporte && 
                    totalgastosSaude >= totalgastosLazer && 
                    totalgastosSaude >= totalgastosOutros) 
                {
                    printf("Saude (R$ %.2f)\n", totalgastosSaude);
                }
                else 
                {
                printf("Outros (R$ %.2f)\n", totalgastosOutros);
                }

                
                float totalGeral = totalgastos;
    
                if (totalGeral > 10000.00) 
                {
                    printf("ALERTA: Cuidado! O teu total de gastos esta elevado este mes!\n");
                } else {
                    printf("STATUS: Financas sob controle. Continue assim!\n");
                }

                printf("========================================\n");
                printf("Digite 1 para retornar ao menu: ");
                scanf(" %1s", opcao);
                operador = 1;
            }
            else if (opcao[0] == '5')
            {
                opcao[0] = '\0';
    
                printf("========================================\n");
                printf("     === Estatísticas ===     \n");
                printf("========================================\n");

                
                float totalGeral = totalgastos;

                if (totalGeral > 0) 
                {
                
                    printf("-> Percentual de Comprometimento:\n");
                    printf("Alimentação: %.2f%%\n", (totalgastosAlimentacao / totalGeral) * 100);
                    printf("Transporte:  %.2f%%\n", (totalgastosTransporte / totalGeral) * 100);
                    printf("Lazer:       %.2f%%\n", (totalgastosLazer / totalGeral) * 100);
                    printf("Saúde:       %.2f%%\n", (totalgastosSaude / totalGeral) * 100);
                    printf("Outros:      %.2f%%\n", (totalgastosOutros / totalGeral) * 100);
                    printf("----------------------------------------\n");
                    printf("Alerta de Cautela: \n");
        
                    if ((totalgastosAlimentacao / totalGeral) > 0.5) 
                    {
                        printf("AVISO: Alimentação consome mais de 50%% do teu dinheiro!\n");
                    }   
                    else if ((totalgastosLazer / totalGeral) > 0.4) 
                    {
                        printf("AVISO: Cuidado! Lazer esta a pesar muito no orçamento.\n");
                    } 
                    else 
                    {
                        printf("STATUS: Distribuição de gastos equilibrada.\n");
                    }   
                }    
                else 
                {
                    printf(" Não há gastos registados para gerar estatísticas.\n");
                }

                printf("========================================\n");
                printf("Digite 1 para retornar ao menu: ");
                scanf(" %1s", opcao);
                operador = 1;
            }
            else
            {
                printf("Opção Inválida \n");
                operador = 1;
            }
        }
    }
    return 0; 
}