import java.awt.FlowLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.*;

public class gui_lab1 {
    public static void main(String[] args) throws Exception {
        JFrame frame = new JFrame("Student Details");
        frame.setSize(800, 500);
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setLayout(new FlowLayout());
        JLabel l1 = new JLabel("Student information System");
        frame.add(l1);
        JLabel l2 = new JLabel("Name");
        frame.add(l2);
        JTextField t1 = new JTextField(10);
        frame.add(t1);
        JLabel l3 = new JLabel("Gender");
        frame.add(l3);
        JRadioButton r1 = new JRadioButton("Male");
        frame.add(r1);
        JRadioButton r2 = new JRadioButton("Female");
        frame.add(r2);
        JLabel l4 = new JLabel("State");
        frame.add(l4);
        String states[] = { "Telangana", "Andhrapradesh", "Tamilnadu", "Karnataka", "Kerala" };
        JComboBox<String> list = new JComboBox<String>(states);
        frame.add(list);
        JLabel l5 = new JLabel("Area of Interest");
        frame.add(l5);
        JCheckBox c1 = new JCheckBox("OOPS");
        JCheckBox c2 = new JCheckBox("Data structures");
        JCheckBox c3 = new JCheckBox("Machine learning");
        frame.add(c1);
        frame.add(c2);
        frame.add(c3);
        JButton b1 = new JButton("Submit");
        frame.add(b1);
        b1.addActionListener(new ActionListener() {

            @Override
            public void actionPerformed(ActionEvent e) {
                String name = t1.getText();
                String gender = "";
                if (r1.isSelected()) {
                    gender = r1.getText();
                } else if (r2.isSelected()) {
                    gender = r2.getText();
                }
                String state = list.getSelectedItem().toString();

                String aoi = " ";
                if (c1.isSelected()) {
                    aoi += c1.getText();
                }
                if (c2.isSelected()) {
                    aoi += c2.getText();
                }
                if (c3.isSelected()) {
                    aoi += c3.getText();
                }
                String output = "Name:" + name + "\nGender:" + gender + "\nState:" + state + "\nArea of interest:"
                        + aoi;
                JOptionPane.showMessageDialog(frame, output);
            }
        });

    }

}
