import javax.swing.*;
import java.awt.event.*;
import MarvellousPackerUnpacker.MarvellousPacker;
import java.util.ArrayList;
import java.io.*;

class GUIPacker implements ActionListener
{
    private ArrayList <String> UsedFiles ;
    private JFrame fobj;
    private JButton packButton;
    private JLabel DirNameLabel,PackNameLabel,Resultlabel;
    private JTextField DirNameTextField,PackNameTextField;

    public GUIPacker(String Title,int Width,int Height)
    {
        UsedFiles = new ArrayList<>();
        fobj = new JFrame();

        packButton  = new JButton("Pack");
        packButton.setBounds(160,230,80,30);

        Resultlabel = new JLabel("");
        Resultlabel.setBounds(135,190,150,30);
        
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
        fobj.add(Resultlabel);
        fobj.setLayout(null);

        packButton.addActionListener(this);

        fobj.setTitle(Title);
        fobj.setSize(Width,Height);
        fobj.setVisible(true);
        fobj.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
    public void actionPerformed(ActionEvent e)
    {   
        if(e.getSource() == packButton)
        {
            
            String folder = DirNameTextField.getText().trim();
            String file = PackNameTextField.getText().trim();

            File fobj = new File(file);

            if(folder.isEmpty())
            {
                Resultlabel.setText("Enter Folder name");
                return;
            }
            if(file.isEmpty())
            {
                Resultlabel.setText("Enter file name");
                return;
            }
            if(UsedFiles.contains(file) || fobj.exists())
            {
                Resultlabel.setText("File is Already Exists");
                return;
            }

            UsedFiles.add(file);
            

            MarvellousPacker mobj = new MarvellousPacker(file,folder);
            mobj.PackingActivity();

            Resultlabel.setText("Successfully Packed");

        }
        else
        {
            
        }
    }    
}
class GUIP
{
    public static void main(String A[])
    {
        GUIPacker obj = new GUIPacker("Packer",400,300);
    }
}