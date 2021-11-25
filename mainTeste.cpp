#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float theta = 5.0f;
float Tx = 0.0;
float Ty = 0.0;
float portaX = -0.1f;
float portaY = -0.1f;
float a = 0.0f;
float b = 0.0f;
float c = 0.0f;
float corCasaR = 0.0f;
float corCasaG = 0.0f;
float corCasaB = 0.0f;
float variaTeto = 0.0f;



// Função callback chamada para fazer o desenho
void Desenha()
{
glClearColor (0.0f, 0.5f, 1.0f, 0.0f);
            glClear (GL_COLOR_BUFFER_BIT);

            glPushMatrix ();
            //glRotatef (theta, 0.0f, 0.0f, 1.0f);
            
            
			//TETO
            glBegin (GL_TRIANGLES);
            glColor3f (1.0f, 0.0f, 0.0f);   glVertex2f (-0.20f + Tx, 0.05f + Ty);
            glColor3f (1.0f, 0.0f, 0.0f);   glVertex2f (0.0f + Tx, 0.20f + Ty - variaTeto);
            glColor3f (1.0f, 0.0f, 0.0f);   glVertex2f (0.20f + Tx, 0.05f + Ty);
            glEnd ();
            
			//CASA
            glBegin(GL_QUADS);
            glVertex2f(0.20 + Tx,0.05 + Ty);
            glColor3d(corCasaR,corCasaG,corCasaB);
            glVertex2f(-0.20 + Tx,0.05 + Ty);
            glColor3d(corCasaR,corCasaG,corCasaB);
            glVertex2f(-0.20f + Tx,-0.10f + Ty);
            glColor3d(corCasaR,corCasaG,corCasaB);
            glVertex2f(0.20 + Tx, -0.10+ Ty);
            glEnd ();

            glBegin(GL_QUADS); // PORTA
            glVertex2f(0.0 + Tx,0.0 + Ty);
            glColor3d(1,1,1);
            glVertex2f(-0.1 + Tx, 0.0 + Ty);
             glColor3d(1,1,1);
            glVertex2f(portaX + Tx, portaY + Ty);
             glColor3d(1,1,1);
            glVertex2f(0.0 + Tx, -0.1 + Ty);
             glColor3d(1,1,1);
            glEnd();
            
            
            // COMEÇO ESTRELA
            glColor3f(1, 1, 0);
			glBegin(GL_POLYGON);

			glVertex3f(0.60, 0.77, 0); 
			glVertex3f(0.68, 0.77, 0); 
			glVertex3f(0.7, 0.68, 0);
			glVertex3f(0.64, 0.63, 0);
			glVertex3f(0.58, 0.68, 0);
			glEnd();
			
			
			// 1° triangulo
             glBegin(GL_TRIANGLES);

    		glColor3f(1, 1, 0);
    		glVertex3f(0.60, 0.77, 0);

    		glColor3f(1, 1, 0);
    		glVertex3f(0.42, 0.77, 0);

    		glColor3f(1, 1, 0);
    		glVertex3f(0.58, 0.68, 0);

   			//2° triangulo

    		glColor3f(1, 1, 0);
    		glVertex3f(0.64, 1, 0);

    		glColor3f(1, 1, 0);
    		glVertex3f(0.68, 0.77, 0);

    		glColor3f(1, 1, 0);
    		glVertex3f(0.60, 0.77, 0);

    		//3° triangulo
    		glColor3f(1, 1, 0);
    		glVertex3f(0.68, 0.77, 0);

    		glColor3f(1, 1, 0);
    		glVertex3f(0.7, 0.68, 0);

    		glColor3f(1, 1, 0);
    		glVertex3f(0.86, 0.77, 0);

    		//4° triangulo
    		glColor3f(1, 1, 0);
    		glVertex3f(0.64, 0.63, 0);

    		glColor3f(1, 1, 0);
    		glVertex3f(0.7, 0.68, 0);

    		glColor3f(1, 1, 0);
    		glVertex3f(0.82, 0.43, 0);

    		//5° triangulo
    		glColor3f(1, 1, 0);
    		glVertex3f(0.64, 0.63, 0);

    		glColor3f(1, 1, 0);
    		glVertex3f(0.58, 0.68, 0);

    		glColor3f(1, 1, 0);
    		glVertex3f(0.51, 0.43, 0);

    		glEnd();
    		
    		// FIM ESTRELA
            
            glBegin(GL_QUADS); // JANELA 1
            glVertex2f(0.1 + Tx, 0.03 + Ty);
            glColor3f(0,1,1);
            glVertex2f(0.15 + Tx,0.03 + Ty);
            glColor3f(1,1,1);
            glVertex2f(0.15 + Tx,0.0 + Ty);
            glColor3f(0,1,0.8);
            glVertex2f(0.1 + Tx,0.0 + Ty);
            glEnd();
            
            glBegin(GL_QUADS); // JANELA 2
            glVertex2f(0.15 + Tx, 0.03 + Ty);
            glColor3f(1,1,1);
            glVertex2f(0.2 + Tx,0.03 + Ty);
            glColor3f(1,1,1);
            glVertex2f(0.2 + Tx,0.0 + Ty);
            glColor3f(1,1,1);
            glVertex2f(0.1 + Tx,0.0 + Ty);
            glEnd();
            
			glBegin(GL_QUADS); // JANELA 3
            glVertex2f(0.15 + Tx, 0.0 + Ty);
            glColor3f(0, 1, 1);
            glVertex2f(0.1 + Tx,0.0 + Ty);
            glColor3f(0,1,1);
            glVertex2f(0.1 + Tx,-0.03 + Ty);
            glColor3f(0,1,1);
            glVertex2f(0.15 + Tx,-0.03 + Ty);
            glEnd();
            
            
            glBegin(GL_QUADS); // JANELA 4
            glVertex2f(0.15 + Tx, 0.0 + Ty);
            glColor3f(0,1,1);
            glVertex2f(0.2 + Tx,0.0 + Ty);
            glColor3f(1,1,1);
            glVertex2f(0.2+ Tx,-0.03 + Ty);
            glColor3f(0,1,0.8);
            glVertex2f(0.15 + Tx,-0.03 + Ty);
            glEnd();
            

            glBegin(GL_QUADS); // CHÃO
            glVertex2f(1.0,-0.1);
            glColor3d(0,0.8,0.5);
            glVertex2f(-1.0, -0.1);
            glColor3d(0,0.8,0.5);
            glVertex2f(-1.0, -1.0 );
            glColor3d(0,0.8,0.5);
            glVertex2f(1.0, -1.0);
            glColor3d(0,0.8,0.5);
            glEnd();
            
            
            //SOL
			glPushMatrix();
			//glTranslatef(0.01f,0.01f,0.01f);
			glRotatef (theta,a,b,c);
			
            glBegin(GL_POLYGON);
            int i = 0;
            double radius = 0.1;
            double angle = 2 * 3.14 * i /150;
            double x = -0.8;
            double y = 0.8;
            double X = cos(angle) * radius;
            double Y = sin(angle) * radius;
            for ( i = 0; i <= 300; i++){
                 angle = 2 * 3.14 * i /150;
                 X = cos(angle) * radius;
                 Y = sin(angle) * radius;
                glVertex2d(x + X, y + Y);
                glColor3d(1.0f,1.0f,0.0);
            }
            glEnd();
            glPopMatrix();

            glPopMatrix ();

            glutSwapBuffers ();

            
            Sleep (1);
            
            
}

