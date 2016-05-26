#include "function.h"

int main()
{
	int n,x,aa;
	int a[100];
	int remove;
	cout <<" How many elements do you want to input ? "; 
	cin >> n;
	cout << " Please input a random x : " ;
	cin >>x ;
	input(a,n);
	cout << endl;
	reflect(a,n);
	cout << endl;
	int b= Prime(a,n);
	if ( b!= -1)
		cout << " This is the first Prime number : " << b << endl;
	else cout<< " hoola "<< b <<" .... ooops There is no prime number in the array " << endl;
	int c= BiggestPrime(a,n);
	if ( c!= -1)
		cout << " This is the biggest Prime number : " << c << endl;
	else cout<< " hoola "<< c <<" .... ooops There is no prime number in the array " << endl;
	int d= BCNN( a,n);
	cout <<" This is the smallest common mutilples of all numbers in the array: " << d << endl;
	SearchEven(a,n);
	SearchBeginningWithOdd(a,n);
	NearestCouple( a, n);
	int e=SumOfAll(a,n);
	cout << " The Sum of all elements : " << e << endl;
	int f=SumOfHangChucLa5(a,n);
	cout << " The Sum of all elements with 5 as the second digit from the right to left :  "<< f <<endl;
	int g=SumOfBiggerThanPrecedent(a,n);
	cout << " The Sum of all numbers which are bigger than its nearby precedent : " << g << endl;
	int h=SumOfBiggerThanSuccessor(a,n);
	cout << " The Sum of all numbers which are bigger than its nearby successor: " << h << endl;
	int k=AverageSumOfPrime( a, n);
	cout << " The average sum of all prime numbers : " << k <<endl;
	int l=CountEven(a, n);
	cout << " There are " << l << " even numbers in the array " << endl;
	int m= CountRateOfAppearance(a, n,x );
	cout << " X appears " << m << " times in the array " << endl;
	int o= CountBiggerOrSmallerNearby(a,n);
	cout << " Numbers that are Bigger or Smaller than its 2 other numbers nearby: " << o<< endl;
	int p= CountPrime(a, n) ;
	cout <<" There are " << p<< " prime numbers in the array " <<endl;
	int q= ZeroorNot(a, n);
	cout<< " Checking if there is a element equal to zero : ( 0 is yes, 1 is no) " << q << endl;
	int r= ZeroZeroorNot( a, n);
	cout<< " Checking if there are 2 number 0 lying near each other : ( 0 is yes, 1 is no) " << r << endl;
	int s=YesOrNoPrime( a, n) ;
	cout<< " Checking if there is any prime number : ( 1 is yes, 0 is no) " << s << endl;
	int t=ArrayisEvenorOdd(a, n);
	cout <<" Checking if ''ham co tinh chan le hay ko'' (1 is yes, 0 is no) : " << t <<endl;
	int y= ArithmeticProgression( a, n);
	cout <<  " Checking if ''ham co tinh chan le hay ko'' ( 0 is no, other numbers is a common difference) : " << y << endl;
	SortAscending(a,n);
	SortDescending( a, n);
	SortAscendingOddPosition( a, n);
	SortPrime( a,n) ;
	SortAscendingPositiveOnly( a, n);
	int insert, wheretoinsert;
	cout << " Enter the number you want to insert : " ;
	cin>> insert;
	cout <<" Where do you want to insert ( becareful it must not reach out of the array range) : ";
	cin>> wheretoinsert;
	InsertingNumber(  a, n, insert,wheretoinsert);
	InsertingAscending ( a,n, insert);
	cout <<" Please enter the position you want to remove " ;
	cin >> remove;
	Removing( a, n, remove);
	RemovingNegative(a, n);
	ReversingArray( a,n);
	ReversingEven( a,n);
	cout <<" How many times do you want to rotate ? " ;
	cin>>aa;
	Rotate(a,n,aa);
	SubArray( a, n);
	SubArray2(a, n);
	SubArrayAscending(a,n);
	BuildOdd( a,n);
	BuildNegative(a,n);

	return 0;
}