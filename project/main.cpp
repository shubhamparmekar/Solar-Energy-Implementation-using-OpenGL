#include<stdlib.h>
#include<Windows.h>
#include<gl/GL.h>
#include<GL/glut.h>
#include<math.h>
#define PI 3.1416

void a();

int id1;
int id2;
int id3;
int id4;
int id5;
int id6;
int id7;
int id8;
int id9;
int id10;
void click(int button, int state, int x, int y);
void keys1(unsigned char key3, int x, int y);
void keys2(unsigned char key2, int x, int y);
void keys3(unsigned char key3, int x, int y);
void keys4(unsigned char key4, int x, int y);
void keys5(unsigned char key5, int x, int y);
void keys6(unsigned char key6, int x, int y);
void keys7(unsigned char key7, int x, int y);
void keys8(unsigned char key8, int x, int y);
void keys9(unsigned char key9, int x, int y);
void keys10(unsigned char key10, int x, int y);
void keys11(unsigned char key11, int x, int y);
void keys12(unsigned char key12, int x, int y);
void keys13(unsigned char key13, int x, int y);
const char* str1 = "-----SRI KRISHNA INSTITUTE OF ENGINEERING-----";
const char* str2 = "CHIKKBANAVARA, BANGALORE";
const char* str3 = "DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING";
const char* str4 = "COMPUTER GRAPHICS AND VISUALIZATION LABORATORY";
const char* str5 = "MINI PROJECT";
const char* str6 = "ON";
const char* str7 = "IMPLEMENTATING THE CONCEPT OF SOLAR ENERGY AND SOLAR POWER";
const char* str8 = "TEAM MEMBERS: ";
const char* str9 = "PARMEKAR SHUBHAM RAJENDRA - 1KT20CS052";
const char* str10 = "SANGEETHA THAPA - 1KT20CS067";
const char* str11 = "DEPT OF CSE";
const char* str12 = "PROJECT GUIDED BY:";
const char* str13 = "MR. LOKESH HD";
const char* str14 = "ASSISTANT PROFESSOR";
const char* str15 = "DEPT OF CSE";
const char* str16 = "PRESS 'SPACEBAR' TO CONTINUE";
const char* str17 = "IMPLEMENTATING THE CONCEPT OF SOLAR ENERGY AND SOLAR POWER";
const char* str18 = "PRESS 'SPACEBAR' TO CONTINUE";
const char* str19 = "Sun rays reaching the earth. The earth constantly tries to maintain an energy balance with the atmosphere.";
const char* str20 = "Most of the energy that reaches the Earth�s surface comes from the Sun. About 44 percent of solar radiation is in the visible light wavelengths,";
const char* str21 = "but the Sun also emits infrared, ultraviolet, and other wavelengths. The Solar energy to the Earth refers to this energy that hits the surface of the Earth itself.";
const char* str22 = "The amount of energy that reaches the the Earth provides a useful understanding of the energy for the Earth as a system. This energy goes towards weather, keeping the";
const char* str23 = "temperature of the Earth at a suitable level for life, and powers the entire biosphere. Additionally, this solar energy can be used for solar power either with solar thermal";
const char* str24 = "power plants or photovoltaic cells.";

GLint i, x1 = 0;
//circle
void circle(GLdouble rad)
{
	GLint points = 50;
	GLdouble delTheta = (2.0 * PI) / (GLdouble)points;
	GLdouble theta = 0.0;

	glBegin(GL_POLYGON);
	{
		for (i = 0; i <= 50; i++, theta += delTheta)
		{
			glVertex2f(rad * cos(theta), rad * sin(theta));
		}
	}
	glEnd();
}

GLfloat cxcar = -50;
GLfloat cxcar2 = -50;
GLfloat cxcar3 = -50;
GLfloat cxcar4 = -50;
GLfloat cxcar5 = -50;

GLfloat cx1 = -50;
GLfloat cx2 = -45;
GLfloat cx3 = -45;
GLfloat cx4 = -45;
GLfloat cx5 = -45;


GLfloat cx11 = -50;
GLfloat cx12 = -5;
GLfloat cx13 = -45;
GLfloat cx14 = -45;
GLfloat cx15 = -45;



GLfloat cx21 = -50;
GLfloat cx22 = -5;
GLfloat cx23 = -45;
GLfloat cx24 = -45;
GLfloat cx25 = -45;


GLfloat cx31 = -50;
GLfloat cx32 = -45;
GLfloat cx33 = -45;
GLfloat cx34 = -45;
GLfloat cx35 = -45;


GLfloat cx41 = -50;
GLfloat cx42 = -45;
GLfloat cx43 = -45;
GLfloat cx44 = -45;
GLfloat cx45 = -45;

void bitmap_output(double x, double y, const char  *string, void *font)
{
	int len, i;
	glRasterPos2f(x, y);
	len = (double)strlen(string);
	for (i = 0; i < len; i++)
	{
		glutBitmapCharacter(font, string[i]);
	}

}

void myinit()
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	//gluOrtho2D(0, 500, 0, 500);
	glOrtho(-50.0, 50.0, -50.0, 50.0, -1.0, 1.0);
	glMatrixMode(GL_MODELVIEW);
}

void mydisplay()
{

    glClearColor(0.0, 0.0, 0.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 500, 0, 500);

	glColor3f(0, 0, 1);
	glRasterPos2f(137.0, 450.0);
	for (i = 0; i < strlen(str1); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str1[i]);
	}
	glColor3f(0, 0, 1);
	glRasterPos2f(210.0, 430.0);
	for (i = 0; i < strlen(str2); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str2[i]);
	}
	glColor3f(0, 0, 1);
	glRasterPos2f(140.0, 390.0);
	for (i = 0; i < strlen(str3); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str3[i]);
	}
	glColor3f(0, 0, 1);
	glRasterPos2f(140.0, 370.0);
	for (i = 0; i < strlen(str4); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str4[i]);
	}
	glColor3f(0, 0, 1);
	glRasterPos2f(220.0, 340.0);
	for (i = 0; i < strlen(str5); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str5[i]);
	}
	glColor3f(0, 0, 1);
	glRasterPos2f(243.0, 320.0);
	for (i = 0; i < strlen(str6); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str6[i]);
	}
	glColor3f(1, 0, 0);
	glRasterPos2f(100.0, 290.0);
	for (i = 0; i < strlen(str7); i++)
	{
		glColor3f(0, 0, 0);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str7[i]);
	}
	glColor3f(1,1,1);
	glRasterPos2f(10.0, 150.0);
	for (i = 0; i < strlen(str8); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, str8[i]);
	}
	glColor3f(0, 0, 1);
	glRasterPos2f(10.0, 130.0);
	for (i = 0; i < strlen(str9); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str9[i]);
	}
	glColor3f(0, 0, 1);
	glRasterPos2f(10.0, 110.0);
	for (i = 0; i < strlen(str10); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str10[i]);
	}
	glColor3f(0, 0, 1);
	glRasterPos2f(10.0, 90.0);
	for (i = 0; i < strlen(str11); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str11[i]);
	}
	glColor3f(1,1,1);
	glRasterPos2f(380.0, 150.0);
	for (i = 0; i < strlen(str12); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, str12[i]);
	}
	glColor3f(0, 0, 1);
	glRasterPos2f(380.0, 130.0);
	for (i = 0; i < strlen(str13); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str13[i]);
	}
	glColor3f(0, 0, 1);
	glRasterPos2f(380.0, 110.0);
	for (i = 0; i < strlen(str14); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str14[i]);
	}
	glColor3f(0, 0, 1);
	glRasterPos2f(380.0, 90.0);
	for (i = 0; i < strlen(str15); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str15[i]);
	}
	glColor3f(0, 1, 0);
	glRasterPos2f(215, 25);
	for (i = 0; i < strlen(str16); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, str16[i]);
	}
	glutKeyboardFunc(keys1);
	glFlush();
}
void mydisplay1()
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 800, 0, 800);
	glMatrixMode(GL_MODELVIEW);

	glColor3f(0.5, 0.5, 0);
	glRasterPos2f(150.0, 750.0);
	for (i = 0; i < strlen(str17); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str17[i]);
	}

	glColor3f(0.0,1.0,0.0);
	glRasterPos2f(330.0, 90.0);
	for (i = 0; i < strlen(str18); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, str18[i]);
	}

	glColor3f(0.0,0.0,0.0);
	bitmap_output(10, 600, str19, GLUT_BITMAP_HELVETICA_18);
	bitmap_output(10, 550, str20, GLUT_BITMAP_HELVETICA_18);
	bitmap_output(10, 500, str21, GLUT_BITMAP_HELVETICA_18);
    bitmap_output(10, 450, str22, GLUT_BITMAP_HELVETICA_18);
    bitmap_output(10, 400, str23, GLUT_BITMAP_HELVETICA_18);
    bitmap_output(10, 350, str24, GLUT_BITMAP_HELVETICA_18);

	glFlush();
	glutKeyboardFunc(keys2);
}

void keys1(unsigned char key1, int x, int y)
{

	if (key1 == 32)
	{
		glutDestroyWindow(id1);
		glutInitDisplayMode(GLUT_SINGLE);
		glutInitWindowSize(3200,1200);
		glutInitWindowPosition(0, 0);
		id2 = glutCreateWindow("SOLAR POWER AND ENERGY CONCEPT");
		glutDisplayFunc(mydisplay1);
		myinit();
		glutMainLoop();
	}
	else if(key1 == 27)
        exit(0);
	else
	{
		glutDisplayFunc(mydisplay);

	}
}

void init()
{
    glClearColor(0,0,0,0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-50.0, 50.0, -50.0, 50.0);
	glMatrixMode(GL_MODELVIEW);
}

