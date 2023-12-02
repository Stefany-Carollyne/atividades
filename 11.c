int main() {
  float temperatura_celsius, temperatura_fahrenheit;
  printf("digite a temperatura em Celsius: ");
  scanf("%f", &temperatura_celsius);
  temperatura_fahrenheit = (temperatura_celsius * 9/5) + 32;
  printf("A temperatura em Fahrenheit e: %f", temperatura_fahrenheit);
  return 0; 
}
