

#include "Render.h"

#include <Windows.h>
#include <GL\GL.h>
#include <GL\GLU.h>

double A1[] = { 0, 0, 0 };
double A2[] = { 7, -4, 0 };
double A3[] = { 9, 4, 0 };
double A4[] = { 3, 8, 0 };
double A5[] = { -1, 6, 0 };
double A6[] = { -1, 2, 0 };
double A7[] = { -9, 1, 0 };
double A8[] = { -3, -5, 0 };

double B1[] = { 0, 0, 1 };
double B2[] = { 7, -4, 1 };
double B3[] = { 9, 4, 1 };
double B4[] = { 3, 8, 1 };
double B5[] = { -1, 6, 1 };
double B6[] = { -1, 2, 1 };
double B7[] = { -9, 1, 1 };
double B8[] = { -3, -5, 1 };

void Render(double delta_time)
{
	//Верх
	glPushMatrix();
	glTranslated(0, 0, 1);
	glBegin(GL_TRIANGLE_FAN);
	glColor3d(0, 0.7, 0.3);
	glVertex3dv(A1);
	glVertex3dv(A2);
	glVertex3dv(A3);
	glVertex3dv(A4);
	glVertex3dv(A5);
	glVertex3dv(A6);
	glVertex3dv(A7);
	glVertex3dv(A8);
	glEnd();
	glPopMatrix();

	//Низ
	glPushMatrix();
	glTranslated(0, 0, 0);
	glBegin(GL_TRIANGLE_FAN);
	glColor3d(0, 0.7, 0.3);
	glVertex3dv(A1);
	glVertex3dv(A2);
	glVertex3dv(A3);
	glVertex3dv(A4);
	glVertex3dv(A5);
	glVertex3dv(A6);
	glVertex3dv(A7);
	glVertex3dv(A8);
	glEnd();
	glPopMatrix();

	//Боковая грань
	glPushMatrix();
	glTranslated(0, 0, 0);
	glBegin(GL_QUAD_STRIP);
	glColor3d(0, 0.3, 0.7);
	glVertex3dv(A1);
	glVertex3dv(B1);
	glVertex3dv(A2);
	glVertex3dv(B2);
	glVertex3dv(A3);
	glVertex3dv(B3);
	glVertex3dv(A4);
	glVertex3dv(B4);
	glVertex3dv(A5);
	glVertex3dv(B5);
	glVertex3dv(A6);
	glVertex3dv(B6);
	glVertex3dv(A7);
	glVertex3dv(B7);
	glVertex3dv(A8);
	glVertex3dv(B8);
	glVertex3dv(A1);
	glVertex3dv(B1);
	glEnd();
	glPopMatrix();
}   

