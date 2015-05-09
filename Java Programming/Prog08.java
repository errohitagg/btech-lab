/*					Program No. :- 
Aim :- WAP to demonstrate Mouse Events in a Form.
*/

class Form08 extends javax.swing.JFrame 
{
    public Form08() 
	{
        jScrollPane1 = new javax.swing.JScrollPane();
        jTextArea1 = new javax.swing.JTextArea();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        setTitle("Program 08");
        setResizable(false);

        jTextArea1.setColumns(20);
        jTextArea1.setRows(5);
        jTextArea1.addMouseListener(new java.awt.event.MouseAdapter() 
		{
            public void mouseClicked(java.awt.event.MouseEvent evt) 
			{
                jTextArea1MouseClicked(evt);
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

    private void jTextArea1MouseClicked(java.awt.event.MouseEvent evt) 
	{
        String text = "";
        text = "\nLocation: (" + evt.getX() + ", " + evt.getY() + ")";
        text += "\n No. of Clicks: " + evt.getClickCount();
        text += "\nButton Clicked: " + evt.getButton();
        jTextArea1.setText(text);
    }

    private javax.swing.JScrollPane jScrollPane1;
    private javax.swing.JTextArea jTextArea1;
}

public class Prog08 {

    public static void main(String[] args) 
	{
        Form08 object = new Form08();
        object.show();
    }

}

/*
Name - Rohit Aggarwal
Roll No. - 7CS-097
*/