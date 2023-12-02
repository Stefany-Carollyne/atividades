int main() {
  float num1, num2, num3, soma, subtracao, multiplicacao,divisao;
  printf("digite o primeiro numero: ");
  scanf("%f", &num1);
  printf("digite o segundo numero: ");
  scanf("%f", &num2);
  printf("digite o terceiro numero");
  scanf("%f", &num3);
  soma = num1 + num2 + num3;
  subtracao = num1 - num2 - num3;
  multiplicacao = num1 * num2 * num3;
  divisao = num1 / num2 / num3;
  printf("A soma e: %f", soma);
  printf("A subtracao e: %f", subtracao);
  printf("A multiplicacao e: %f", multiplicacao);
  printf("A divisao e: %f", divisao);
  return 0;
}
