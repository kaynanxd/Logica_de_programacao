#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
    float a, b, c, s, area;
    char d[20]; 

    printf("Digite os 3 segmentos do triangulo:\n");
    scanf("%f %f %f", &a, &b, &c);

    // Verificar se os segmentos formam um triângulo válido
    if (a + b > c && a + c > b && b + c > a) {
        // Calcular o semiperímetro
        s = (a + b + c) / 2;

        // Calcular a área usando a fórmula de Heron
        area = sqrt(s * (s - a) * (s - b) * (s - c));

        // Determinar o tipo do triângulo
        if (a == b && b == c) {
            sprintf(d, "equilateral"); // Armazena "equilateral" na variável d
        } else if (a == b || a == c || b == c) {
            sprintf(d, "isosceles");  // Armazena "isosceles" na variável d
        } else {
            sprintf(d, "scalene");   // Armazena "scalene" na variável d
        }

        // Imprimir os resultados
        printf("A area do triangulo é: %.2f, e ele e %s.\n", area, d);
    } else {
        printf("Os segmentos fornecidos não formam um triângulo válido.\n");
    }

    return 0;
}