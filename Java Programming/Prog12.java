/*					Program No. :-
Aim :- WAP to implement a Table in Java Forms.
*/

class Form12 extends javax.swing.JFrame 
{
    static int count = 0;

    public Form12() 
	{
        jLabel1 = new javax.swing.JLabel();
        jLabel2 = new javax.swing.JLabel();
        jLabel3 = new javax.swing.JLabel();
        jTextField1 = new javax.swing.JTextField();
        jTextField2 = new javax.swing.JTextField();
        jTextField3 = new javax.swing.JTextField();
        jScrollPane1 = new javax.swing.JScrollPane();
        jTable1 = new javax.swing.JTable();
        jButton1 = new javax.swing.JButton();
        jButton2 = new javax.swing.JButton();
        jButton3 = new javax.swing.JButton();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        setTitle("Program 12");
        setResizable(false);
        getContentPane().setLayout(null);

        jLabel1.setText("Name");
        getContentPane().add(jLabel1);
        jLabel1.setBounds(20, 20, 75, 14);

        jLabel2.setText("Roll Number");
        getContentPane().add(jLabel2);
        jLabel2.setBounds(150, 20, 75, 14);

        jLabel3.setText("Age");
        getContentPane().add(jLabel3);
        jLabel3.setBounds(280, 20, 75, 14);
        getContentPane().add(jTextField1);
        jTextField1.setBounds(20, 50, 100, 20);
        getContentPane().add(jTextField2);
        jTextField2.setBounds(150, 50, 100, 20);
        getContentPane().add(jTextField3);
        jTextField3.setBounds(280, 50, 100, 20);

        jTable1.setModel(new javax.swing.table.DefaultTableModel(
            new Object [][] {
                {null, null, null},
                {null, null, null},
                {null, null, null},
                {null, null, null},
                {null, null, null},
                {null, null, null},
                {null, null, null}
            },
            new String [] {
                "Name", "Roll Number", "Age"
            }
        ));
        jScrollPane1.setViewportView(jTable1);

        getContentPane().add(jScrollPane1);
        jScrollPane1.setBounds(0, 150, 400, 150);

        jButton1.setText("Insert");
        jButton1.addMouseListener(new java.awt.event.MouseAdapter() 
		{
            public void mouseClicked(java.awt.event.MouseEvent evt) 
			{
                jButton1MouseClicked(evt);
            }
        });
        getContentPane().add(jButton1);
        jButton1.setBounds(25, 100, 75, 23);

        jButton2.setText("Reset");
        jButton2.addMouseListener(new java.awt.event.MouseAdapter() 
		{
            public void mouseClicked(java.awt.event.MouseEvent evt) 
			{
                jButton2MouseClicked(evt);
            }
        });
        getContentPane().add(jButton2);
        jButton2.setBounds(150, 100, 75, 23);

        jButton3.setText("Exit");
        jButton3.addMouseListener(new java.awt.event.MouseAdapter() 
		{
            public void mouseClicked(java.awt.event.MouseEvent evt) 
			{
                jButton3MouseClicked(evt);
            }
        });
        getContentPane().add(jButton3);
        jButton3.setBounds(275, 100, 75, 23);

        java.awt.Dimension screenSize = java.awt.Toolkit.getDefaultToolkit().getScreenSize();
        setBounds((screenSize.width-408)/2, (screenSize.height-344)/2, 408, 344);    
    }
	
    private void jButton1MouseClicked(java.awt.event.MouseEvent evt) 
	{
        jTable1.setValueAt(jTextField1.getText(), count, 0);
        jTable1.setValueAt(jTextField2.getText(), count, 1);
        jTable1.setValueAt(jTextField3.getText(), count, 2);
        count++;
    }

    private void jButton2MouseClicked(java.awt.event.MouseEvent evt) 
	{
        jTextField1.setText("");
        jTextField2.setText("");
        jTextField3.setText("");
    }

    private void jButton3MouseClicked(java.awt.event.MouseEvent evt) 
	{
        this.dispose();
    }

    private javax.swing.JButton jButton1;
    private javax.swing.JButton jButton2;
    private javax.swing.JButton jButton3;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JLabel jLabel3;
    private javax.swing.JScrollPane jScrollPane1;
    private javax.swing.JTable jTable1;
    private javax.swing.JTextField jTextField1;
    private javax.swing.JTextField jTextField2;
    private javax.swing.JTextField jTextField3;
}

public class Prog12
{ 
   public static void main(String[] args) 
   {
        Form12 object = new Form12();
        object.show();
    }	
}

/*
Name - Rohit Aggarwal
Roll No. - 7CS-097
*/
