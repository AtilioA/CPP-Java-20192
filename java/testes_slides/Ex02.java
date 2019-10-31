class Ex02 {
    public static void main(String[] args) {
        int i = 0;

        for (i = 150; i <= 300; i++) {
            System.out.println(i);
        }

        int soma = 0;
        for (i = 0; i <= 1000; i++) {
            soma += i;
            System.out.println(soma);
        }

        int fatorial = 1;
        for (i = 1; i <= 5; i++) {
            fatorial += fatorial * i;
        }
        System.out.println(fatorial);
    }
}
