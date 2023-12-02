 int main() {
  int A, B, C, q1, q2, q3, resultado;
  printf("Digite o valor de A");
  scanf("%i", &A);
  printf("Digite o valor de B");
  scanf("%i", &B);
  printf("Digite o valor de C");
  scanf("%i", &C);
  q1 = A * A;
  q2 = B * B;
  q3 = B * B;
  printf("o quadrado de A e: %i", q1);
  printf("o quadrado de B e: %i", q2);
  printf("o quadrado de C e: %i", q3);
    resultado = q1 + q2 + q3;
    printf("o resultado e: %i", resultado);

    return 0;
}
