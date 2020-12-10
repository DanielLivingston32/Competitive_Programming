import java.awt.FlowLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.*;

public class gui_lab {
    public static void main(String[] args) {
        JFrame frame = new JFrame("Calculator");
        frame.setSize(800, 500);
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setLayout(new FlowLayout());

        JLabel l1 = new JLabel("Enter the number 1:");
        frame.add(l1);
        JTextField t1 = new JTextField(10);
        frame.add(t1);

        JLabel l2 = new JLabel("Enter the number 2:");
        frame.add(l2);
        JTextField t2 = new JTextField(10);
        frame.add(t2);

        JButton b1 = new JButton("Subtraction");
        frame.add(b1);

        b1.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                int a = Integer.parseInt(t1.getText());
                int b = Integer.parseInt(t2.getText());
                int c = a - b;
                JOptionPane.showMessageDialog(frame, "The difference is :" + c);
            }
        });
    }
}
