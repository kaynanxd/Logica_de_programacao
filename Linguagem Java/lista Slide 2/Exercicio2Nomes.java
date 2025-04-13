/*Faça um programa que receba o nome e a idade de um 5 pessoas e
mostre o nome e a idade da pessoa mais nova e da pessoas mais
velha*/

import java.util.Scanner;

public class Exercicio2Nomes{
    public static void main(String[]args){

        Scanner scanner = new Scanner(System.in);

        int maiorIdade = 0;
        String nomeMaior= "";
        int menorIdade = 100;
        String nomeMenor= "";

        System.out.println("Digite o nome das 5 pessoas : ");

        for(int i=1;i<6;i++){
            System.out.println("Digite o nome da pessoa numero numero " + i +" :");
            String nome1 = scanner.nextLine();
            System.out.println("Digite a idade da pessoa numero " + i);
            int idade1 = scanner.nextInt();
            scanner.nextLine();

            if(idade1>maiorIdade){
                maiorIdade = idade1;
                nomeMaior = nome1;
            }
            if(menorIdade>idade1){
                menorIdade = idade1;
                nomeMenor = nome1;
            }
        }

        System.out.print("A pessoa com a maior idade e " + nomeMaior + (" e tem " + maiorIdade + (" anos de idade .")));
        System.out.print("A pessoa com a menor idade e " + nomeMenor + (" e tem " + menorIdade + (" anos de idade .")));

        scanner.close();
    }

    
}