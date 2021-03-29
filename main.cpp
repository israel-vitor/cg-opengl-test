#include <stdlib.h>
#include <stdio.h>
#include <GL/glut.h>

#include "fonts.h"

namespace control
{
    int window;

    void showBitmapText(int x, int y, void *font, string text)
    {
        glRasterPos2f(x, y);
        for (int i = 0; i < text.length(); i++)
        {
            glutBitmapCharacter(font, text.at(i));
        }
    }

    void display(void)
    {
        glClear(GL_COLOR_BUFFER_BIT);
        glColor3f(0.0, 0.0, 0.0);
        showBitmapText(40, 200, GLUT_BITMAP_HELVETICA_18, "1 - Piramide, Cubo, Casa e Estrela");
        showBitmapText(40, 180, GLUT_BITMAP_HELVETICA_18, "2 - Preenchimento de regioes");
        showBitmapText(40, 160, GLUT_BITMAP_HELVETICA_18, "3 - Transformacoes geometricas");
        showBitmapText(40, 140, GLUT_BITMAP_HELVETICA_18, "4 - Animacoes");
        showBitmapText(40, 120, GLUT_BITMAP_HELVETICA_18, "5 - Fontes");
        glFlush();
    }

    void keyboard(unsigned char key, int x, int y)
    {
        switch (key)
        {
        case '1':
            /* code */
            break;
        case '2':
            /* code */
            break;
        case '3':
            /* code */
            break;
        case '4':
            /* code */
            break;
        case '5':
            /* code */
            break;
        case 27:
            exit(0);
            break;
        }
    }

    void init(void)
    {
        glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
        glutInitWindowSize(450, 300);
        glutInitWindowPosition(100, 100);
        window = glutCreateWindow("Israel Lima");
        glClearColor(1.0, 1.0, 1.0, 1.0);
        glOrtho(0, 256, 0, 256, -1, 1);
        glutDisplayFunc(display);
        glutKeyboardFunc(keyboard);
    }
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    control::init();
    glutMainLoop();
    return 0;
}