void mydisplay2()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

	glColor3f(0,0,0);
	bitmap_output(-31.5, 30, "SUN", GLUT_BITMAP_HELVETICA_18);
    bitmap_output(23, -15, "EARTH", GLUT_BITMAP_HELVETICA_18);

    glColor3f(1,1,1);
    bitmap_output(-8, -45, "PRESS 'SPACEBAR' TO CONTINUE", GLUT_BITMAP_HELVETICA_18);

    //Earth
    float theta;
	glColor3f(0.0, 0.9, 1.0);
	//glRotatef(a,1,0,0);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++)
	{
		theta = i *2.0*3.142 / 180;
		glVertex2f(25+20*cos(theta),-15+ 20*sin(theta));
	}
	glEnd();

    //Sun
	float theta1;
	glColor3f(1.0,1.0,0.0);
	glBegin(GL_POLYGON);
	for (int j = 0; j < 360; j++)
	{
		theta1 = j *2.0*3.142 / 180;
		glVertex2f(-30+7*cos(theta1),30+ 7*sin(theta1));
	}
	glEnd();

    //Arrow 1
    glColor3f(1,1,1);
    glLineWidth(2.0);
	glBegin(GL_LINES);
        glVertex2f(-30,19);
        glVertex2f(-22.5,6);
	glEnd();

	glBegin(GL_LINES);
        glVertex2f(-26,6);
        glVertex2f(-22.5,6);
        glVertex2f(-22.5,6);
        glVertex2f(-22.5,10.5);
	glEnd();

	//Arrow 2
    glColor3f(1,1,1);
    glLineWidth(2.0);
	glBegin(GL_LINES);
        glVertex2f(-22.5,22);
        glVertex2f(-12,11);
	glEnd();

	glBegin(GL_LINES);
        glVertex2f(-15.5,10);
        glVertex2f(-12,11);
        glVertex2f(-12,11);
        glVertex2f(-12.5,15);
	glEnd();

	//Arrow 3
    glColor3f(1,1,1);
    glLineWidth(2.0);
	glBegin(GL_LINES);
        glVertex2f(-18.5,31);
        glVertex2f(-5,23);
	glEnd();

	glBegin(GL_LINES);
        glVertex2f(-8,21);
        glVertex2f(-5,23);
        glVertex2f(-5,23);
        glVertex2f(-7,27);
	glEnd();

    //Stars
	glPointSize(2.5);
	glBegin(GL_POINTS);
        glVertex2f(-50,50);
        glVertex2f(-40,40);
        glVertex2f(-30,30);
        glVertex2f(-20,20);

        glVertex2f(-10,-10);
        glVertex2f(-50,-50);
        glVertex2f(-40,-40);
        glVertex2f(-30,-30);
        glVertex2f(-20,-20);

        glVertex2f(10,10);
        glVertex2f(50,50);
        glVertex2f(40,40);
        glVertex2f(30,30);
        glVertex2f(20,20);

        glVertex2f(10,20);
        glVertex2f(10,30);
        glVertex2f(10,40);
        glVertex2f(10,45);

        glVertex2f(20,10);
        glVertex2f(20,30);
        glVertex2f(20,40);
        glVertex2f(20,45);

        glVertex2f(30,10);
        glVertex2f(30,20);
        glVertex2f(30,40);
        glVertex2f(30,45);

        glVertex2f(40,10);
        glVertex2f(40,20);
        glVertex2f(40,30);
        glVertex2f(40,45);

        glVertex2f(45,10);
        glVertex2f(45,20);
        glVertex2f(45,30);
        glVertex2f(45,40);

        glVertex2f(-45,-10);
        glVertex2f(-45,-20);
        glVertex2f(-45,-30);
        glVertex2f(-45,-40);

        glVertex2f(-40,-10);
        glVertex2f(-40,-20);
        glVertex2f(-40,-30);
        glVertex2f(-40,-45);

        glVertex2f(-30,-10);
        glVertex2f(-30,-20);
        glVertex2f(-30,-45);
        glVertex2f(-30,-40);

        glVertex2f(-20,-10);
        glVertex2f(-20,-45);
        glVertex2f(-20,-30);
        glVertex2f(-20,-40);

        glVertex2f(-10,-45);
        glVertex2f(-10,-20);
        glVertex2f(-10,-30);
        glVertex2f(-10,-40);

        glVertex2f(10,-20);
        glVertex2f(10,-30);
        glVertex2f(10,-40);
        glVertex2f(10,-45);
        glVertex2f(10,-10);

        glVertex2f(20,-20);
        glVertex2f(20,-30);
        glVertex2f(20,-40);
        glVertex2f(20,-50);
        glVertex2f(20,-10);

        glVertex2f(30,-20);
        glVertex2f(30,-30);
        glVertex2f(30,-40);
        glVertex2f(30,-45);
        glVertex2f(30,-10);

        glVertex2f(40,-20);
        glVertex2f(40,-30);
        glVertex2f(40,-40);
        glVertex2f(40,-45);
        glVertex2f(40,-10);

        glVertex2f(45,-20);
        glVertex2f(45,-30);
        glVertex2f(45,-40);
        glVertex2f(45,-45);
        glVertex2f(45,-10);

        glVertex2f(0,-20);
        glVertex2f(0,-30);
        glVertex2f(0,-40);
        glVertex2f(0,-45);
        glVertex2f(0,-10);

        glVertex2f(0,20);
        glVertex2f(0,30);
        glVertex2f(0,40);
        glVertex2f(0,50);
        glVertex2f(0,10);

        glVertex2f(-50,10);
        glVertex2f(-50,20);
        glVertex2f(-50,30);
        glVertex2f(-50,40);

        glVertex2f(-40,10);
        glVertex2f(-40,20);
        glVertex2f(-40,30);
        glVertex2f(-40,50);

        glVertex2f(-30,10);
        glVertex2f(-30,20);
        glVertex2f(-30,50);
        glVertex2f(-30,40);

        glVertex2f(-20,10);
        glVertex2f(-20,50);
        glVertex2f(-20,30);
        glVertex2f(-20,40);

        glVertex2f(-10,50);
        glVertex2f(-10,20);
        glVertex2f(-10,30);
        glVertex2f(-10,40);

        glVertex2f(20,0);
        glVertex2f(30,0);
        glVertex2f(40,0);
        glVertex2f(50,0);
        glVertex2f(10,0);

        glVertex2f(-20,0);
        glVertex2f(-30,0);
        glVertex2f(-40,0);
        glVertex2f(-50,0);
        glVertex2f(-10,0);
    glEnd();

	glFlush();
	glutKeyboardFunc(keys3);

}

void keys2(unsigned char key2, int x, int y)
{

	if (key2 == 32)
	{
		glutDestroyWindow(id2);
        glutInitDisplayMode(GLUT_SINGLE);
        glutInitWindowSize(1366, 768);
        glutInitWindowPosition(0, 0);
        id3 = glutCreateWindow("EARTH AND SUN");
        glutDisplayFunc(mydisplay2);
        init();
        glEnable(GL_DEPTH_TEST);
        glutMainLoop();
	}
	else if(key2 == 27)
    {
        exit(0);
    }
	else
	{
		glutDisplayFunc(mydisplay1);

	}
}

void init3(void)
{
	glClearColor(1, 1, 0, 0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-50.0, 50.0, -50.0, 50.0, -1.0, 1.0);
	glMatrixMode(GL_MODELVIEW);
}