// Inicializa parâmetros de rendering
void Inicializa (void)
{

// Define a cor de fundo da janela de visualização como preta
    glClearColor(0, 0, 0, 0);

}

void keyboard(unsigned char key, int x, int y){
	if(key == 27){
		exit(0);
	}
	if (key == 'r'){
		theta += 5.0f;
		 a += 6.0f;
		 b += 5.0f;
		 c += 5.0f;
		
	}
	if(key == 'd'){
		variaTeto+= 0.01f;
	}
	if(key == 'a'){
		portaX+=-0.20f;
		portaY+=-0.10f;
	}
	if(key == 't'){
		corCasaR+=0.1f;
		corCasaG+=0.1f;
		corCasaB+=0.1f;
		
	}
}

void teclaEspecial(int ts, int x, int y){
//tc <- qual tecla foi seleciodana no teclado
// x e y <- são as posições do mouse quando a tecla foi selecionada
    switch(ts){
       case GLUT_KEY_UP:
        Ty+=0.1;
        break;
       case GLUT_KEY_DOWN:
        Ty-=0.1;
        break;
       case GLUT_KEY_RIGHT:
        Tx+=0.2;
        break;
        case GLUT_KEY_LEFT:
        Tx-=0.2;
        break;
       default:
        break;
    }
    //Renderiza a tela
    glutPostRedisplay();
}


void mouse(int botao, int estadoB, int x, int y){
   //botao <- qual botão foi selecionado: esquerda, meio ou direita
   //estadoB <- o o botão foi pressionado ou não
   //x e y <- são as posições do mouse quando o botão foi pressionado
   if (botao==GLUT_RIGHT_BUTTON){
        if(estadoB==GLUT_DOWN)
            printf("RIGHT x = %i, y = %i \n",x,y);
			//Tx +=0.05;
			//Ty +=0.05;
   }else{
	if (botao==GLUT_LEFT_BUTTON){
        if(estadoB==GLUT_DOWN)
            corCasaR+=0.5f;
			corCasaG+=0.5f;
			corCasaB+=0.5f;
   	}
   }

    //Renderiza a tela
    glutPostRedisplay();
}


/* Program entry point */

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(400,350);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);

    glutCreateWindow("Primeiro Programa");

    glutDisplayFunc(Desenha);

    //Interação com o TECLADO
    glutKeyboardFunc(keyboard);

    //Interação com o TECLADO - Teclas especiais do teclado
    glutSpecialFunc(teclaEspecial);

    //Interação com o MOUSE
    glutMouseFunc(mouse);

    Inicializa();
    glutMainLoop();

    return 0;
}




