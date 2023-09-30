class Conta {
    public String numero;
    public String nome;
    public double saldo;


    public Conta(String numero, double saldo, String nome){
        this.numero = numero;
        this.saldo = saldo;
        this.nome = nome;
    }

    boolean sacar(double valor){
        if (valor > 0 && this.saldo >= valor) {
            this.saldo -= valor;
            return true;
        } return false;
    }

    void depositar(double valor){
        if (valor > 0) {
            this.saldo += valor;
        }
    }

    double consultarSaldo(){
        return this.saldo;
    }

    boolean transferir(Conta contaDestino, double valor){
        if (this.sacar(valor)) {
            contaDestino.depositar(valor);
            return true;
        }
            return false;
    }
    public static void main(String[] args){
        Conta c1 = new Conta("1", 100, "Bianca");
        Conta c2 = new Conta("2", 200, "Lindinho");
    

        // Operação de transferência
        System.out.println("Operação de transferência");
        c1.transferir(c2, 200); // Erro
        c2.transferir(c1, 100);
        System.out.println(c1.consultarSaldo());
        System.out.println(c2.consultarSaldo());

}
}