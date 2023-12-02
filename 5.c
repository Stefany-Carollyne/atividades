float main() {
  float num1, num2, soma, subtracao, multiplicacao,divisao;
  printf("digite o primeiro numero");
  scanf("%f", &num1);
  printf("digite o segundo numero");
  scanf("%f", &num2);
  soma = num1 + num2;
  subtracao = num1 - num2; 
  multiplicacao = num1 * num2;
  divisao = num1 / num2;
  printf("a soma e: %f", soma);
  printf("a subtracao e: %f", subtracao);
  printf("a multiplicacao e: %f", multiplicacao);
  printf("a divisao e: %f", divisao);
    return 0;
}
