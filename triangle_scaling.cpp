#include <GL/glut.h> // Include the GLUT library

// Function to handle rendering
void showScreen()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    // Put your OpenGL drawing code here
    // For example, drawing a triangle:
    glLoadIdentity();

    glColor3f(1.0f, 0.0f, 0.0f);

    glRotatef(45.0f, 0.5f, 0.3f, 0.0f); // rotation is on the x and y axis and thats when it is visible

    // Scale the triangle by 1.5 along X, Y, and Z axes
    glScalef(1.5f, 1.5f, 1.5f);

    glBegin(GL_TRIANGLES);
    // Define vertices
    glVertex2f(-0.5f, -0.5f);
    glVertex2f(0.5f, -0.5f);
    glVertex2f(0.0f, 0.5f);
    glEnd();
    glutSwapBuffers();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);                                     // Initialize GLUT
    glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE | GLUT_DEPTH); // Set display mode

    glutInitWindowSize(500, 500);               // Set window size
    glutInitWindowPosition(0, 0);               // Set window position
    glutCreateWindow("OpenGL Coding Practice"); // Create a window with the given title

    glutDisplayFunc(showScreen); // Register showScreen as the function to render
    glutIdleFunc(showScreen);    // Set the function to continuously render

    glutMainLoop(); // Enter the GLUT event-processing loop

    return 0;
}
