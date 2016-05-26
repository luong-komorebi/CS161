#pragma once
struct point
{
	float x;
	float y;
};
struct circle 
{
	float x;
	float y;
	float r;
};
void input( point p[], int &n);
void inputcircle( circle &C);
int Distance( point p[],circle C, int n);
