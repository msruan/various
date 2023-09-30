import java.awt.event.KeyEvent;

public class ExemploGetKeyCode {
    public static void main(String[] args) {
        // Suponhamos que você tenha um KeyEvent (evento de teclado) chamado "evento"
        KeyEvent evento = new KeyEvent(null, 0, 0, 0, 0, 'A');

        // Use o método getKeyCode para obter o código da tecla pressionada
        int codigoTecla = evento.getKeyCode();

        // Exiba o código da tecla no console
        System.out.println("Código da Tecla: " + codigoTecla);
    }
}
