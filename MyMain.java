import java.awt.Color;
import java.awt.Font;
import java.awt.GridLayout;
import java.text.SimpleDateFormat;

import java.util.Date;
import javax.swing.Timer;

import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.SwingConstants;
import javax.swing.SwingUtilities;

public class MyMain extends JFrame {
    private JLabel timeLabel;
    private JLabel dateLabel;

    public MyMain(){
        setTitle("Digital Clock");
        setSize(500,300);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);

        JPanel panel =new JPanel();
        panel.setBackground(Color.BLACK);
        panel.setLayout(new GridLayout(2,1));


        timeLabel=new JLabel("",SwingConstants.CENTER);
        timeLabel.setFont(new Font("",Font.BOLD,50));
        timeLabel.setForeground(Color.GREEN);

        dateLabel = new JLabel("", SwingConstants.CENTER);
        dateLabel.setFont(new Font("Arial", Font.PLAIN, 25));
        dateLabel.setForeground(Color.WHITE);

        panel.add(timeLabel);
        panel.add(dateLabel);

        add(panel);

        Timer timer = new Timer(1000, e -> updateClock());
        timer.start();

        updateClock();

        setVisible(true);

    }

    private void updateClock() {
        Date now = new Date();

        SimpleDateFormat timeFormat =
                new SimpleDateFormat("hh:mm:ss a");

        SimpleDateFormat dateFormat =
                new SimpleDateFormat("EEEE, dd MMMM yyyy");

        timeLabel.setText(timeFormat.format(now));
        dateLabel.setText(dateFormat.format(now));
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(()->new MyMain());
    }
}
