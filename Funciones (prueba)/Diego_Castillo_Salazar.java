package Funciones;
import java.util.Scanner;

public class Diego_Castillo_Salazar {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Ingrese el primer numero: ");
        double num1 = scanner.nextDouble();
        
        System.out.print("Ingrese el segundo numero: ");
        double num2 = scanner.nextDouble();
        
        System.out.print("Ingrese la operacion (+, -, *, /): ");
        char operation = scanner.next().charAt(0);
        
        double result;
        switch (operation) {
            case '+':
                result = num1 + num2;
                System.out.println("Resultado: " + result);
                break;
            case '-':
                result = num1 - num2;
                System.out.println("Resultado: " + result);
                break;
            case '*':
                result = num1 * num2;
                System.out.println("Resultado: " + result);
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                    System.out.println("Resultado: " + result);
                } else {
                    System.out.println("Error: Division por cero");
                }
                break;
            default:
                System.out.println("Operacion no valida");
                break;
        }
        
        scanner.close();
    }
}
