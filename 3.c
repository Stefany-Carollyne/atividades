int main() {
  int num1, num2, soma, subtracao, multiplicacao;
  printf("digite o primeiro numero");
  scanf("%i", &num1);
  printf("digite o segundo numero");
  scanf("%i", &num2);
  soma = num1 + num2;
  subtracao = num1 - num2;
  multiplicacao = num1 * num2;
  printf("A soma e: %i", soma);
  printf("A subtracao e: %i", subtracao);    
  printf("A multiplicacao e: %i", multiplicacao);
  return 0;
}
