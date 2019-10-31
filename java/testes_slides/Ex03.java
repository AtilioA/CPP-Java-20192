class Ex03 {
    static class Conta {
        int numero;
        String titular;
        double saldo;

        void setSaldo(double novoSaldo) {
            this.saldo = novoSaldo;
        }

        void setTitular(String novoTitular) {
            this.titular = novoTitular;
        }

        double getSaldo() {
            return this.saldo;
        }

        String getTitular() {
            return this.titular;
        }
    }

    public static void main(String[] args) {
        Conta contaAdvogated;
        contaAdvogated = new Conta();

        contaAdvogated.setTitular("Advogated");
        contaAdvogated.setSaldo(9999.9);

        System.out.println("Saldo de " + contaAdvogated.getTitular() + " = R$" + contaAdvogated.getSaldo());
    }
}
