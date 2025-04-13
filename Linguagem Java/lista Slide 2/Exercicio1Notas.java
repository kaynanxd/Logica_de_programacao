//Faça um programa que receba dois números reais (double), calcule e mostre a média entre eles.

import java.util.Scanner;

public class Exercicio1Notas{

    public static void main(String[]args){

        Scanner scanner= new Scanner(System.in);

        System.out.print("Digite o primeiro numero:");
        double numero1 = scanner.nextDouble();

        System.out.print("Digite o segundo numero:");
        double numero2 = scanner.nextDouble();

        Double media = (numero1 + numero2)/2;

        System.out.print("Sua media e "+ media);

        if(media>7){
            System.out.print(" Voce esta aprovado");
        }
        else {
            System.out.print(" Voce esta reprovado");
        }

        scanner.close();
    }

}
