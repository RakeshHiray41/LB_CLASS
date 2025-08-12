import javax.swing.*;
import java.awt.event.*;

class GUIPacker 
{
    public JFrame fobj;
    public JButton packButton;
    public JLabel DirNameLabel,PackNameLabel;
    public JTextField DirNameTextField,PackNameTextField;

    public GUIPacker(String Title,int Width,int Height)
    {
        fobj = new JFrame();

        packButton  = new JButton("Pack");
        packButton.setBounds(160,200,80,30);

        DirNameLabel = new JLabel("Folder Name : ");
        DirNameLabel.setBounds(50,20,100,50);

        PackNameLabel = new JLabel("File Name : ");
        PackNameLabel.setBounds(50,120,100,50);

        DirNameTextField = new JTextField();
        DirNameTextField.setBounds(180,20,150,50);

        PackNameTextField = new JTextField();
        PackNameTextField.setBounds(180,120,150,50);

        fobj.add(PackNameLabel);
        fobj.add(PackNameTextField);
        fobj.add(DirNameTextField);
        fobj.add(DirNameLabel);
        fobj.add(packButton);
        fobj.setLayout(null);

        fobj.setTitle(Title);
        fobj.setSize(Width,Height);
        fobj.setVisible(true);
        fobj.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }

    
}
class GUIP
{
    public static void main(String A[])
    {
        GUIPacker obj = new GUIPacker("Packer",400,300);
    }
}