/*					Program No. :-
Aim :- WAP to implement the Insert and Update operations of Database in Java
*/

import java.sql.*;
import javax.swing.JOptionPane;

class Form14 extends javax.swing.JFrame 
{
    String query;
    Connection connect;
    PreparedStatement executeQuery;

    public Form14() 
	{
		jLabel1 = new javax.swing.JLabel();
        jTextField1 = new javax.swing.JTextField();
        jLabel2 = new javax.swing.JLabel();
        jTextField2 = new javax.swing.JTextField();
        jLabel3 = new javax.swing.JLabel();
        jTextField3 = new javax.swing.JTextField();
        jButton1 = new javax.swing.JButton();
        jButton2 = new javax.swing.JButton();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        setTitle("Program 14");
        setResizable(false);
        addWindowListener(new java.awt.event.WindowAdapter() {
            public void windowOpened(java.awt.event.WindowEvent evt) {
                formWindowOpened(evt);
            }
        });
        getContentPane().setLayout(null);

        jLabel1.setText("Name");
        getContentPane().add(jLabel1);
        jLabel1.setBounds(25, 25, 75, 14);
        getContentPane().add(jTextField1);
        jTextField1.setBounds(125, 25, 150, 20);

        jLabel2.setText("Roll Number");
        getContentPane().add(jLabel2);
        jLabel2.setBounds(25, 75, 75, 14);
        getContentPane().add(jTextField2);
        jTextField2.setBounds(125, 75, 150, 20);

        jLabel3.setText("Branch");
        getContentPane().add(jLabel3);
        jLabel3.setBounds(25, 125, 75, 14);
        getContentPane().add(jTextField3);
        jTextField3.setBounds(125, 125, 150, 20);

        jButton1.setText("Insert");
        jButton1.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                jButton1MouseClicked(evt);
            }
        });
        getContentPane().add(jButton1);
        jButton1.setBounds(50, 180, 75, 23);

        jButton2.setText("Update");
        jButton2.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                jButton2MouseClicked(evt);
            }
        });
        getContentPane().add(jButton2);
        jButton2.setBounds(175, 180, 75, 23);

        java.awt.Dimension screenSize = java.awt.Toolkit.getDefaultToolkit().getScreenSize();
        setBounds((screenSize.width-308)/2, (screenSize.height-259)/2, 308, 259);
    }

    private void jButton1MouseClicked(java.awt.event.MouseEvent evt) 
	{
        if(jTextField1.getText().length() != 0 && jTextField2.getText().length() != 0 && jTextField3.getText().length() != 0)
        {
            try
            {
                query = "insert into Prog14_table (Name, RollNo, Branch) values (?,?,?)";
                executeQuery = connect.prepareStatement(query);
                executeQuery.setString(1, jTextField1.getText());
                executeQuery.setString(2, jTextField2.getText());
                executeQuery.setString(3, jTextField3.getText());
                executeQuery.executeUpdate();
                JOptionPane.showMessageDialog(this, "Values inserted successfully.");
                jTextField1.setText("");
                jTextField2.setText("");
                jTextField3.setText("");
            }
            catch(SQLException e)
            {
                JOptionPane.showMessageDialog(this, "Query couldn't be executed succesfully.");
            }
        }
        else
        {
            JOptionPane.showMessageDialog(this, "One or more fields are empty.");
        }
    }

    private void jButton2MouseClicked(java.awt.event.MouseEvent evt) 
	{
        if(jTextField1.getText().length() != 0 && jTextField2.getText().length() != 0 && jTextField3.getText().length() != 0)
        {
            try
            {
                query = "update Prog14_table set RollNo=? and Branch=? where Name=?";
                executeQuery = connect.prepareStatement(query);
                executeQuery.setString(1, jTextField2.getText());
                executeQuery.setString(2, jTextField3.getText());
                executeQuery.setString(3, jTextField1.getText());
                executeQuery.executeUpdate();
                JOptionPane.showMessageDialog(this, "Values updated successfully.");
                jTextField1.setText("");
                jTextField2.setText("");
                jTextField3.setText("");
            }
            catch(SQLException e)
            {
                JOptionPane.showMessageDialog(this, "Query couldn't be executed succesfully.");
            }
        }
        else
        {
            JOptionPane.showMessageDialog(this, "One or more fields are empty.");
        }
    }

    private void formWindowOpened(java.awt.event.WindowEvent evt) 
	{
        try
        {
            Class.forName("sun.jdbc.odbc.JdbcOdbcDriver");
            connect = DriverManager.getConnection("jdbc:odbc:Prog14_jdbc", "", "");
            JOptionPane.showMessageDialog(this, "Connection to the database succesfully established.");
        }
        catch(ClassNotFoundException e)
        {
            JOptionPane.showMessageDialog(this, "Connection Class can't be loaded.");
            this.dispose();
        }
        catch(SQLException e)
        {
            JOptionPane.showMessageDialog(this, "Connection to the database failed.");
            this.dispose();
        }
    }

    private javax.swing.JButton jButton1;
    private javax.swing.JButton jButton2;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JLabel jLabel3;
    private javax.swing.JTextField jTextField1;
    private javax.swing.JTextField jTextField2;
    private javax.swing.JTextField jTextField3;
}

public class Prog14
{
    public static void main(String[] args) 
	{
        Form14 object = new Form14();
        object.show();
    }
}

/*
Name - Rohit Aggarwal
Roll No. - 7CS-097
*/