void mydisplay3()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0,1,0);
    bitmap_output(-45, -40, str16, GLUT_BITMAP_HELVETICA_18);

	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.6);
	glVertex2f(-20, 15);
	glVertex2f(-45, 15);
	glVertex2f(-45, -15);
	glVertex2f(-20, -15);
	glEnd();

	//Vertical
	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border - 0
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(-20.5, 15);
	glVertex2f(-20.5, -15);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border - 1
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(-23.5, 15);
	glVertex2f(-23.5, -15);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border - 2
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(-26.5, 15);
	glVertex2f(-26.5, -15);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border - 3
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(-29.5, 15);
	glVertex2f(-29.5, -15);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border - 4
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(-32.5, 15);
	glVertex2f(-32.5, -15);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border - 5
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(-35, 15);
	glVertex2f(-35, -15);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border - 6
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(-38.5, 15);
	glVertex2f(-38.5, -15);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border - 7
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(-41.5, 15);
	glVertex2f(-41.5, -15);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border - 8
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(-44.5, 15);
	glVertex2f(-44.5, -15);
	glEnd();

	//Horizontal

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border - 0
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(-45, 14.5);
	glVertex2f(-20, 14.5);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border - 1
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(-45, 10.5);
	glVertex2f(-20, 10.5);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border - 2
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(-45, 6.5);
	glVertex2f(-20, 6.5);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border - 3
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(-45, 2.5);
	glVertex2f(-20, 2.5);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border - 4
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(-45, -2.5);
	glVertex2f(-20, -2.5);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border - 5
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(-45, -6.5);
	glVertex2f(-20, -6.5);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border - 6
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(-45, -10.5);
	glVertex2f(-20, -10.5);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border - end
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(-45, -14.5);
	glVertex2f(-20, -14.5);
	glEnd();

	//INVERTER
	glBegin(GL_POLYGON);
	glColor3f(0.5, 0.5, 0.5);     //inverter
	glVertex2f(-10.0, 10);
	glVertex2f(15, 10);
	glVertex2f(15, -10);
	glVertex2f(-10.0, -10);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//inverter border - 1 - left
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(-9.0, 10);
	glVertex2f(-9.0, -10);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//inverter border - 2 - right
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(14.0, 10);
	glVertex2f(14.0, -10);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//inverter border - 3 - top
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(-10.0, 8.5);
	glVertex2f(15.0, 8.5);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//inverter border - 4 - bottom
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(-10.0, -8.5);
	glVertex2f(15.0, -8.5);
	glEnd();

	glPointSize(25.0);
	glBegin(GL_POINTS);
	glColor3f(1.0, 0.0, 0.0);     //inverter button red
	glVertex3f(9, 5, 0);
	glEnd();

	glPointSize(25.0);
	glBegin(GL_POINTS);
	glColor3f(0.0, 1.0, 0.0);     //inverter button green
	glVertex3f(12, 5, 0);
	glEnd();

	//BATTERY
	glBegin(GL_POLYGON);                 //battery
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(-7.5, -22);
	glVertex2f(12.5, -22);
	glVertex2f(12.5, -45);
	glVertex2f(-7.5, -45);
	glEnd();

	glBegin(GL_POLYGON);				//left battery connection
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(-6, -22);
	glVertex2f(-4, -22);
	glVertex2f(-4, -19);
	glVertex2f(-6, -19);
	glEnd();

	glBegin(GL_POLYGON);				//left battery connection
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(11, -22);
	glVertex2f(9, -22);
	glVertex2f(9, -19);
	glVertex2f(11, -19);
	glEnd();

	glLineWidth(4);
	glBegin(GL_LINES);			//battery border - bottom
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(-6, -43);
	glVertex2f(11, -43);
	glEnd();

	glLineWidth(4);
	glBegin(GL_LINES);			//battery border - top
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(-6, -24);
	glVertex2f(11, -24);
	glEnd();

	glLineWidth(4);
	glBegin(GL_LINES);			//battery border - left
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(-6, -26);
	glVertex2f(-6, -41);
	glEnd();

	glLineWidth(4);
	glBegin(GL_LINES);			//battery border - right
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(11, -26);
	glVertex2f(11, -41);
	glEnd();

	//ELECTRIC POLE
	glLineWidth(15);            //vertical
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(35,45);
	glVertex2f(35,5);
	glEnd();

	glLineWidth(7);            //horizontal top
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(26.5, 40);
	glVertex2f(43.5, 35);
	glEnd();

	glLineWidth(7);            //horizontal bottom
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(26.5, 33);
	glVertex2f(43.5, 28);
	glEnd();

	glLineWidth(15.0);				//horizontal bottom left - 1
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(28.5,35);
	glVertex2f(28.5,32.5);
	glEnd();

	glLineWidth(15.0);				//horizontal bottom left - 2
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(32.5, 34);
	glVertex2f(32.5, 31.5);
	glEnd();

	glLineWidth(15.0);				//horizontal bottom right - 1
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(37.5, 32.3);
	glVertex2f(37.5, 29.5);
	glEnd();

	glLineWidth(15.0);				//horizontal bottom right - 2
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(41.5, 31.3);
	glVertex2f(41.5, 28.5);
	glEnd();

	glLineWidth(15.0);				//horizontal top left - 1
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(28.5, 42);
	glVertex2f(28.5, 39.5);
	glEnd();

	glLineWidth(15.0);				//horizontal top left - 2
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(32.5, 41);
	glVertex2f(32.5, 38.5);
	glEnd();

	glLineWidth(15.0);				//horizontal top right - 1
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(37.5, 39.3);
	glVertex2f(37.5, 36.5);
	glEnd();

	glLineWidth(15.0);				//horizontal top right - 2
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(41.5, 38.3);
	glVertex2f(41.5, 35.5);
	glEnd();

	//House
	glBegin(GL_POLYGON);                 //body
	glColor3f(0.5, 0.0, 0.5);
	glVertex2f(28.5, -22);
	glVertex2f(45.5, -22);
	glVertex2f(45.5, -45);
	glVertex2f(28.5, -45);
	glEnd();

	glBegin(GL_TRIANGLES);                 //roof
	glColor3f(1.0, 0.5, 0.0);
	glVertex2f(28.5, -22);
	glVertex2f(45.5, -22);
	glVertex2f(37, -8);
	glEnd();

	glBegin(GL_POLYGON);                 //door
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(31.5, -30);
	glVertex2f(36.5, -30);
	glVertex2f(36.5, -45);
	glVertex2f(31.5, -45);
	glEnd();

	glPointSize(15.0);
	glBegin(GL_POINTS);                 //door lock
	glColor3f(1,1,1);
	glVertex2f(35, -37);
	glEnd();

	glBegin(GL_POLYGON);                 //window
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(38, -33);
	glVertex2f(44, -33);
	glVertex2f(44, -39);
	glVertex2f(38, -39);
	glEnd();

	glLineWidth(3.0);					//window bar - vertical
	glBegin(GL_LINES);
	glColor3f(1,1,1);
	glVertex2f(41,-33);
	glVertex2f(41,-39);
	glEnd();

	glLineWidth(3.0);					//window bar - horizontal
	glBegin(GL_LINES);
	glColor3f(1,1,1);
	glVertex2f(38, -36);
	glVertex2f(44, -36);
	glEnd();

	//Arrow - 1
	glLineWidth(2.0);
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(-18, 0);
	glVertex2f(-12, 0);
	glEnd();

	glLineWidth(2.0);
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(-12.9, 1.6);
	glVertex2f(-12, 0);
	glEnd();

	glLineWidth(2.0);
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(-12.9, -1.6);
	glVertex2f(-12, 0);
	glEnd();

	//Arrow - 2
	glLineWidth(2.0);
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(0, -12);
	glVertex2f(0, -19.5);
	glEnd();

	glLineWidth(2.0);
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(-0.9, -17.5);
	glVertex2f(0, -19.5);
	glEnd();

	glLineWidth(2.0);
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(0.9, -17.5);
	glVertex2f(0, -19.5);
	glEnd();

	//Arrow - 3
	glLineWidth(2.0);
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(6, -12);
	glVertex2f(6, -19.5);
	glEnd();

	glLineWidth(2.0);
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(6,-12);
	glVertex2f(5.1,-13.9);
	glEnd();

	glLineWidth(2.0);
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(6, -12);
	glVertex2f(6.9, -13.9);
	glEnd();

	//Arrow - 4
	glLineWidth(2.0);
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(20, 12);
	glVertex2f(28, 23);
	glEnd();

	glLineWidth(2.0);
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(25.5, 22.5);
	glVertex2f(28, 23);
	glEnd();

	glLineWidth(2.0);
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(27.5, 19);
	glVertex2f(28, 23);
	glEnd();

	//Arrow - 5
	glLineWidth(2.0);
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(17, -12);
	glVertex2f(25, -20);
	glEnd();

	glLineWidth(2.0);
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(22.5, -21);
	glVertex2f(25, -20);
	glEnd();

	glLineWidth(2.0);
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(25, -20);
	glVertex2f(24, -15.5);
	glEnd();

	glColor3f(0, 0, 0);
	bitmap_output(-37, -20, "Solar Panels", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(-10, 13, "Hybrid Inverter", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(-15, -35, "Battery", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(35, -2, "Home Appliances", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(20, 0, "AC", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(-5, -16, "DC", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(-16, 5, "DC", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(-33, 35, "PROCESS CONVERSION OF SOLAR ENERGY TO ELECTRIC ENERGY", GLUT_BITMAP_HELVETICA_18);

	glFlush();
	glutKeyboardFunc(keys4);
}

void keys3(unsigned char key3, int x, int y)
{

	if (key3 == 32)
	{
		glutDestroyWindow(id3);
        glutInitDisplayMode(GLUT_SINGLE);
        glutInitWindowSize(1366, 768);
        glutInitWindowPosition(0, 0);
        id4 = glutCreateWindow("CONVERSION OF SOLAR ENERGY TO ELECTRICITY");
        glutDisplayFunc(mydisplay3);
        init3();
        glutMainLoop();
	}
	else if(key3 == 27)
    {
        exit(0);
    }
	else
	{
		glutDisplayFunc(mydisplay2);

	}
}

//frame1 functions
void cloudB()
{
	//left

	glPushMatrix();
	glTranslatef(4, 5.5, 0);
	circle(4);
	glPopMatrix();

	//right

	glPushMatrix();
	glTranslatef(-8, 5.5, 0);
	circle(3.5);
	glPopMatrix();

	//top left

	glPushMatrix();
	glTranslatef(-3.5, 9, 0);
	circle(3.5);
	glPopMatrix();

	//top right

	glPushMatrix();
	glTranslatef(1, 9, 0);
	circle(3);
	glPopMatrix();

	//middle

	glPushMatrix();

	//glColor3f (1, 1 ,1);
	glTranslatef(-1.5, 5.5, 0);
	circle(4);
	glPopMatrix();
}

void a()                                        //mini Cloud
{
	//left

	glPushMatrix();
	glTranslatef(4, 5.5, 0);
	circle(4);
	glPopMatrix();

	//right

	glPushMatrix();
	glTranslatef(-8, 5.5, 0);
	circle(3.5);
	glPopMatrix();

	//top left

	glPushMatrix();
	glTranslatef(-3.5, 9, 0);
	circle(3.5);
	glPopMatrix();

	//top right

	glPushMatrix();
	glTranslatef(1, 9, 0);
	circle(3);
	glPopMatrix();

	//middle

	glPushMatrix();
	glTranslatef(-1.5, 5.5, 0);
	circle(4);
	glPopMatrix();

}

void car()
{
	glBegin(GL_POLYGON);			//car bottom body part
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(-45, -25, 0);
	glVertex3f(-45, -12, 0);
	glVertex3f(-20, -12, 0);
	glVertex3f(-20, -25, 0);
	glEnd();

	glBegin(GL_POLYGON);			//car top body part
	glColor3f(1.0, 1.0, 0.0);
	glVertex2f(-45, -12);
	glVertex2f(-43, -2);
	glVertex2f(-32, -2);
	glVertex2f(-27, -12);
	glEnd();

	glBegin(GL_POLYGON);			//car top middle body part
	glColor3f(0, 0, 0);
	glVertex2f(-43, -10);
	glVertex2f(-42, -4);
	glVertex2f(-33, -4);
	glVertex2f(-30, -10);
	glEnd();

	glLineWidth(5.0);			//white line
	glBegin(GL_LINES);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(-37, -10);
	glVertex2f(-37, -4);
	glEnd();

	glBegin(GL_POLYGON);			//car bottom red
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(-43.5, -23);
	glVertex2f(-43.5, -14);
	glVertex2f(-21.5, -14);
	glVertex2f(-21.5, -23);
	glEnd();

	//wheel left
	float theta1;
	glColor3f(0.5, 0.5, 0.5);
	glBegin(GL_POLYGON);
	for (int j = 0; j < 360; j++)
	{
		theta1 = j * 2.0 * 3.142 / 180;
		glVertex2f(-39 + 3 * cos(theta1), -25 + 3 * sin(theta1));
	}
	glEnd();

	//wheel right
	float theta2;
	glColor3f(0.5, 0.5, 0.5);
	glBegin(GL_POLYGON);
	for (int j = 0; j < 360; j++)
	{
		theta2 = j * 2.0 * 3.142 / 180;
		glVertex2f(-26 + 3 * cos(theta2), -25 + 3 * sin(theta2));
	}
	glEnd();

}

void c()                                        //One Single Cloud
{
	glPushMatrix();
	glColor3f(1, 1, 1);
	glTranslatef(35, 10, 0);
	a();
	glPopMatrix();


	glPushMatrix();
	glColor3f(1, 1, 1);
	glTranslatef(28, 16, 0);
	a();
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 1, 1);
	glTranslatef(20, 10, 0);
	a();
	glPopMatrix();
}

void cloud()                                     // Three Cloud in first frame
{
	glPushMatrix();
	glTranslatef(-15.0, 30.0, 0.0);
	glScalef(0.7, 0.7, 0.0);
	c();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(20.0, 25.0, 0.0);
	glScalef(0.7, 0.7, 0.0);
	c();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-60.0, 25.0, 0.0);
	glScalef(0.7, 0.7, 0.0);
	c();
	glPopMatrix();
}

void road()
{
	glBegin(GL_POLYGON);			//footpath below
	glColor3f(0.5, 0.5, 0.0);
	glVertex3f(-50, -50, 0);
	glVertex3f(50, -50, 0);
	glVertex3f(50, -37.5, 0);
	glVertex3f(-50, -37.5, 0);
	glEnd();

	glBegin(GL_POLYGON);			//road lower
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-50, -42.5, 0);
	glVertex3f(50, -42.5, 0);
	glVertex3f(50, -32.5, 0);
	glVertex3f(-50, -32.5, 0);
	glEnd();

	glBegin(GL_POLYGON);			//road center
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-50, -30.5, 0);
	glVertex3f(50, -30.5, 0);
	glVertex3f(50, -32.5, 0);
	glVertex3f(-50, -32.5, 0);
	glEnd();

	glBegin(GL_POLYGON);			//road upper
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-50, -30.5, 0);
	glVertex3f(50, -30.5, 0);
	glVertex3f(50, -19.5, 0);
	glVertex3f(-50, -19.5, 0);
	glEnd();

	glBegin(GL_POLYGON);			//footpath above
	glColor3f(0.5, 0.5, 0.0);
	glVertex3f(-50, -19.5, 0);
	glVertex3f(50, -19.5, 0);
	glVertex3f(50, -10, 0);
	glVertex3f(-50, -10, 0);
	glEnd();
}

void tution()
{
	glBegin(GL_POLYGON);			//office
	glColor3f(0.1, 0.1, 0.1);
	glVertex3f(-40, -10, 0);
	glVertex3f(-25, -10, 0);
	glVertex3f(-25, 15, 0);
	glVertex3f(-40, 15, 0);
	glEnd();

	glBegin(GL_POLYGON);			//office hut
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-38, 23, 0);
	glVertex3f(-27, 23, 0);
	glVertex3f(-25, 15, 0);
	glVertex3f(-40, 15, 0);
	glEnd();

	glBegin(GL_POLYGON);			//office door
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-38, 6, 0);
	glVertex3f(-32, 6, 0);
	glVertex3f(-32, -10, 0);
	glVertex3f(-38, -10, 0);
	glEnd();

	glPointSize(12.0);              //office door lock
	glBegin(GL_POINTS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(-33,-2);
	glEnd();

	glBegin(GL_POLYGON);			//office window
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-30, 6, 0);
	glVertex3f(-26, 6, 0);
	glVertex3f(-26, 0, 0);
	glVertex3f(-30, 0, 0);
	glEnd();

	glBegin(GL_LINES);			//office window rod - horizontal
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-30, 3, 0);
	glVertex3f(-26, 3, 0);
	glEnd();

	glBegin(GL_LINES);			//office window rod - vertical
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-28, 6, 0);
	glVertex3f(-28, 0, 0);
	glEnd();

	glBegin(GL_POLYGON);			//alpha residency
	glColor3f(0.2, 0.2, 0.2);
	glVertex3f(-15, -10, 0);
	glVertex3f(15, -10, 0);
	glVertex3f(15, 30, 0);
	glVertex3f(-15, 30, 0);
	glEnd();

	glBegin(GL_POLYGON);			//alpha residency top
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-13, 42, 0);
	glVertex3f(13, 42, 0);
	glVertex3f(15, 30, 0);
	glVertex3f(-15, 30, 0);
	glEnd();

	glBegin(GL_POLYGON);			//alpha residency door
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-5, -10, 0);
	glVertex3f(5, -10, 0);
	glVertex3f(5, 12, 0);
	glVertex3f(-5, 12, 0);
	glEnd();

	glPointSize(12.0);              //alpha door lock
	glBegin(GL_POINTS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(3,1);
	glEnd();

	glBegin(GL_LINES);			//partition line
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(15, 13.5, 0);
	glVertex3f(-15, 13.5, 0);
	glEnd();

	glBegin(GL_POLYGON);			//alpha residency window left bottom
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-14, 0, 0);
	glVertex3f(-6, 0, 0);
	glVertex3f(-6, 8, 0);
	glVertex3f(-14, 8, 0);
	glEnd();

	glBegin(GL_POLYGON);			//alpha residency window left top
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-14, 16, 0);
	glVertex3f(-6, 16, 0);
	glVertex3f(-6, 24, 0);
	glVertex3f(-14, 24, 0);
	glEnd();
	glBegin(GL_POLYGON);			//alpha residency middle window
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-5, 16, 0);
	glVertex3f(5, 16, 0);
	glVertex3f(5, 24, 0);
	glVertex3f(-5, 24, 0);
	glEnd();


	glBegin(GL_POLYGON);			//alpha residency window right bottom
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(6, 0, 0);
	glVertex3f(14, 0, 0);
	glVertex3f(14, 8, 0);
	glVertex3f(6, 8, 0);
	glEnd();

	glBegin(GL_POLYGON);			//alpha residency window right top
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(6, 24, 0);
	glVertex3f(14, 24, 0);
	glVertex3f(14, 16, 0);
	glVertex3f(6, 16, 0);
	glEnd();

	glBegin(GL_POLYGON);			//home
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(25, -10, 0);
	glVertex3f(25, 30, 0);
	glVertex3f(35, 30, 0);
	glVertex3f(45, 30, 0);
	glVertex3f(45, -10, 0);
	glEnd();

	glBegin(GL_POLYGON);			//home top
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(35.5, 45, 0);
	glVertex3f(25, 30, 0);
	glVertex3f(45, 30, 0);
	glEnd();

	glBegin(GL_POLYGON);			//home door
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(27, -10, 0);
	glVertex3f(27, 7, 0);
	glVertex3f(32, 7, 0);
	glVertex3f(32, -10, 0);
	glEnd();

	glPointSize(12.0);              //door lock
	glBegin(GL_POINTS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(30.5,-1);
	glEnd();

	glBegin(GL_POLYGON);			//home door top
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(34, 10, 0);
	glVertex3f(34, 20, 0);
	glVertex3f(42, 20, 0);
	glVertex3f(42, 10, 0);
	glEnd();

	glBegin(GL_POLYGON);			//home top window
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(27, 10, 0);
	glVertex3f(27, 20, 0);
	glVertex3f(32, 20, 0);
	glVertex3f(32, 10, 0);
	glEnd();

	glBegin(GL_POLYGON);			//home bottom window
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(34, -2, 0);
	glVertex3f(34, 5, 0);
	glVertex3f(42, 5, 0);
	glVertex3f(42, -2, 0);
	glEnd();

    glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(25,8.5);
    glVertex2f(45,8.5);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(34,1.5,0);
	glVertex3f(42,1.5,0);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(38,5,0);
	glVertex3f(38,-2,0);
	glEnd();
}

