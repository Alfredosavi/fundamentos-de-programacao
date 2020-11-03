/* 1) Fazer um algoritmo para ler o salário de uma pessoa, o percentual de aumento e o
percentual de descontos. Os descontos incidem sobre o salário com aumento. Calcular o
novo salário e mostrá-lo na forma: salário de 1234 reais e 65 centavos.
Observações:
a) Orientar o usuário na forma como deve ser informado o percentual (por exemplo,
10 para 10% ou 0.1 para 10%), ou seja, como o programa espera que o valor seja
informado. Isso é importante para definir a fórmula.
b) Cálculos de percentual podem ser realizados por meio de regras de três. */
#include <stdio.h>

int main(void)
{
    float salario;
    float porcentual_aumento;
    float porcentual_desconto;
    float novo_salario;
    float novo_salario_desconto;
    int reais;
    int centavos;

    printf("Informe seu salario atual: ");
    scanf("%f", &salario);

    printf("Informe o porcentual de aumento ex (10 para 10%%): ");
    scanf("%f", &porcentual_aumento);

    printf("Informe o porcentual de descontos ex (10 para 10%%): ");
    scanf("%f", &porcentual_desconto);

    novo_salario = (porcentual_aumento * salario / 100) + salario;
    novo_salario_desconto = novo_salario - ((porcentual_desconto * novo_salario) / 100);

    reais = novo_salario_desconto;
    centavos = (novo_salario_desconto - reais) * 100;
    printf("Seu novo salario será de %d reais e %d centavos\n", reais, centavos);

    system("pause");
    return (0);

    /* Salario ---------> 100%
       Salario Novo ----> x %      Salario Novo = (%aumento * salario / 100) + salario.

       Novo_salario --------> 100%
       x (salario desconto) -> % desconto             Salario com desconto = Salario Novo com aumento - (%desconto * Novo Salario / 100); */
}
