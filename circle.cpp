#include <GL/glut.h> // Include the GLUT library
#include <bits/c++config.h>
#include <cmath>     // Include cmath for trigonometric functions

// Function to handle rendering
void showScreen() {
    glClearColor(0.2f, 0.3f, 0.3f, 1.0f); // Background color
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glColor3f(0.0f, 1.0f, 0.0f); // Set drawing color to green

    glBegin(GL_TRIANGLE_FAN); // Begin drawing a triangle fan for the circle
    glVertex2f(0.0f, 0.0f); // Center of the circle

    int numSegments = 100; // Number of segments (vertices) for the circle
    float radius = 0.5f; // Radius of the circle

    for (int i = 0; i <= numSegments; ++i) {
        float theta = 2.0f * 3.1415926f * float(i) / float(numSegments); // Angle for each segment
        float x = radius * cosf(theta); // Calculate X position
        float y = radius * sinf(theta); // Calculate Y position
        glVertex2f(x, y); // Add vertex to draw the circle
    }
    glEnd(); // End drawing

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