//frame two functions
void cloudB2()
{
	//left

	glPushMatrix();
	glTranslatef(4, 5.5, 0);
	circle(4);
	glPopMatrix();

	//right

	glPushMatrix();
	glTranslatef(-8, 5.5, 0);
	circle(3.5);
	glPopMatrix();

	//top left

	glPushMatrix();
	glTranslatef(-3.5, 9, 0);
	circle(3.5);
	glPopMatrix();

	//top right

	glPushMatrix();
	glTranslatef(1, 9, 0);
	circle(3);
	glPopMatrix();

	//middle

	glPushMatrix();

	//glColor3f (1, 1 ,1);
	glTranslatef(-1.5, 5.5, 0);
	circle(4);
	glPopMatrix();



}

void a2()                                        //mini Cloud
{
	//left
	glPushMatrix();
	glTranslatef(4, 5.5, 0);
	circle(4);
	glPopMatrix();

	//right
	glPushMatrix();
	glTranslatef(-8, 5.5, 0);
	circle(3.5);
	glPopMatrix();

	//top left
	glPushMatrix();
	glTranslatef(-3.5, 9, 0);
	circle(3.5);
	glPopMatrix();

	//top right
	glPushMatrix();
	glTranslatef(1, 9, 0);
	circle(3);
	glPopMatrix();

	//middle
	glPushMatrix();
	glTranslatef(-1.5, 5.5, 0);
	circle(4);
	glPopMatrix();

}

void c2()                                        //One Single Cloud
{
	glPushMatrix();
	glColor3f(1, 1, 1);
	glTranslatef(35, 10, 0);
	a2();
	glPopMatrix();


	glPushMatrix();
	glColor3f(1, 1, 1);
	glTranslatef(28, 16, 0);
	a2();
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 1, 1);
	glTranslatef(20, 10, 0);
	a2();
	glPopMatrix();
}

void cloud2()                                     // Three Cloud
{
	glPushMatrix();
	glTranslatef(-15.0, 30.0, 0.0);
	glScalef(0.7, 0.7, 0.0);
	c2();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(20.0, 25.0, 0.0);
	glScalef(0.7, 0.7, 0.0);
	c2();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-60.0, 25.0, 0.0);
	glScalef(0.7, 0.7, 0.0);
	c2();
	glPopMatrix();
}

void road2()
{

	glBegin(GL_POLYGON);			//footpath below
	glColor3f(0.5, 0.5, 0.0);
	glVertex3f(-50, -50, 0);
	glVertex3f(50, -50, 0);
	glVertex3f(50, -37.5, 0);
	glVertex3f(-50, -37.5, 0);
	glEnd();

	glBegin(GL_POLYGON);			//road lower
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-50, -42.5, 0);
	glVertex3f(50, -42.5, 0);
	glVertex3f(50, -32.5, 0);
	glVertex3f(-50, -32.5, 0);
	glEnd();

	glBegin(GL_POLYGON);			//road center
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-50, -30.5, 0);
	glVertex3f(50, -30.5, 0);
	glVertex3f(50, -32.5, 0);
	glVertex3f(-50, -32.5, 0);
	glEnd();

	glBegin(GL_POLYGON);			//road upper
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-50, -30.5, 0);
	glVertex3f(50, -30.5, 0);
	glVertex3f(50, -19.5, 0);
	glVertex3f(-50, -19.5, 0);
	glEnd();

	glBegin(GL_POLYGON);			//footpath above
	glColor3f(0.5, 0.5, 0.0);
	glVertex3f(-50, -19.5, 0);
	glVertex3f(50, -19.5, 0);
	glVertex3f(50, -10, 0);
	glVertex3f(-50, -10, 0);
	glEnd();
}

