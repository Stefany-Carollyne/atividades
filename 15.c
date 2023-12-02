int main() {
  float km, litros, consumo;
   printf("Digite os km rodados: ");
    scanf("%f", &km);
    printf("Digite a quantidade de litros de combustível: ");
    scanf("%f", &litros);
    consumo = km / litros;
    printf("O consumo e: %f", consumo);
    return 0;
}
