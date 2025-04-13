/*Refaça a classe Conta Bancária de forma que ela
contenha dois construtores: um que inicializa todos
seus atributos por parâmetro e outro que inicialize
apenas o titular e o número por parâmetro e
inicialize o saldo como 0 no corpo do construtor.
Use a cláusula this

Altere a classe executável para refletir essa
mudança */

public class ContaBancaria {
    private String titular;
    private int numero;
    private double saldo;

    public ContaBancaria(String titular, int numero, double saldo) {
        this.titular = titular;
        this.numero = numero;
        this.saldo = saldo;
    }

    public ContaBancaria(String titular, int numero) {
        this(titular, numero, 0.0); 
    }

    public void exibirDados() {
        System.out.println("Titular: " + titular);
        System.out.println("Número da conta: " + numero);
        System.out.println("Saldo: R$ " + saldo);
    }

    public static void main(String[] args) {
        // Usando o construtor que inicializa todos os atributos
        ContaBancaria conta1 = new ContaBancaria("João", 12345, 500.0);

        // Usando o construtor que inicializa apenas titular e número
        ContaBancaria conta2 = new ContaBancaria("Maria", 67890);

        // Exibindo dados das contas
        System.out.println("Conta 1:");
        conta1.exibirDados();

        System.out.println("\nConta 2:");
        conta2.exibirDados();
    }
}
