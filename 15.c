int main() {
  float km, litros, consumo;
  printf("digite os km rodados");
  scanf("%f", &km);
  printf("digite a quantidade de litros de combustivel: ");
  scanf("%f", &litros);
  consumo = km / litros;
  printf("O consumo e: %f", consumo);
  return 0;
}
