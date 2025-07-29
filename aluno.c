#include <stdio.h>

void calcular_media()
{
    float nota1, nota2, nota3;
    float resultado;
    char nomeAluno[15];

    int qtdMaterias = 3;

    printf("Vamos calcular sua média?\n");
    printf("Digite seu nome!\n");
    scanf("%s", nomeAluno);
    printf("Digite sua primeira nota: \n");
    scanf("%f", &nota1);
    printf("Digite sua segunda nota: \n");
    scanf("%f", &nota2);
    printf("Digite sua terceira nota: \n");
    scanf("%f", &nota3);

    resultado = (float)(nota1 + nota2 + nota3) / qtdMaterias;

    printf("Sua Media é: %2.f", resultado);
}

void status()
{

    char nomeAluno[15];
    float media;

    printf("Vamos ver se você passou de ano?\n");
    printf("Digite seu nome!\n");
    scanf("%s", nomeAluno);
    printf("Digite sua Media: ");
    scanf("%f", &media);

    if (media <= 5)
    {
        printf("%s\n", nomeAluno);
        printf("Reprovado, media: %.2f", media);
    }
    else if (media > 5 && media < 7)
    {
        printf("%s\n", nomeAluno);
        printf("Recuperação, Media: %.2f", media);
    }
    else
    {
        printf("%s\n", nomeAluno);
        printf("PARABENS!!! NOTA MAXIMA, Media: %.2f", media);
    }
}

void sair()
{
    printf("Saindo....\n");
}

int main()
{

    int opcao;

    printf("Menu de Gerenciamento de estudante\n");
    printf("1. Calcular Media\n");
    printf("2. Determinar Status\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        calcular_media();
        break;
    case 2:
        status();
        break;
    case 3:
        sair();
        break;
    default:
        printf("Opção invalida");
        break;
    }
}