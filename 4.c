int main() {
  int num1, num2, num3, soma, subtracao, multiplicacao;
  printf("digite o primeiro numero");
  scanf("%i", &num1);
  printf("digite o segundo numero");
  scanf("%i", &num2);
  printf("digite o terceiro numero");
  scanf("%i", &num3);
  soma = num1 + num2 + num3;
  subtracao = num1 - num2 - num3;
  multiplicacao = num1 * num2 * num3;
  printf("A soma e: %i", soma);
  printf("A subtração e: %i", subtracao);
    printf("A multiplicação e:%i", multiplicacao);
  return 0;
}