void tution2()
{
	glBegin(GL_POLYGON);			//office
	glColor3f(0.1, 0.1, 0.6);
	glVertex3f(-40, -10, 0);
	glVertex3f(-25, -10, 0);
	glVertex3f(-25, 15, 0);
	glVertex3f(-40, 15, 0);
	glEnd();

	glBegin(GL_POLYGON);			//office hut
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-38, 23, 0);
	glVertex3f(-27, 23, 0);
	glVertex3f(-25, 15, 0);
	glVertex3f(-40, 15, 0);
	glEnd();

	glBegin(GL_POLYGON);			//office door
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(-38, 6, 0);
	glVertex3f(-32, 6, 0);
	glVertex3f(-32, -10, 0);
	glVertex3f(-38, -10, 0);
	glEnd();

	glPointSize(12.0);              //office door lock
	glBegin(GL_POINTS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(-33,-2);
	glEnd();

	glBegin(GL_POLYGON);			//office window
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(-30, 6, 0);
	glVertex3f(-26, 6, 0);
	glVertex3f(-26, 0, 0);
	glVertex3f(-30, 0, 0);
	glEnd();

	glBegin(GL_LINES);			//office window rod
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-30, 3, 0);
	glVertex3f(-26, 3, 0);
	glEnd();

	glBegin(GL_LINES);			//office window rod
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-28, 6, 0);
	glVertex3f(-28, 0, 0);
	glEnd();

	glBegin(GL_POLYGON);			//alpha residency
	glColor3f(1.0, 0.6, 1.0);
	glVertex3f(-15, -10, 0);
	glVertex3f(15, -10, 0);
	glVertex3f(15, 30, 0);
	glVertex3f(-15, 30, 0);
	glEnd();


	glBegin(GL_POLYGON);			//alpha residency top
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-13, 42, 0);
	glVertex3f(13, 42, 0);
	glVertex3f(15, 30, 0);
	glVertex3f(-15, 30, 0);
	glEnd();

	glBegin(GL_POLYGON);			//alpha residency door
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(-5, -10, 0);
	glVertex3f(5, -10, 0);
	glVertex3f(5, 12, 0);
	glVertex3f(-5, 12, 0);
	glEnd();

	glPointSize(12.0);              //alpha door lock
	glBegin(GL_POINTS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(3,1);
	glEnd();

	glBegin(GL_LINES);			//partition line
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(15, 13.5, 0);
	glVertex3f(-15, 13.5, 0);
	glEnd();

	glBegin(GL_POLYGON);			//alpha residency window left bottom
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(-14, 0, 0);
	glVertex3f(-6, 0, 0);
	glVertex3f(-6, 8, 0);
	glVertex3f(-14, 8, 0);
	glEnd();

	glBegin(GL_POLYGON);			//alpha residency window left top
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(-14, 16, 0);
	glVertex3f(-6, 16, 0);
	glVertex3f(-6, 24, 0);
	glVertex3f(-14, 24, 0);
	glEnd();
	glBegin(GL_POLYGON);			//alpha residency middle window
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(-5, 16, 0);
	glVertex3f(5, 16, 0);
	glVertex3f(5, 24, 0);
	glVertex3f(-5, 24, 0);
	glEnd();


	glBegin(GL_POLYGON);			//alpha residency window right bottom
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(6, 0, 0);
	glVertex3f(14, 0, 0);
	glVertex3f(14, 8, 0);
	glVertex3f(6, 8, 0);
	glEnd();

	glBegin(GL_POLYGON);			//alpha residency window right top
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(6, 24, 0);
	glVertex3f(14, 24, 0);
	glVertex3f(14, 16, 0);
	glVertex3f(6, 16, 0);
	glEnd();

	glBegin(GL_POLYGON);			//home
	glColor3f(0.3, 0.0, 0.0);
	glVertex3f(25, -10, 0);
	glVertex3f(25, 30, 0);
	glVertex3f(35, 30, 0);
	glVertex3f(45, 30, 0);
	glVertex3f(45, -10, 0);
	glEnd();

	glBegin(GL_POLYGON);			//home top
	glColor3f(1.0, 0.5, 0.0);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(35.5, 45, 0);
	glVertex3f(25, 30, 0);
	glVertex3f(45, 30, 0);
	glEnd();

	glBegin(GL_POLYGON);			//home door
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(27, -10, 0);
	glVertex3f(27, 7, 0);
	glVertex3f(32, 7, 0);
	glVertex3f(32, -10, 0);
	glEnd();

	glPointSize(12.0);              //door lock
	glBegin(GL_POINTS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(30.5,-1);
	glEnd();

	glBegin(GL_POLYGON);			//home door top
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(34, 10, 0);
	glVertex3f(34, 20, 0);
	glVertex3f(42, 20, 0);
	glVertex3f(42, 10, 0);
	glEnd();

	glBegin(GL_POLYGON);			//home side window
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(27, 10, 0);
	glVertex3f(27, 20, 0);
	glVertex3f(32, 20, 0);
	glVertex3f(32, 10, 0);
	glEnd();

	glBegin(GL_POLYGON);			//home bottom window
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(34, -2, 0);
	glVertex3f(34, 5, 0);
	glVertex3f(42, 5, 0);
	glVertex3f(42, -2, 0);
	glEnd();

    glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(25,8.5);
    glVertex2f(45,8.5);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(34,1.5,0);
	glVertex3f(42,1.5,0);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(38,5,0);
	glVertex3f(38,-2,0);
	glEnd();

	glBegin(GL_LINES);			//stars
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-40.5, 30, 0);
	glVertex3f(-41, 30, 0);
	glEnd();

	glBegin(GL_LINES);			//stars
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-40.5, 40, 0);
	glVertex3f(-41, 40, 0);
	glEnd();

	glBegin(GL_LINES);			//stars
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-30.5, 45, 0);
	glVertex3f(-31, 45, 0);
	glEnd();

}

//frame3 functions
void road3()
{

	glBegin(GL_POLYGON);			//footpath below
	glColor3f(0.5, 0.5, 0.0);
	glVertex3f(-50, -50, 0);
	glVertex3f(50, -50, 0);
	glVertex3f(50, -37.5, 0);
	glVertex3f(-50, -37.5, 0);
	glEnd();

	glBegin(GL_POLYGON);			//road lower
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-50, -42.5, 0);
	glVertex3f(50, -42.5, 0);
	glVertex3f(50, -32.5, 0);
	glVertex3f(-50, -32.5, 0);
	glEnd();

	glBegin(GL_POLYGON);			//road center
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-50, -30.5, 0);
	glVertex3f(50, -30.5, 0);
	glVertex3f(50, -32.5, 0);
	glVertex3f(-50, -32.5, 0);
	glEnd();

	glBegin(GL_POLYGON);			//road upper
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-50, -30.5, 0);
	glVertex3f(50, -30.5, 0);
	glVertex3f(50, -19.5, 0);
	glVertex3f(-50, -19.5, 0);
	glEnd();

	glBegin(GL_POLYGON);			//footpath above
	glColor3f(0.5, 0.5, 0.0);
	glVertex3f(-50, -19.5, 0);
	glVertex3f(50, -19.5, 0);
	glVertex3f(50, -10, 0);
	glVertex3f(-50, -10, 0);
	glEnd();
}

void tution3()
{
	glBegin(GL_POLYGON);			//office
	glColor3f(0.1, 0.1, 0.6);
	glVertex3f(-40, -10, 0);
	glVertex3f(-25, -10, 0);
	glVertex3f(-25, 15, 0);
	glVertex3f(-40, 15, 0);
	glEnd();

	glBegin(GL_POLYGON);			//office hut
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-38, 23, 0);
	glVertex3f(-27, 23, 0);
	glVertex3f(-25, 15, 0);
	glVertex3f(-40, 15, 0);
	glEnd();

	glBegin(GL_POLYGON);			//office door
	glColor3f(0.4, 0.4, 0.4);
	glVertex3f(-38, 6, 0);
	glVertex3f(-32, 6, 0);
	glVertex3f(-32, -10, 0);
	glVertex3f(-38, -10, 0);
	glEnd();

	glPointSize(12.0);              //office door lock
	glBegin(GL_POINTS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(-33,-2);
	glEnd();

	glBegin(GL_POLYGON);			//office window
	glColor3f(0.4, 0.4, 0.4);
	glVertex3f(-30, 6, 0);
	glVertex3f(-26, 6, 0);
	glVertex3f(-26, 0, 0);
	glVertex3f(-30, 0, 0);
	glEnd();

	glBegin(GL_LINES);			//office window rod
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-30, 3, 0);
	glVertex3f(-26, 3, 0);
	glEnd();

	glBegin(GL_LINES);			//office window rod
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-28, 6, 0);
	glVertex3f(-28, 0, 0);
	glEnd();

	glBegin(GL_POLYGON);			//alpha residency
	glColor3f(1.0, 0.6, 1.0);
	glVertex3f(-15, -10, 0);
	glVertex3f(15, -10, 0);
	glVertex3f(15, 30, 0);
	glVertex3f(-15, 30, 0);
	glEnd();


	glBegin(GL_POLYGON);			//alpha residency top
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-13, 42, 0);
	glVertex3f(13, 42, 0);
	glVertex3f(15, 30, 0);
	glVertex3f(-15, 30, 0);
	glEnd();

	glBegin(GL_POLYGON);			//alpha residency door
	glColor3f(0.4, 0.4, 0.4);
	glVertex3f(-5, -10, 0);
	glVertex3f(5, -10, 0);
	glVertex3f(5, 12, 0);
	glVertex3f(-5, 12, 0);
	glEnd();

	glPointSize(12.0);              //alpha door lock
	glBegin(GL_POINTS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(3,1);
	glEnd();

	glBegin(GL_LINES);			//partition line
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(15, 13.5, 0);
	glVertex3f(-15, 13.5, 0);
	glEnd();

	glBegin(GL_POLYGON);			//alpha residency window left bottom
	glColor3f(0.4, 0.4, 0.4);
	glVertex3f(-14, 0, 0);
	glVertex3f(-6, 0, 0);
	glVertex3f(-6, 8, 0);
	glVertex3f(-14, 8, 0);
	glEnd();

	glBegin(GL_POLYGON);			//alpha residency window left top
	glColor3f(0.4, 0.4, 0.4);
	glVertex3f(-14, 16, 0);
	glVertex3f(-6, 16, 0);
	glVertex3f(-6, 24, 0);
	glVertex3f(-14, 24, 0);
	glEnd();
	glBegin(GL_POLYGON);			//alpha residency middle window
	glColor3f(0.4, 0.4, 0.4);
	glVertex3f(-5, 16, 0);
	glVertex3f(5, 16, 0);
	glVertex3f(5, 24, 0);
	glVertex3f(-5, 24, 0);
	glEnd();


	glBegin(GL_POLYGON);			//alpha residency window right bottom
	glColor3f(0.4, 0.4, 0.4);
	glVertex3f(6, 0, 0);
	glVertex3f(14, 0, 0);
	glVertex3f(14, 8, 0);
	glVertex3f(6, 8, 0);
	glEnd();

	glBegin(GL_POLYGON);			//alpha residency window right top
	glColor3f(0.4, 0.4, 0.4);
	glVertex3f(6, 24, 0);
	glVertex3f(14, 24, 0);
	glVertex3f(14, 16, 0);
	glVertex3f(6, 16, 0);
	glEnd();

	glBegin(GL_POLYGON);			//home
	glColor3f(0.3, 0.0, 0.0);
	glVertex3f(25, -10, 0);
	glVertex3f(25, 30, 0);
	glVertex3f(35, 30, 0);
	glVertex3f(45, 30, 0);
	glVertex3f(45, -10, 0);
	glEnd();

	glBegin(GL_POLYGON);			//home top
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(35.5, 45, 0);
	glVertex3f(25, 30, 0);
	glVertex3f(45, 30, 0);
	glEnd();

	glBegin(GL_POLYGON);			//home door
	glColor3f(0.4, 0.4, 0.4);
	glVertex3f(27, -10, 0);
	glVertex3f(27, 7, 0);
	glVertex3f(32, 7, 0);
	glVertex3f(32, -10, 0);
	glEnd();

	glPointSize(12.0);              //door lock
	glBegin(GL_POINTS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(30.5,-1);
	glEnd();


	glBegin(GL_POLYGON);			//home door top
	glColor3f(0.4, 0.4, 0.4);
	glVertex3f(34, 10, 0);
	glVertex3f(34, 20, 0);
	glVertex3f(42, 20, 0);
	glVertex3f(42, 10, 0);
	glEnd();

	glBegin(GL_POLYGON);			//home top window
	glColor3f(0.4, 0.4, 0.4);
	glVertex3f(27, 10, 0);
	glVertex3f(27, 20, 0);
	glVertex3f(32, 20, 0);
	glVertex3f(32, 10, 0);
	glEnd();

	glBegin(GL_POLYGON);			//home side window
	glColor3f(0.4, 0.4, 0.4);
	glVertex3f(34, -2, 0);
	glVertex3f(34, 5, 0);
	glVertex3f(42, 5, 0);
	glVertex3f(42, -2, 0);
	glEnd();

	glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(25,8.5);
    glVertex2f(45,8.5);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(34,1.5,0);
	glVertex3f(42,1.5,0);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(38,5,0);
	glVertex3f(38,-2,0);
	glEnd();

	glBegin(GL_LINES);			//stars
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-40.5, 30, 0);
	glVertex3f(-41, 30, 0);
	glEnd();

	glBegin(GL_LINES);			//stars
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-40.5, 40, 0);
	glVertex3f(-41, 40, 0);
	glEnd();

	glBegin(GL_LINES);			//stars
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-30.5, 45, 0);
	glVertex3f(-31, 45, 0);
	glEnd();

}

