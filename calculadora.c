/*Pedro Paulo Ferreira Pinto
O código inicia declarando as variáveis, depois solicita a entrada do usuário com a opção desejada, que precisa ser entre 1 e 6. Depois, utiliza os if, else if e else
para recolher as entradas específicas para cada operação. Ao fim, mostra qual conta fazer para cada operação desejada, com os valores n1 e n2 inseridos pelo usuário.
As últimas linhas dão o resultado e permitem ao usuário fazer nova operação ou sair. Tive alguma dificuldade para fazer, mas um amigo desenvolvedor me tirou as
dúvidas*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int operacao;
    float n1, n2, resultado;
    char controle;

    do{
        do
        {
            printf("\nQual operação você deseja?\n");
            printf("1. Adição\n2. Subtração\n3. Multiplicação\n4. Divisão\n5. Potenciação\n6. Radiciação\n\n");
            scanf("%d", &operacao);

            if(operacao > 6 || operacao < 1)
            {
                printf("\nA operação é inválida, digite um valor entre 1 e 6.\n\n");
            }
        } while(operacao > 6 || operacao < 1);

        if (operacao == 6)
        {
            printf("\nDigite o valor a ser efetuada a radiciação: ");
            scanf("%f", &n1);
        }
        else if (operacao == 5)
        {
            printf("\nDigite a base da potenciação: ");
            scanf("%f", &n1);
            printf("\nDigite o expoente da potenciação ");
            scanf("%f", &n2);
        }
        else
        {
            do
            {
                printf("\nEscolha o primeiro valor: ");
                scanf("%f", &n1);
                printf("\nEscolha o segundo valor: ");
                scanf("%f", &n2);

                if (operacao == 3 && n2 == 0)
                {
                    printf("\nOperação inválida. Não é possível dividir por 0.\n");
                }
            } while(operacao == 3 && n2 == 0);
        }

        switch(operacao)
        {
            case 1:
                resultado = n1+n2;
                break;
            case 2:
                resultado = n1-n2;
                break;
            case 3:
                resultado = n1*n2;
                break;
            case 4:
                resultado = n1/n2;
                break;
            case 5:
                resultado = pow(n1, n2);
                break;
            case 6:
                resultado = sqrt(n1);
                break;
        }

        printf("\nO seu resultado é: %.02f \n\n", resultado);

        printf("Pressione 0 para sair ou qualquer tecla para reiniciar: \n\n");
        scanf(" %c", &controle);
    } while(controle != '0');
}
