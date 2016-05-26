#ifndef _FUNCTION_H_
#define _FUCNTION_H_

#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

void input(float a[100], int n);
void reflect( float a[100],int n);
void negative( float a[100], int n);
float max(  float a[100], int n);
float firstPositive( float a[100], int n);
int MinPosition( float a[100], int n);
float MinPositive( float a[100], int n);
float Min( float a[100], int n);
float MaxNegative( float a[100], int n);
int MinNegativePosition( float a[100], int n);
float Furthest( float a[100], int n , int x);
void Interval( float a[100], int n);
float Intervalx( float a[100], int n);
float FindLastNegative(float a[100], int n);
void SearchAbs( float a[100], int n);
void SearchContrary(float a[100], int n);
int CountBiggest ( float a[100], int n);
int CountNearby ( float a[100], int n);
int CountDistinct ( float a[100], int n);
void ShowNotDistinct ( float a[100], int n);
void RemovingBiggestOnes( float a[100], int n);

#endif