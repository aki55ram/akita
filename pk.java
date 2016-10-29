import java.util.Scanner;

public class CaseManipulation {
 
public static String toCamelCase(String inputString) {
       String result = "";
       if (inputString.length() == 0) {
           return result;
       }
       char firstChar = inputString.charAt(0);
       char firstCharToUpperCase = Character.toUpperCase(firstChar);
       result = result + firstCharToUpperCase;
       for (int i = 1; i < inputString.length(); i++) {
           char currentChar = inputString.charAt(i);
           char previousChar = inputString.charAt(i - 1);
           if (previousChar == ' ') {
               char currentCharToUpperCase = Character.toUpperCase(currentChar);
               result = result + currentCharToUpperCase;
           } else {
               char currentCharToLowerCase = Character.toLowerCase(currentChar);
               result = result + currentCharToLowerCase;
           }
       }
       return result;
   }
  public static void main(String[] args) {
       Scanner scanner = new Scanner(System.in);
       System.out.print("Enter an input String: ");
       String inputString = scanner.nextLine();
       System.out.println("Camel Case: " + toCamelCase(inputString));
}
}