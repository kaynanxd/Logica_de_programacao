/*Escreva uma classe chamada “Comparavel” que
tem como atributo um valor inteiro, um construtor
para inicializar o atributo e os métodos
“eMaiorOuIgual”, “eMenorOuIgual” e
“eDiferenteDe” que recebem um valor do tipo int
como parâmetro e retornam true se o valor do
atributo for, respectivamente, maior ou igual,
menor ou igual ou diferente do passado como
parâmetro

Crie uma classe executável para testar a classe
acima */

public class ComparavelTeste{

    static class Comparavel {
        private int valor;

        public Comparavel(int valor) {
            this.valor = valor;
        }

        public boolean eMaiorOuIgual(int outroValor) {
            return this.valor >= outroValor;
        }

        public boolean eMenorOuIgual(int outroValor) {
            return this.valor <= outroValor;
        }

        public boolean eDiferenteDe(int outroValor) {
            return this.valor != outroValor;
        }
    }

    public static void main(String[] args) {
        Comparavel numero = new Comparavel(10);

        System.out.println("Comparando com o valor 7:");
        System.out.println("É maior ou igual? " + numero.eMaiorOuIgual(7));
        System.out.println("É menor ou igual? " + numero.eMenorOuIgual(7));
        System.out.println("É diferente de? " + numero.eDiferenteDe(7));

        System.out.println("\nComparando com o valor 10:");
        System.out.println("É maior ou igual? " + numero.eMaiorOuIgual(10));
        System.out.println("É menor ou igual? " + numero.eMenorOuIgual(10));
        System.out.println("É diferente de? " + numero.eDiferenteDe(10));

        System.out.println("\nComparando com o valor 15:");
        System.out.println("É maior ou igual? " + numero.eMaiorOuIgual(15));
        System.out.println("É menor ou igual? " + numero.eMenorOuIgual(15));
        System.out.println("É diferente de? " + numero.eDiferenteDe(15));
    }
}
