#pragma once

struct product
{
	float weight;
	float price;
};

void input ( product a[], int &n);
void inputfromfile( product a[], int n);
product MaximumPrice ( product a[], int n);
product MaximumWeight( product a[], int n);