/*Escreva uma classe “Potência” que tem dois
atributos inteiros: x, y. Crie um construtor que
recebe esses valores e um método “elevar” que
calcula e retorna o valor de x elevado a y (atenção:
não vale usar classes matemáticas!)

Crie uma classe executável para testar a classe
acima */

public class TestePotencia {
    public static void main(String[] args) {
        Potencia p = new Potencia(2, 5);
        int resultado = p.elevar();
        System.out.println("Resultado: " + resultado);
    }

    static class Potencia {
        private int x;
        private int y;

        public Potencia(int x, int y) {
            this.x = x;
            this.y = y;
        }

        public int elevar() {
            int resultado = 1;
            for (int i = 0; i < y; i++) {
                resultado *= x;
            }
            return resultado;
        }
    }
}