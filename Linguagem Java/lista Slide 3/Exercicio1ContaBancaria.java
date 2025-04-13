/*1) Crie uma classe que represente uma conta
bancária. Toda conta possui um titular, um número
e um saldo. Crie um método para depositar um
valor e outro para realizar um saque (lembre que
saldo não pode ser negativo)

2) Crie uma classe principal que instancie duas
contas, configure seus atributos e realize saques e
depósitos*/

import java.util.ArrayList;
import java.util.Scanner;

public class Exercicio1ContaBancaria {

    private String titular;
    private int numero;
    private double saldo;

    public int getNumero() {
        return numero;
    }

    public Exercicio1ContaBancaria(String titular, int numero) {
        this.titular = titular;
        this.numero = numero;
        this.saldo = 0.0;
    }

    public void depositar(double valor) {
        saldo += valor;
        System.out.println("Depósito de R$" + valor + " realizado com sucesso.");
    }

    public void sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            System.out.println("Saque de R$" + valor + " realizado com sucesso.");
        } else {
            System.out.println("Operação falhou. Saldo insuficiente ou valor inválido.");
        }
    }

    public void mostrarDados() {
        System.out.println("Titular: " + titular);
        System.out.println("Número da conta: " + numero);
        System.out.println("Saldo atual: R$" + saldo);
    }

    // ----------  MENU  ----------
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        ArrayList<Exercicio1ContaBancaria> contas = new ArrayList<>();

        // Contas iniciais
        contas.add(new Exercicio1ContaBancaria("Alice", 1001));
        contas.add(new Exercicio1ContaBancaria("Bruno", 1002));

        while (true) {
            System.out.println("\n===== MENU PRINCIPAL =====");
            System.out.println("1 - Acessar conta existente");
            System.out.println("2 - Criar nova conta");
            System.out.println("0 - Sair");
            System.out.print("Escolha uma opção: ");
            int escolha = scanner.nextInt();
            scanner.nextLine(); // limpar buffer

            if (escolha == 0) {
                System.out.println("Saindo do programa...");
                break;
            }

            if (escolha == 2) {
                System.out.print("Digite o nome do titular: ");
                String nome = scanner.nextLine();

                System.out.print("Digite o número da nova conta: ");
                int numero = scanner.nextInt();

                boolean numeroExiste = false;
                for (Exercicio1ContaBancaria c : contas) {
                    if (c.getNumero() == numero) {
                        numeroExiste = true;
                        break;
                    }
                }

                if (numeroExiste) {
                    System.out.println("Já existe uma conta com esse número!");
                } else {
                    contas.add(new Exercicio1ContaBancaria(nome, numero));
                    System.out.println("Conta criada com sucesso!");
                }
                continue;
            }

            // Acessar conta existente
            System.out.print("Digite o número da sua conta: ");
            int numeroConta = scanner.nextInt();
            Exercicio1ContaBancaria contaSelecionada = null;

            for (Exercicio1ContaBancaria conta : contas) {
                if (conta.getNumero() == numeroConta) {
                    contaSelecionada = conta;
                    break;
                }
            }

            if (contaSelecionada == null) {
                System.out.println("Conta não encontrada.");
                continue;
            }

            // Menu de operações da conta
            while (true) {
                System.out.println("\n--- MENU DA CONTA ---");
                System.out.println("1 - Depositar");
                System.out.println("2 - Sacar");
                System.out.println("3 - Mostrar dados");
                System.out.println("0 - Voltar ao menu principal");
                System.out.print("Escolha uma opção: ");
                int opcao = scanner.nextInt();

                if (opcao == 0) {
                    break;
                }

                switch (opcao) {
                    case 1:
                        System.out.print("Digite o valor para depósito: ");
                        double valorDeposito = scanner.nextDouble();
                        contaSelecionada.depositar(valorDeposito);
                        break;
                    case 2:
                        System.out.print("Digite o valor para saque: ");
                        double valorSaque = scanner.nextDouble();
                        contaSelecionada.sacar(valorSaque);
                        break;
                    case 3:
                        contaSelecionada.mostrarDados();
                        break;
                    default:
                        System.out.println("Opção inválida.");
                }
            }
        }

        scanner.close();
    }
}