//frame4 functions
void road4()
{
	glBegin(GL_POLYGON);			//footpath below
	glColor3f(0.5, 0.5, 0.0);
	glVertex3f(-50, -50, 0);
	glVertex3f(50, -50, 0);
	glVertex3f(50, -37.5, 0);
	glVertex3f(-50, -37.5, 0);
	glEnd();

	glBegin(GL_POLYGON);			//road lower
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-50, -42.5, 0);
	glVertex3f(50, -42.5, 0);
	glVertex3f(50, -32.5, 0);
	glVertex3f(-50, -32.5, 0);
	glEnd();

	glBegin(GL_POLYGON);			//road center
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-50, -30.5, 0);
	glVertex3f(50, -30.5, 0);
	glVertex3f(50, -32.5, 0);
	glVertex3f(-50, -32.5, 0);
	glEnd();

	glBegin(GL_POLYGON);			//road upper
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-50, -30.5, 0);
	glVertex3f(50, -30.5, 0);
	glVertex3f(50, -19.5, 0);
	glVertex3f(-50, -19.5, 0);
	glEnd();

	glBegin(GL_POLYGON);			//footpath above
	glColor3f(0.5, 0.5, 0.0);
	glVertex3f(-50, -19.5, 0);
	glVertex3f(50, -19.5, 0);
	glVertex3f(50, -10, 0);
	glVertex3f(-50, -10, 0);
	glEnd();

}

