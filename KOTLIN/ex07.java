import java.util.Scanner;
import java.util.Locale;

puplic class Exercicio07 {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in) {
        System.out.print("Primeira nota (0 a 10): ");
        double nota1 = entrada.nextDouble();
        Sytem.out.print("Segunda nota (0 a 10): ");
        double nota2 = entrada.nextDouble();

        if (notal < 0 || nota1 > 10 || nota2 < 0 || nota2 > 10) {
            System.out.println("Notas inválidas.");
        } else {
            double media =  (nota1 + nota2) / 2;
            System.out.printf("Média: %.1f%n", media);
        }
        entrada.close();
    }
}
