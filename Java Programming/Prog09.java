/*					Program No. :-
Aim :- WAP to demonstrate Keyboard Events in a Form.
*/

class Form09 extends javax.swing.JFrame 
{
    public Form09() 
	{
		jScrollPane1 = new javax.swing.JScrollPane();
        jTextArea1 = new javax.swing.JTextArea();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        setTitle("Program 09");
        setResizable(false);

        jTextArea1.setColumns(20);
        jTextArea1.setRows(5);
        jTextArea1.addKeyListener(new java.awt.event.KeyAdapter() 
		{
            public void keyTyped(java.awt.event.KeyEvent evt) 
			{
                jTextArea1KeyTyped(evt);
            }
        });
        jScrollPane1.setViewportView(jTextArea1);

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jScrollPane1, javax.swing.GroupLayout.DEFAULT_SIZE, 400, Short.MAX_VALUE)
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jScrollPane1, javax.swing.GroupLayout.DEFAULT_SIZE, 300, Short.MAX_VALUE)
        );

        pack();
    }

    private void jTextArea1KeyTyped(java.awt.event.KeyEvent evt) 
	{
        jTextArea1.setText(jTextArea1.getText() + evt.getKeyChar());
    }

    private javax.swing.JScrollPane jScrollPane1;
    private javax.swing.JTextArea jTextArea1;
}

public class Prog09 {

    public static void main(String[] args) 
	{
        Form09 object = new Form09();
        object.show();
    }
}

/*
Name - Rohit Aggarwal
Roll No. - 7CS-097
*/