void tution4()
{
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.6);
	glVertex3f(0, 0, 0);
	glVertex3f(20, 0, 0);
	glVertex3f(20, 30, 0);
	glVertex3f(0, 30, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(19.7, 0, 0);
	glVertex3f(19.7, 30, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(0.3, 0, 0);
	glVertex3f(0.3, 30, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(4, 0, 0);
	glVertex3f(4, 30, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(8, 0, 0);
	glVertex3f(8, 30, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(12, 0, 0);
	glVertex3f(12, 30, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(16, 0, 0);
	glVertex3f(16, 30, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(0, 0.5, 0);
	glVertex3f(20, 0.5, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(0, 5, 0);
	glVertex3f(20, 5, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(0, 10, 0);
	glVertex3f(20, 10, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(0, 15, 0);
	glVertex3f(20, 15, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(0, 20, 0);
	glVertex3f(20, 20, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(0, 25, 0);
	glVertex3f(20, 25, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(0, 29.5, 0);
	glVertex3f(20, 29.5, 0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5, 0.5, 0.5);     //inverter
	glVertex3f(7, 5, 0);
	glVertex3f(-7, 5, 0);
	glVertex3f(-7, -8, 0);
	glVertex3f(7, -8, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//inverter border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-6.8, 5, 0);
	glVertex3f(-6.8, -8, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//inverter border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(6.7, 5, 0);
	glVertex3f(6.7, -8, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//inverter border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(7, -7.6, 0);
	glVertex3f(-7, -7.6, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//inverter border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(7, 4.6, 0);
	glVertex3f(-7, 4.6, 0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 0.0);     //inverter
	glVertex3f(6, 4, 0);
	glVertex3f(4, 4, 0);
	glVertex3f(4, 1, 0);
	glVertex3f(6, 1, 0);
	glEnd();

}


//frame5 functions
void road5()
{
	glBegin(GL_POLYGON);			//footpath below
	glColor3f(0.5, 0.5, 0.0);
	glVertex3f(-50, -50, 0);
	glVertex3f(50, -50, 0);
	glVertex3f(50, -37.5, 0);
	glVertex3f(-50, -37.5, 0);
	glEnd();

	glBegin(GL_POLYGON);			//road lower
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-50, -42.5, 0);
	glVertex3f(50, -42.5, 0);
	glVertex3f(50, -32.5, 0);
	glVertex3f(-50, -32.5, 0);
	glEnd();

	glBegin(GL_POLYGON);			//road center
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-50, -30.5, 0);
	glVertex3f(50, -30.5, 0);
	glVertex3f(50, -32.5, 0);
	glVertex3f(-50, -32.5, 0);
	glEnd();

	glBegin(GL_POLYGON);			//road upper
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-50, -30.5, 0);
	glVertex3f(50, -30.5, 0);
	glVertex3f(50, -19.5, 0);
	glVertex3f(-50, -19.5, 0);
	glEnd();

	glBegin(GL_POLYGON);			//footpath above
	glColor3f(0.5, 0.5, 0.0);
	glVertex3f(-50, -19.5, 0);
	glVertex3f(50, -19.5, 0);
	glVertex3f(50, -10, 0);
	glVertex3f(-50, -10, 0);
	glEnd();
}

void tution5()
{
	glBegin(GL_POLYGON);			//office
	glColor3f(0.5, 0.1, 0.6);
	glVertex3f(-40, -10, 0);
	glVertex3f(-25, -10, 0);
	glVertex3f(-25, 15, 0);
	glVertex3f(-40, 15, 0);
	glEnd();

	glBegin(GL_POLYGON);			//office hut
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-38, 23, 0);
	glVertex3f(-27, 23, 0);
	glVertex3f(-25, 15, 0);
	glVertex3f(-40, 15, 0);
	glEnd();

	glBegin(GL_POLYGON);			//office door
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-38, 6, 0);
	glVertex3f(-32, 6, 0);
	glVertex3f(-32, -10, 0);
	glVertex3f(-38, -10, 0);
	glEnd();

	glPointSize(12.0);              //office door lock
	glBegin(GL_POINTS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(-33,-2);
	glEnd();

	glBegin(GL_POLYGON);			//office window
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-30, 6, 0);
	glVertex3f(-26, 6, 0);
	glVertex3f(-26, 0, 0);
	glVertex3f(-30, 0, 0);
	glEnd();

	glBegin(GL_LINES);			//office window rod
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-30, 3, 0);
	glVertex3f(-26, 3, 0);
	glEnd();

	glBegin(GL_LINES);			//office window rod
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-28, 6, 0);
	glVertex3f(-28, 0, 0);
	glEnd();

	glBegin(GL_POLYGON);			//alpha residency
	glColor3f(1.0, 0.6, 1.0);
	glVertex3f(-15, -10, 0);
	glVertex3f(15, -10, 0);
	glVertex3f(15, 30, 0);
	glVertex3f(-15, 30, 0);
	glEnd();


	glBegin(GL_POLYGON);			//alpha residency top
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-13, 42, 0);
	glVertex3f(13, 42, 0);
	glVertex3f(15, 30, 0);
	glVertex3f(-15, 30, 0);
	glEnd();

	glBegin(GL_POLYGON);			//alpha residency door
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-5, -10, 0);
	glVertex3f(5, -10, 0);
	glVertex3f(5, 12, 0);
	glVertex3f(-5, 12, 0);
	glEnd();

	glPointSize(12.0);              //alpha door lock
	glBegin(GL_POINTS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(3,1);
	glEnd();

	glBegin(GL_LINES);			//partition line
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(15, 13.5, 0);
	glVertex3f(-15, 13.5, 0);
	glEnd();

	glBegin(GL_POLYGON);			//alpha residency window left bottom
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-14, 0, 0);
	glVertex3f(-6, 0, 0);
	glVertex3f(-6, 8, 0);
	glVertex3f(-14, 8, 0);
	glEnd();

	glBegin(GL_POLYGON);			//alpha residency window left top
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-14, 16, 0);
	glVertex3f(-6, 16, 0);
	glVertex3f(-6, 24, 0);
	glVertex3f(-14, 24, 0);
	glEnd();
	glBegin(GL_POLYGON);			//alpha residency middle window
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-5, 16, 0);
	glVertex3f(5, 16, 0);
	glVertex3f(5, 24, 0);
	glVertex3f(-5, 24, 0);
	glEnd();


	glBegin(GL_POLYGON);			//alpha residency window right bottom
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(6, 0, 0);
	glVertex3f(14, 0, 0);
	glVertex3f(14, 8, 0);
	glVertex3f(6, 8, 0);
	glEnd();

	glBegin(GL_POLYGON);			//alpha residency window right top
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(6, 24, 0);
	glVertex3f(14, 24, 0);
	glVertex3f(14, 16, 0);
	glVertex3f(6, 16, 0);
	glEnd();

	glBegin(GL_POLYGON);			//home
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(25, -10, 0);
	glVertex3f(25, 30, 0);
	glVertex3f(35, 30, 0);
	glVertex3f(45, 30, 0);
	glVertex3f(45, -10, 0);
	glEnd();

	glBegin(GL_POLYGON);			//home top
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(35.5, 45, 0);
	glVertex3f(25, 30, 0);
	glVertex3f(45, 30, 0);
	glEnd();

	glBegin(GL_POLYGON);			//home door
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(27, -10, 0);
	glVertex3f(27, 7, 0);
	glVertex3f(32, 7, 0);
	glVertex3f(32, -10, 0);
	glEnd();

	glPointSize(12.0);              //door lock
	glBegin(GL_POINTS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(30.5,-1);
	glEnd();

	glBegin(GL_POLYGON);			//home door top
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(34, 10, 0);
	glVertex3f(34, 20, 0);
	glVertex3f(42, 20, 0);
	glVertex3f(42, 10, 0);
	glEnd();

	glBegin(GL_POLYGON);			//home top window
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(27, 10, 0);
	glVertex3f(27, 20, 0);
	glVertex3f(32, 20, 0);
	glVertex3f(32, 10, 0);
	glEnd();

	glBegin(GL_POLYGON);			//home side window
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(34, -2, 0);
	glVertex3f(34, 5, 0);
	glVertex3f(42, 5, 0);
	glVertex3f(42, -2, 0);
	glEnd();

	glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(25,8.5);
    glVertex2f(45,8.5);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(34,1.5,0);
	glVertex3f(42,1.5,0);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(38,5,0);
	glVertex3f(38,-2,0);
	glEnd();
}

void solar5()
{
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.6);
	glVertex3f(0, 0, 0);
	glVertex3f(20, 0, 0);
	glVertex3f(20, 30, 0);
	glVertex3f(0, 30, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(19.7, 0, 0);
	glVertex3f(19.7, 30, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(0.3, 0, 0);
	glVertex3f(0.3, 30, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(4, 0, 0);
	glVertex3f(4, 30, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(8, 0, 0);
	glVertex3f(8, 30, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(12, 0, 0);
	glVertex3f(12, 30, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(16, 0, 0);
	glVertex3f(16, 30, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(0, 0.5, 0);
	glVertex3f(20, 0.5, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(0, 5, 0);
	glVertex3f(20, 5, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(0, 10, 0);
	glVertex3f(20, 10, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(0, 15, 0);
	glVertex3f(20, 15, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(0, 20, 0);
	glVertex3f(20, 20, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(0, 25, 0);
	glVertex3f(20, 25, 0);
	glEnd();


	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(0, 29.5, 0);
	glVertex3f(20, 29.5, 0);
	glEnd();
}

//frame 6 functions
void road6()
{
	glBegin(GL_POLYGON);			//footpath below
	glColor3f(0.5, 0.5, 0.0);
	glVertex3f(-50, -50, 0);
	glVertex3f(50, -50, 0);
	glVertex3f(50, -37.5, 0);
	glVertex3f(-50, -37.5, 0);
	glEnd();

	glBegin(GL_POLYGON);			//road lower
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-50, -42.5, 0);
	glVertex3f(50, -42.5, 0);
	glVertex3f(50, -32.5, 0);
	glVertex3f(-50, -32.5, 0);
	glEnd();

	glBegin(GL_POLYGON);			//road center
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-50, -30.5, 0);
	glVertex3f(50, -30.5, 0);
	glVertex3f(50, -32.5, 0);
	glVertex3f(-50, -32.5, 0);
	glEnd();

	glBegin(GL_POLYGON);			//road upper
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-50, -30.5, 0);
	glVertex3f(50, -30.5, 0);
	glVertex3f(50, -19.5, 0);
	glVertex3f(-50, -19.5, 0);
	glEnd();

	glBegin(GL_POLYGON);			//footpath above
	glColor3f(0.5, 0.5, 0.0);
	glVertex3f(-50, -19.5, 0);
	glVertex3f(50, -19.5, 0);
	glVertex3f(50, -10, 0);
	glVertex3f(-50, -10, 0);
	glEnd();
}

void tution6()
{
	glBegin(GL_POLYGON);			//office
	glColor3f(0.4, 0.2, 0.6);
	glVertex3f(-40, -10, 0);
	glVertex3f(-25, -10, 0);
	glVertex3f(-25, 15, 0);
	glVertex3f(-40, 15, 0);
	glEnd();

	glBegin(GL_POLYGON);			//office hut
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-38, 23, 0);
	glVertex3f(-27, 23, 0);
	glVertex3f(-25, 15, 0);
	glVertex3f(-40, 15, 0);
	glEnd();

	glBegin(GL_POLYGON);			//office door
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(-38, 6, 0);
	glVertex3f(-32, 6, 0);
	glVertex3f(-32, -10, 0);
	glVertex3f(-38, -10, 0);
	glEnd();

	glPointSize(12.0);              //office door lock
	glBegin(GL_POINTS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(-33,-2);
	glEnd();

	glBegin(GL_POLYGON);			//office window
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(-30, 6, 0);
	glVertex3f(-26, 6, 0);
	glVertex3f(-26, 0, 0);
	glVertex3f(-30, 0, 0);
	glEnd();

	glBegin(GL_LINES);			//office window rod
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-30, 3, 0);
	glVertex3f(-26, 3, 0);
	glEnd();

	glBegin(GL_LINES);			//office window rod
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-28, 6, 0);
	glVertex3f(-28, 0, 0);
	glEnd();

	glBegin(GL_POLYGON);			//alpha residency
	glColor3f(1.0, 0.6, 1.0);
	glVertex3f(-15, -10, 0);
	glVertex3f(15, -10, 0);
	glVertex3f(15, 30, 0);
	glVertex3f(-15, 30, 0);
	glEnd();


	glBegin(GL_POLYGON);			//alpha residency top
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-13, 42, 0);
	glVertex3f(13, 42, 0);
	glVertex3f(15, 30, 0);
	glVertex3f(-15, 30, 0);
	glEnd();

	glBegin(GL_POLYGON);			//alpha residency door
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(-5, -10, 0);
	glVertex3f(5, -10, 0);
	glVertex3f(5, 12, 0);
	glVertex3f(-5, 12, 0);
	glEnd();

	glPointSize(12.0);              //alpha door lock
	glBegin(GL_POINTS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(3,1);
	glEnd();

	glBegin(GL_LINES);			//partition line
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(15, 13.5, 0);
	glVertex3f(-15, 13.5, 0);
	glEnd();

	glBegin(GL_POLYGON);			//alpha residency window left bottom
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(-14, 0, 0);
	glVertex3f(-6, 0, 0);
	glVertex3f(-6, 8, 0);
	glVertex3f(-14, 8, 0);
	glEnd();

	glBegin(GL_POLYGON);			//alpha residency window left top
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(-14, 16, 0);
	glVertex3f(-6, 16, 0);
	glVertex3f(-6, 24, 0);
	glVertex3f(-14, 24, 0);
	glEnd();
	glBegin(GL_POLYGON);			//alpha residency middle window
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(-5, 16, 0);
	glVertex3f(5, 16, 0);
	glVertex3f(5, 24, 0);
	glVertex3f(-5, 24, 0);
	glEnd();


	glBegin(GL_POLYGON);			//alpha residency window right bottom
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(6, 0, 0);
	glVertex3f(14, 0, 0);
	glVertex3f(14, 8, 0);
	glVertex3f(6, 8, 0);
	glEnd();

	glBegin(GL_POLYGON);			//alpha residency window right top
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(6, 24, 0);
	glVertex3f(14, 24, 0);
	glVertex3f(14, 16, 0);
	glVertex3f(6, 16, 0);
	glEnd();

	glBegin(GL_POLYGON);			//home
	glColor3f(0.3, 0.0, 0.0);
	glVertex3f(25, -10, 0);
	glVertex3f(25, 30, 0);
	glVertex3f(35, 30, 0);
	glVertex3f(45, 30, 0);
	glVertex3f(45, -10, 0);
	glEnd();

	glBegin(GL_POLYGON);			//home top
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(35.5, 45, 0);
	glVertex3f(25, 30, 0);
	glVertex3f(45, 30, 0);
	glEnd();

	glBegin(GL_POLYGON);			//home door
	glColor3f(0.6, 0.6, 0.6);
	glVertex3f(27, -10, 0);
	glVertex3f(27, 7, 0);
	glVertex3f(32, 7, 0);
	glVertex3f(32, -10, 0);
	glEnd();

	glPointSize(12.0);              //door lock
	glBegin(GL_POINTS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(30.5,-1);
	glEnd();

	glBegin(GL_POLYGON);			//home door top
	glColor3f(0.6, 0.6, 0.6);
	glVertex3f(34, 10, 0);
	glVertex3f(34, 20, 0);
	glVertex3f(42, 20, 0);
	glVertex3f(42, 10, 0);
	glEnd();

	glBegin(GL_POLYGON);			//home top window
	glColor3f(0.6, 0.6, 0.6);
	glVertex3f(27, 10, 0);
	glVertex3f(27, 20, 0);
	glVertex3f(32, 20, 0);
	glVertex3f(32, 10, 0);
	glEnd();

	glBegin(GL_POLYGON);			//home side window
	glColor3f(0.7, 0.7, 0.7);
	glVertex3f(34, -2, 0);
	glVertex3f(34, 5, 0);
	glVertex3f(42, 5, 0);
	glVertex3f(42, -2, 0);
	glEnd();

	glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(25,8.5);
    glVertex2f(45,8.5);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(34,1.5,0);
	glVertex3f(42,1.5,0);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(38,5,0);
	glVertex3f(38,-2,0);
	glEnd();
}

void solar6()
{
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.6);
	glVertex3f(0, 0, 0);
	glVertex3f(20, 0, 0);
	glVertex3f(20, 30, 0);
	glVertex3f(0, 30, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(19.7, 0, 0);
	glVertex3f(19.7, 30, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(0.3, 0, 0);
	glVertex3f(0.3, 30, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(4, 0, 0);
	glVertex3f(4, 30, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(8, 0, 0);
	glVertex3f(8, 30, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(12, 0, 0);
	glVertex3f(12, 30, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(16, 0, 0);
	glVertex3f(16, 30, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(0, 0.5, 0);
	glVertex3f(20, 0.5, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(0, 5, 0);
	glVertex3f(20, 5, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(0, 10, 0);
	glVertex3f(20, 10, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(0, 15, 0);
	glVertex3f(20, 15, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(0, 20, 0);
	glVertex3f(20, 20, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(0, 25, 0);
	glVertex3f(20, 25, 0);
	glEnd();


	glLineWidth(2);
	glBegin(GL_LINES);			//pannel border
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(0, 29.5, 0);
	glVertex3f(20, 29.5, 0);
	glEnd();

}

void spindisplay5()
{
    cxcar5 += 0.015;
	cx41 += 0.01;
	cx42 += 0.01;
	cx43 += 0.01;
	cx44 += 0.01;
	cx45 += 0.005;
	if (cx41 > 20)
		exit(0);
	glutPostRedisplay();
}

void display5(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	//bitmap_output(0,0, "TUTION CLASSES", GLUT_BITMAP_TIMES_ROMAN_24);

	//SUN
	glPushMatrix();
	//glTranslatef(0.0, 0.0, 0.0);
	glTranslatef(cx45, 40.0, 0.0);
	glScalef(1.0, 1.5, 0.0);
	glColor3f(1.0, 1.0, 1.0);
	circle(3);
	glPopMatrix();

	//Cloud1
	glPushMatrix();
	glColor3f(0.2, 0.2, 0.1);
	glTranslatef(cx41, 17.0, 0.0);
	cloudB();
	glPopMatrix();

	//Cloud2
	glPushMatrix();
	glColor3f(0.2, 0.2, 0.2);
	glTranslatef(cx42, 20.0, 0.0);
	cloudB();
	glPopMatrix();


	//Cloud3
	/*glPushMatrix();
	glTranslatef(cx3, 0.0, 0.0);
	glScalef(0.8, 1, 0);
	cloud();
	glPopMatrix();
	draw_tree();
	*/

	road6();

	glPushMatrix();
	//glTranslatef(10,10,0);
	glTranslatef(x1, 0, 0);
	tution6();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(cxcar5, -2, 0);
	car();
	glPopMatrix();

	//solar pannel alpha residency
	glPushMatrix();
	//glTranslatef(0.0, 0.0, 0.0);
	glTranslatef(-10, 30.0, 0.0);
	glScalef(1.0, 0.4, 0.0);
	//glColor3f(1.0, 1.0, 0.0);
	solar6();
	glPopMatrix();

	//solar pannel office
	glPushMatrix();
	glTranslatef(-37.5, 15.0, 0.0);
	glScalef(0.5, 0.25, 0.0);
	solar6();
	glPopMatrix();

    glColor3f(1,1,1);
	bitmap_output(-35, 10, "Office", GLUT_BITMAP_TIMES_ROMAN_24);
    bitmap_output(-5.5, 25.5, "Red Bricks Apartments", GLUT_BITMAP_TIMES_ROMAN_24);
    bitmap_output(33, 24, "House", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(23, -13, "NO POWER IN THIS HOUSE..", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(-36.5, -47, "When the power goes OFF, then we can use the power stored in solar pannels and continue with our activities.", GLUT_BITMAP_TIMES_ROMAN_24);

	glFlush();
}

void spindisplay4()
{
    cxcar4 += 0.015;
	cx31 += 0.01;
	cx32 += 0.01;
	cx33 += 0.01;
	cx34 += 0.01;
	cx35 += 0.005;

	if (cx31 > 15)
	{
		glClearColor(0, 0.5, 0.5, 0);
		glutDisplayFunc(display5);
		glutIdleFunc(spindisplay5);
	}
	glutPostRedisplay();
}

void display4(void)
{

	glClear(GL_COLOR_BUFFER_BIT);
	//bitmap_output(0,0, "TUTION CLASSES", GLUT_BITMAP_TIMES_ROMAN_24);

	//SUN
	glPushMatrix();
	//glTranslatef(0.0, 0.0, 0.0);
	glTranslatef(cx35, 40.0, 0.0);
	glScalef(1.0, 1.5, 0.0);
	glColor3f(1.0, 1.0, 0.0);
	circle(3);
	glPopMatrix();

	//Cloud1
	glPushMatrix();
	glColor3f(1, 1, 1);
	glTranslatef(cx31, 17.0, 0.0);
	cloudB();
	glPopMatrix();

	//Cloud2
	glPushMatrix();
	glColor3f(1, 1, 1);
	glTranslatef(cx32, 20.0, 0.0);
	cloudB();
	glPopMatrix();

	//Cloud3
	glPushMatrix();
	glTranslatef(cx33, 0.0, 0.0);
	glScalef(0.8, 1, 0);
	cloud();
	glPopMatrix();
	//draw_tree();

	road5();

	glPushMatrix();
	//glTranslatef(10,10,0);
	glTranslatef(x1, 0, 0);
	tution5();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(cxcar4, -2, 0);
	car();
	glPopMatrix();


	//solar pannel alpha residency
	glPushMatrix();
	//glTranslatef(0.0, 0.0, 0.0);
	glTranslatef(-10, 30.0, 0.0);
	glScalef(1.0, 0.4, 0.0);
	//glColor3f(1.0, 1.0, 0.0);
	solar5();
	glPopMatrix();

	//solar pannel office
	glPushMatrix();
	glTranslatef(-37.5, 15.0, 0.0);
	glScalef(0.5, 0.25, 0.0);
	solar5();
	glPopMatrix();

    glColor3f(0,0,0);
	bitmap_output(-35, 10, "Office", GLUT_BITMAP_TIMES_ROMAN_24);
    bitmap_output(-5.5, 25.5, "Red Bricks Apartments", GLUT_BITMAP_TIMES_ROMAN_24);
    bitmap_output(33, 24, "House", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(-43.5, -47, "But after installing SOLAR PANEL System to the houses, then it will be useful to store power and use it for different purposes.", GLUT_BITMAP_TIMES_ROMAN_24);

	glFlush();
}

void spindisplay3()
{
    cxcar3 += 0.015;
	cx21 += 0.01;
	cx22 += 0.01;
	cx23 += 0.01;
	cx24 += 0.01;
	cx25 += 0.005;

	if (cx21 > 15)
	{
		glClearColor(0, 0.749, 1, 0);
        glutDisplayFunc(display4);
		glutIdleFunc(spindisplay4);
	}
	glutPostRedisplay();

}

void display3(void)
{

	glClear(GL_COLOR_BUFFER_BIT);
	//bitmap_output(0,0, "TUTION CLASSES", GLUT_BITMAP_TIMES_ROMAN_24);

	//SUN
	glPushMatrix();
	//glTranslatef(0.0, 0.0, 0.0);
	glTranslatef(cx25, 40.0, 0.0);
	glScalef(1.0, 1.5, 0.0);
	glColor3f(1.0, 1.0, 1.0);
	circle(3);
	glPopMatrix();

	//Cloud1
	glPushMatrix();
	glColor3f(0.2, 0.2, 0.1);
	glTranslatef(cx21, 17.0, 0.0);
	cloudB();
	glPopMatrix();

	//Cloud2
	glPushMatrix();
	glColor3f(0.2, 0.2, 0.2);
	glTranslatef(cx22, 20.0, 0.0);
	cloudB();
	glPopMatrix();


	road3();

	glPushMatrix();
	//glTranslatef(10,10,0);
	glTranslatef(x1, 0, 0);
	tution3();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(cxcar3, -2, 0);
	car();
	glPopMatrix();

    glColor3f(1,1,1);
	bitmap_output(-35, 10, "Office", GLUT_BITMAP_TIMES_ROMAN_24);
    bitmap_output(-5.5, 25.5, "Red Bricks Apartments", GLUT_BITMAP_TIMES_ROMAN_24);
    bitmap_output(33, 24, "House", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(-23.5, -47, "When the power goes off, it will be quite difficult to perform some of the activities. ", GLUT_BITMAP_TIMES_ROMAN_24);

	glFlush();
}

void spindisplay2()
{
    cxcar2 += 0.015;
	cx11 += 0.01;
	cx12 += 0.01;
	cx13 += 0.01;
	cx14 += 0.01;
	cx15 += 0.005;

	if (cx11 > 15)
	{
		glClearColor(0, 0.5, 0.5, 0);
		glutDisplayFunc(display3);
		glutIdleFunc(spindisplay3);
	}
	glutPostRedisplay();
}

void display2(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	//bitmap_output(0,0, "TUTION CLASSES", GLUT_BITMAP_TIMES_ROMAN_24);

	//SUN
	glPushMatrix();
	//glTranslatef(0.0, 0.0, 0.0);
	glTranslatef(cx15, 40.0, 0.0);
	glScalef(1.0, 1.5, 0.0);
	glColor3f(1.0, 1.0, 1.0);
	circle(3);
	glPopMatrix();

	//Cloud1
	glPushMatrix();
	glColor3f(0.2, 0.2, 0.1);
	glTranslatef(cx11, 17.0, 0.0);
	cloudB2();
	glPopMatrix();

	//Cloud2
	glPushMatrix();
	glColor3f(0.2, 0.2, 0.2);
	glTranslatef(cx12, 20.0, 0.0);
	cloudB2();
	glPopMatrix();


	//Cloud3
	/*glPushMatrix();
	glTranslatef(cx3, 0.0, 0.0);
	glScalef(0.8, 1, 0);
	cloud();
	glPopMatrix();
	draw_tree();
	*/

	road2();

	glPushMatrix();
	//glTranslatef(10,10,0);
	glTranslatef(x1, 0, 0);
	tution2();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(cxcar2, -2, 0);
	car();
	glPopMatrix();

    glColor3f(1,1,1);
	bitmap_output(-35, 10, "Office", GLUT_BITMAP_TIMES_ROMAN_24);
    bitmap_output(-5.5, 25.5, "Red Bricks Apartments", GLUT_BITMAP_TIMES_ROMAN_24);
    bitmap_output(33, 24, "House", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(-15.5, -47, "During the night time, when there is electricity supply.", GLUT_BITMAP_TIMES_ROMAN_24);

	glFlush();
}

void spindisplay1()
{
    //speeds
    cxcar += 0.015;
	cx1 += 0.01;
	cx2 += 0.01;
	cx3 += 0.01;
	cx4 += 0.01;
	cx5 += 0.005;

	if (cx1 > 15)
	{
		glClearColor(0, 0.5, 0.5, 0);
		glutDisplayFunc(display2);
		glutIdleFunc(spindisplay2);
	}
	glutPostRedisplay();
}

void display1(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	//bitmap_output(0,0, "TUTION CLASSES", GLUT_BITMAP_TIMES_ROMAN_24);

	//SUN
	glPushMatrix();
	//glTranslatef(0.0, 0.0, 0.0);
	glTranslatef(cx5, 40.0, 0.0); //move along x-axis with y-axis at 40
	glScalef(1.0, 1.5, 0.0);// changes the size with respect to x and y axis
	glColor3f(1.0, 1.0, 0.0);
	circle(3.5);
	glPopMatrix();

	//Cloud1
	glPushMatrix();
	glColor3f(1, 1, 1);
	glTranslatef(cx1, 17.0, 0.0);
	cloudB();
	glPopMatrix();

	//Cloud2
	glPushMatrix();
	glColor3f(1, 1, 1);
	glTranslatef(cx2, 20.0, 0.0);
	cloudB();
	glPopMatrix();

	//Cloud3
	glPushMatrix();
	glTranslatef(cx3, 0.0, 0.0);
	glScalef(0.8, 1, 0);
	cloud();
	glPopMatrix();
	//draw_tree();

	road();

	glPushMatrix();
	//glTranslatef(10,10,0);
	glTranslatef(x1, 0, 0);
	tution();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(cxcar, -2, 0);
	car();
	glPopMatrix();

    glColor3f(1,1,1);
	bitmap_output(-35, 10, "Office", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(-5.5, 25.5, "Red Bricks Apartments", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(-11.5, -47, "A fine Sunny Day...", GLUT_BITMAP_TIMES_ROMAN_24);

	glColor3f(0,0,0);
	bitmap_output(33, 24, "House", GLUT_BITMAP_TIMES_ROMAN_24);
	glFlush();
}

//init function
void init_real(void)
{
	glClearColor(0, 0.749, 1, 0);
	glOrtho(-50.0, 50.0, -50.0, 50.0, -1.0, 1.0);
	//glClearColor(0.5, 0.749, 0.5, 0);
}

void keys4(unsigned char key4, int x, int y)
{

	if (key4 == 32)
	{
		glutDestroyWindow(id4);
        glutInitDisplayMode(GLUT_SINGLE);
        glutInitWindowSize(1366, 768);
        glutInitWindowPosition(0, 0);
        id5 = glutCreateWindow("Real life application");
        glutDisplayFunc(display1);
        glutIdleFunc(spindisplay1);
        init_real();
        glutMainLoop();
	}
	else if(key4 == 27)
    {
        exit(0);
    }
	else
	{
		glutDisplayFunc(mydisplay1);

	}
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	//glutInitWindowSize(3200, 1200);
	glutInitWindowSize(1366, 768);
	glutInitWindowPosition(0, 0);
	id1 = glutCreateWindow("INTRODUCTION");
	glutDisplayFunc(mydisplay);
	glutKeyboardFunc(keys1);
	myinit();
	glutMainLoop();
}
