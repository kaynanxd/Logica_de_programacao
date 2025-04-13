/*1) Faça um programa que peça ao usuário para entrar com 7
números inteiros e armazene-os em um vetor. Peça também para
ele entrar com outro número inteiro X e determine se X está no
vetor e em que posição.

2) Considerando o vetor da questão anterior, verifique se os
números estão em ordem crescente. Caso contrário, ordene e
imprima o vetor.
*/

import java.util.Arrays;
import java.util.Scanner;

public class Exercicio3Vetor {

    public static void main(String[]args){

        Scanner scanner = new Scanner(System.in);

        int[] numeros = new int[7];

        System.out.println("Digite os 7 numeros");

        for(int i=0;i<numeros.length;i++){
            System.out.print("Número " + (i + 1) + ": ");
            numeros[i] = scanner.nextInt();
        }

        boolean emOrdem = true;
        for (int i = 0; i < numeros.length - 1; i++) {
            if (numeros[i] > numeros[i + 1]) {
                emOrdem = false;
                break;
            }
        }

        if (emOrdem) {
            System.out.println("\nOs números já estão em ordem crescente.");
        } else {
            System.out.println("\nOs números não estão em ordem crescente.");
            Arrays.sort(numeros);
            System.out.println("Vetor ordenado:");
            for (int num : numeros) {
                System.out.print(num + " ");
            }
            System.out.println();
        }

        System.out.println("digite o numero q deseja procurar : ");
        int x = scanner.nextInt();

        boolean encontrado = false;
        int posicao = -1;

        for (int i = 0; i < numeros.length; i++) {
            if (numeros[i] == x) {
                encontrado = true;
                posicao = i+1;
                break;
            }
        }
        
        if (encontrado) {
            System.out.println("O número " + x + " está no vetor, na posição " + posicao + ".");
        } else {
            System.out.println("O número " + x + " não foi encontrado no vetor.");
        }

        scanner.close();
    }
    
}
