import java.util.InputMismatchException;
import java.util.Scanner;
public class Lol {
    public static void main(String[] args) {
        String menu = MenuUtils.gerarMenu("BANCO","Cadastrar, Consultar, Sacar, Depositar, Excluir, Transferir, Totalizacoes");
        int opcao;
        do{
            opcao = MenuUtils.obterOpcao(menu,7);
        }while(opcao != SAIR);

    }
    public static final int SAIR = 0;



}
class MenuUtils {
    public static String gerarMenu(String titulo, String opcoes){
        StringBuilder menu = new StringBuilder(String.format("***** %s *******\n",titulo));
        String arr_opcoes[] = opcoes.split(",");
        for(int i = 0; i < arr_opcoes.length; i++){
            menu.append(String.format("%c%d - %s\n",(i<10?'0':'\0'),i+1,arr_opcoes[i].trim()));
        }menu.append("0 - Sair\n");
        return menu.toString();
    }
    /*public static int obterOpcao(String menu,int lastOption){
        Scanner input = new Scanner(System.in);
        try{
            System.out.print(menu+"\n>>> ");
            String entrada = input.nextLine();
            int escolha = Integer.parseInt(entrada);
            for(int i = 0; i <= lastOption; i++){
                if(i==escolha){
                    //limparTela();
                    input.close();
                    return escolha;
                }
            }throw new NumberFormatException();
        }catch(NumberFormatException e){
            System.out.println("\nOpcao invalida. Por favor, escolha uma opcao valida.");
            try {
                Thread.sleep(2000);
            } catch (InterruptedException ex) {
                Thread.currentThread().interrupt();
            }
            input.close();
            //limparTela();
            return obterOpcao(menu, lastOption);
        }
    }*/
    public static int obterOpcao(String menu, int lastOption) {
        Scanner input = new Scanner(System.in);

        while (true) {
            System.out.print(menu + "\n>>> ");
            try {
                int escolha = input.nextInt();

                if (escolha >= 0 && escolha <= lastOption) {
                    input.close();
                    return escolha;
                } else {
                    System.out.println("\nOpcaoo invalida. Por favor, escolha uma opcao valida.");
                }
            } catch (InputMismatchException e) {
                System.out.println("\nEntrada invalida. Por favor, insira um numero inteiro.");
                input.nextLine(); // Limpe a entrada invalida.
            }
        }
    }
}
