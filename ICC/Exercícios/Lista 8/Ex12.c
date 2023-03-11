/*
12. Faça uma função que receba como parâmetro um valor N inteiro e positivo, calcule e mostre o valor de E, 
conforme a fórmula a seguir:
E = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N!
*/
#include <stdio.h>
int fatorial(int N)
{
    int fat = 1;

    while (N > 0)
    {
        fat = fat * N;
        N--;
    }
    return fat;
}
int funcao(int N)
{
    float resp = 1;

    for (int i = 1; i <= N; i++)
    {   
        resp = resp + 1/(float)fatorial(i);
    }
}
int main()
{
    int N;

    printf("Insira o valor de N: ");
    scanf("%d", &N);

    printf("Resposta: %.2f\n", funcao(N));
}