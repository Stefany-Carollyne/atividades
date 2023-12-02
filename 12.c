int main() {
  float temperatura_celsius, temperatura_fahrenheit;
  printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &temperatura_fahrenheit);
    temperatura_celsius = 5/9 * (temperatura_fahrenheit - 32);
    printf("A temperatura em Celsius é: %f", temperatura_celsius);
      return 0;
  }
