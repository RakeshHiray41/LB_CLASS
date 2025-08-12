import javax.swing.*;
import java.awt.event.*;

class GUIUnpacker 
{
    public JFrame fobj;
    public JButton unpackButton;
    public JLabel FileNameLabel;
    public JTextField FileNameTextField;

    public GUIUnpacker(String Title,int Width,int Height)
    {
        fobj = new JFrame();

        unpackButton  = new JButton("UnPack");
        unpackButton.setBounds(160,150,80,30);

        FileNameLabel = new JLabel("File Name : ");
        FileNameLabel.setBounds(50,40,100,50);


        FileNameTextField = new JTextField();
        FileNameTextField.setBounds(180,40,150,50);


        fobj.add(FileNameTextField);
        fobj.add(FileNameLabel);
        fobj.add(unpackButton);
        fobj.setLayout(null);

        fobj.setTitle(Title);
        fobj.setSize(Width,Height);
        fobj.setVisible(true);
        fobj.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }

    
}
class GUIU
{
    public static void main(String A[])
    {
        GUIUnpacker obj = new GUIUnpacker("UnPacker",400,300);
    }
}