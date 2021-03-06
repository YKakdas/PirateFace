#ifndef PIRATE_FACE_H
#define PIRATE_FACE_H

#include <iostream>
#include "Angel.h"
#include <vector>
#include <Math.h>

using namespace Angel;
using namespace std;
typedef vec3 point3;

const int n = 10; // number of rotations 

/* struct for holding all constants for pirate face drawing components */
struct PirateFace {
	GLfloat faceRadius;
	GLint numberOfVerticesOfCircle;
	point3 centerOfFace;
	GLfloat eyeRadius;
	point3 centerOfEye;
	GLint numberOfVerticesOfBandanna;
	GLfloat smileRadius;
	GLint numberOfVerticesOfSmile;
	point3 centerOfSmile;

	PirateFace() {
		faceRadius = 0.35;
		numberOfVerticesOfCircle = 360;
		centerOfFace = { 0.0,0.0,0.0 };
		eyeRadius = 0.04;
		centerOfEye = { 0.13,0.1,0.0 };
		numberOfVerticesOfBandanna = 6;
		smileRadius = 0.22;
		numberOfVerticesOfSmile = 15;
		centerOfSmile = { 0.0,0.03,0.0 };
	}
};

struct PirateFace pirateFace;

vec3 color = { 0.0,0.0,0.0 };

const double PI = 3.141592653589793238463;

/* vector for scaling,translating and rotating */
vec3 scaleVec = { 1.0,1.0,1.0 };
vec3 translateVec = { 0.0,0.0,0.0 };
vec3 rotateVec = { 0.0,0.0,0.0 };

/* int positions for uniform variables */
GLint uniformScalePos;
GLint uniformTranslatePos;
GLint uniformRotatePos;

const GLint width = 500;
const GLint height = 500;

/* vector for holding all vertices of pirate face */
vector<point3> pirateFaceVertices;

/* initial values for translation and rotation */
GLfloat translateAmount = -0.64;
GLfloat radius = 0.3;
GLfloat theta = 0.0;

#endif
