int main() {
float base_maior, base_menor, altura, area; 
printf("digite o comprimento da base maior do trapezio");
scanf("%f", &base_maior);
printf("digite o comprimento da base menor do trapezio: "); 
scanf("%f", &base_menor);
printf("digite a altura do trapezio: ");
scanf("%f", &altura);
area = (base_maior + base_menor) * altura / 2.0;
printf("A area do trapezio é: %f", area);
return 0;
}
