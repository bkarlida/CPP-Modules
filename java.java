import java.util.Scanner;

public class java {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("mesafeyi km cinsinden giriniz: ");
        double km = scanner.nextDouble();
        System.out.print("yaşinizi giriniz: ");
        double yaş = scanner.nextDouble();
        System.out.print("Yolculuk tipini giriniz (1 => Tek Yön , 2 => Gidiş Dönüş ): ");
        double tip = scanner.nextDouble();
        double ucret = km * 0.10;
        if (tip == 2) {
            ucret *= 2;
            ucret  = ucret - ((ucret * 20) / 100);
        }
        else if (tip != 1) {
            System.out.print("hatalı veri girdiniz");
            return;
        }
        else if (km < 0) {
            System.out.print("hatalı veri girdiniz");
            return;
        }
        else if (yaş < 0) {
            System.out.print("hatalı veri girdiniz");
            return;
        }
        if (yaş >= 0 && yaş <= 11)
            ucret  = ucret - ((ucret * 50) / 100);
        else if (yaş >= 12 && yaş <= 24)
            ucret = ucret - ((ucret * 10) / 100);
        else if (yaş >= 65)
            ucret = ucret - ((ucret * 30) / 100);
        System.out.println("toplam tutar: " + ucret);
    }
}
