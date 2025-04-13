/*Crie uma classe Banco que possui como atributos
um nome e um vetor de contas. Faça um
construtor que recebe o nome do banco e a
quantidade de elementos no vetor, e inicialize os
atributos. Faça também métodos de procurar uma
conta (passando como parâmetro o número da
conta), cadastrar uma nova conta e transferir entre
contas

Crie uma classe Principal que instancie um banco e
forneça ao usuário um menu para ele criar contas,
sacar, depositar e alterar dados. */

import java.util.Scanner;

public class BancoApp {

    static class ContaBancaria {
        private String titular;
        private int numero;
        private double saldo;

        public ContaBancaria(String titular, int numero) {
            this.titular = titular;
            this.numero = numero;
            this.saldo = 0.0;
        }

        public int getNumero() {
            return numero;
        }

        public double getSaldo() {
            return saldo;
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
    }

    public static class Banco {
        private String nome;
        private ContaBancaria[] contas;
        private int quantidadeContas;

        public Banco(String nome, int capacidadeMaxima) {
            this.nome = nome;
            this.contas = new ContaBancaria[capacidadeMaxima];
            this.quantidadeContas = 0;
        }

        public ContaBancaria buscarConta(int numero) {
            for (int i = 0; i < quantidadeContas; i++) {
                if (contas[i].getNumero() == numero) {
                    return contas[i];
                }
            }
            return null;
        }

        public boolean cadastrarConta(String titular, int numero) {
            if (quantidadeContas < contas.length && buscarConta(numero) == null) {
                contas[quantidadeContas++] = new ContaBancaria(titular, numero);
                return true;
            }
            return false;
        }

        public boolean transferir(int numeroOrigem, int numeroDestino, double valor) {
            ContaBancaria origem = buscarConta(numeroOrigem);
            ContaBancaria destino = buscarConta(numeroDestino);
            if (origem != null && destino != null && origem.getSaldo() >= valor) {
                origem.sacar(valor);
                destino.depositar(valor);
                return true;
            }
            return false;
        }

        public void listarContas() {
            for (int i = 0; i < quantidadeContas; i++) {
                contas[i].mostrarDados();
                System.out.println("---------------------------");
            }
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Banco banco = new Banco("Banco Top", 100);

        int opcao;
        do {
            System.out.println("\n--- MENU ---");
            System.out.println("1 - Criar nova conta");
            System.out.println("2 - Depositar");
            System.out.println("3 - Sacar");
            System.out.println("4 - Transferir");
            System.out.println("5 - Listar contas");
            System.out.println("0 - Sair");
            System.out.print("Escolha uma opção: ");
            opcao = scanner.nextInt();
            scanner.nextLine();

            switch (opcao) {
                case 1:
                    System.out.print("Nome do titular: ");
                    String titular = scanner.nextLine();
                    System.out.print("Número da conta: ");
                    int numero = scanner.nextInt();
                    if (banco.cadastrarConta(titular, numero)) {
                        System.out.println("Conta criada com sucesso.");
                    } else {
                        System.out.println("Não foi possível criar a conta. Número já existe ou limite atingido.");
                    }
                    break;

                case 2:
                    System.out.print("Número da conta para depósito: ");
                    int contaDep = scanner.nextInt();
                    System.out.print("Valor a depositar: ");
                    double valorDep = scanner.nextDouble();
                    ContaBancaria contaD = banco.buscarConta(contaDep);
                    if (contaD != null) {
                        contaD.depositar(valorDep);
                    } else {
                        System.out.println("Conta não encontrada.");
                    }
                    break;

                case 3:
                    System.out.print("Número da conta para saque: ");
                    int contaSaq = scanner.nextInt();
                    System.out.print("Valor a sacar: ");
                    double valorSaq = scanner.nextDouble();
                    ContaBancaria contaS = banco.buscarConta(contaSaq);
                    if (contaS != null) {
                        contaS.sacar(valorSaq);
                    } else {
                        System.out.println("Conta não encontrada.");
                    }
                    break;

                case 4:
                    System.out.print("Número da conta origem: ");
                    int origem = scanner.nextInt();
                    System.out.print("Número da conta destino: ");
                    int destino = scanner.nextInt();
                    System.out.print("Valor a transferir: ");
                    double valorT = scanner.nextDouble();
                    if (banco.transferir(origem, destino, valorT)) {
                        System.out.println("Transferência realizada com sucesso.");
                    } else {
                        System.out.println("Transferência falhou. Verifique os dados.");
                    }
                    break;

                case 5:
                    banco.listarContas();
                    break;

                case 0:
                    System.out.println("Saindo do sistema...");
                    break;

                default:
                    System.out.println("Opção inválida.");
            }

        } while (opcao != 0);

        scanner.close();
    }
}
