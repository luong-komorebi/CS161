#include "function.h"

void input(int a[100], int n)
{
	cout << " Please enter all elements you want";
	for ( int i = 0; i< n; i++)
	{
		cout << "  a["<<i<<"]= " ;
		cin >> a[i];
	}
}
void reflect( int a[100],int n)
{
	cout << " These are what you have inputted : " ;
	for ( int i = 0;i < n; i++)
	{
		cout << a[i] << " ";
	}
}
void even( int a[100], int n)
{
	cout << " These are the even numbers :";
	for ( int i = 0;i < n; i++)
	{
		if ( a[i]%2 == 0) 
			cout  << a[i] << "  " ;
	}

}
int Prime( int a[100], int n) 
{
	bool check = true;
	for ( int i = 0;i < n; i++)
	{
		if (a[i]>2)
		{
			check=true;
			if (a[i] % 2 == 0)  
			{
				check= false;
			}
			for (int j = 3; j < sqrt(a[i]*1.0); j += 2) 
			{
				if (a[i]%j == 0) 
				{
					check= false;
				}
			}
		}
		else check= false;
		if (check== true)
		{
			return a[i];
		}
	}
	return -1;
}
int BiggestPrime ( int a[100], int n)
{
	bool check = true;
	int max=0;
	for ( int i = 0;i < n; i++)
	{
		if (a[i]>2)
		{
			check=true;
			if (a[i] % 2 == 0)  
			{
				check= false;
			}
			for (int j = 3; j < sqrt(a[i]*1.0); j += 2) 
			{
				if (a[i]%j == 0) 
				{
					check= false;
				}
			}
		}
		else check= false;
		if (check== true && a[i]> max)
		{
			max= a[i];
		}
	}
	return max;
}
int BCNN( int a[100], int n)
{
	int temp1= a[0];
	for ( int i=0 ; i < n; ++i)
	{
		for ( int j=1; j<= abs(a[i]); ++j)
		{
			if ( (temp1*j)% abs(a[i])==0)
			{
				temp1 *=j;
				break;
			}
		}
	}
	return temp1;
}
void SearchEven( int a[100], int n)
{
	cout << " All numbers that is even and has other even numbers value nearby are:  " ;
	for ( int i =0; i< n ; i++)
	{
		if ( a[i]%2==0 && ( a[i+1]%2==0 || a[i-1]%2==0))
			cout << a[i] << " " ;
	}
	cout <<endl;
}
void SearchBeginningWithOdd( int a[100], int n)
{
	cout <<" These are all the numbers beginning with an odd number : ";
	for ( int i=0 ; i < n ; i++)
	{
		int temp=a[i];
		for ( int k=10 ; k<= (10*abs(temp)); temp/=10)
		{
			if ( ((abs(temp)/k)== 0) && ((abs(temp)%k)%2!=0))
				cout << a[i] << " " ;
		}
	}
	cout <<endl;
}
void NearestCouple( int a[100], int n)
{
	cout<< " These are the nearest couples in our array: ";
	for ( int i=0 ; i < n ; i++)
	{
		for (int j = i+1; j< n; ++j)
		{
			int nearest = abs(a[1]-a[0]);
			if ( abs(a[j]-a[i]) <= nearest ) 
			{
				nearest = a[j]-a[i];
				cout << a[i] << " and " << a[j] << " // " ;
			}
		}
	}
	cout<<endl;
}
int SumOfAll( int a[100], int n)
{
	int sum=0;
	for ( int i=0 ; i < n ; i++)
	{
		sum+=a[i];
	}
	return sum;
}
int SumOfHangChucLa5(int a[100], int n)
{
	int sum=0;
	for ( int i=0 ; i < n ; i++)
	{
		if ( abs(a[i])/10 > 0)
		{
			int temp= a[i];
			int k =10;
			temp/=k;
			if ( abs(temp%k) == 5)
			{
				sum+=a[i];
			}
			
		}
	}
	return sum;

}
int SumOfBiggerThanSuccessor( int a [100], int n)
{
	int sum=0;
	for ( int i =0; i< n-1 ; i++)
		{
			if (a[i]> abs(a[i+1]))
				sum+=a[i];
		}
	
	return sum;
}
int SumOfBiggerThanPrecedent( int a [100], int n)
{
	int sum=0;
	for ( int i =1; i< n ; i++)
		{
			if (a[i]> abs(a[i-1]))
				sum+=a[i];
		}
	
	return sum;
}
int AverageSumOfPrime( int a[100], int n) 
{
	int sum=0, count=1;
	bool check = true;
	for ( int i = 0;i < n; i++)
	{
		if (a[i]>2)
		{
			check=true;
			if (a[i] % 2 == 0)  
			{
				check= false;
			}
			for (int j = 3; j < sqrt(a[i]*1.0); j += 2) 
			{
				if (a[i]%j == 0) 
				{
					check= false;
				}
			}
		}
		else check= false;
		if (check== true)
		{
			sum+=a[i];
			count++;
		}
	}
	return sum/count;
}
int CountEven( int a[100], int n)
{
	int count =0;
	for ( int i = 0;i < n; i++)
	{
		if ( a[i]%2 == 0) 
			count++;
	}
	return count;
}
int CountRateOfAppearance( int a[100], int n, int x)
{
	int count =0;
	for ( int i = 0;i < n; i++)
	{
		if ( x == a[i] )
			count ++;
	}
	return count;
}
int CountBiggerOrSmallerNearby( int a[100], int n)
{
	int count =0;
	for ( int i = 0;i < n; i++)
	{
		if ( (a[i]< a[i+1] && a[i] < a[i-1]) || (a[i] > a[i+1] && a[i]> a[i-1]))
			count ++;
	}
	return count;
}
int CountPrime( int a[100], int n) 
{
	int count =0;
	bool check = true;
	for ( int i = 0;i < n; i++)
	{
		if (a[i]>2)
		{
			check=true;
			if (a[i] % 2 == 0)  
			{
				check= false;
			}
			for (int j = 3; j < sqrt(a[i]*1.0); j += 2) 
			{
				if (a[i]%j == 0) 
				{
					check= false;
				}
			}
		}
		else check= false;
		if (check== true)
		{
			count ++;
		}
	}
	return count;
}
int ZeroorNot(int a[100], int n)
{
	for( int i=0; i< n ; i++)
	{
		if ( a[i] == 0)
			return 0;
	}
	return 1;
}
int ZeroZeroorNot( int a[100], int n)
{
	for( int i=0; i< n ; i++)
	{
		if ( a[i] == 0 && a[i+1] ==0)
			return 0;
	}
	return 1;
}
int YesOrNoPrime( int a[100], int n) 
{
	bool check = true;
	for ( int i = 0;i < n; i++)
	{
		if (a[i]>2)
		{
			check=true;
			if (a[i] % 2 == 0)  
			{
				check= false;
			}
			for (int j = 3; j < sqrt(a[i]*1.0); j += 2) 
			{
				if (a[i]%j == 0) 
				{
					check= false;
				}
			}
		}
		else check= false;
		if (check== true)
		{
			return 1;
		}
	}
	return 0;
}
int ArrayisEvenorOdd( int a[100], int n)
{
	for ( int i=0; i<n-1; i++)
	{
		if ( (a[i] + a[i+1] )%2==0)
			return 0;
	}
	return 1;
}
int ArithmeticProgression( int a[100], int n)
{
	int temp= a[1]-a[0];
	for ( int i= 0; i< n; ++i)
	{
		
		if ( a[i+1] - a[i] != temp)
			return 0;
	}
	return temp;
}
void SortAscending( int a[100], int n)
{
	for ( int i = 0; i < n-1; i++)
	{
		for ( int j =i+1; j< n; j++)
		{
			if (a[i] > a[j])
			{
				int tam=a[i];
				a[i]=a[j];
				a[j]=tam;
			}
		}
	}
	for ( int i = 0; i < n; i++)
	{
		cout<<a[i] << " " ;
	}
	
	cout << endl;
}
void SortDescending( int a[100], int n)
{
	for ( int i = 0; i < n-1; i++)
	{
		for ( int j =i+1; j< n; j++)
		{
			if (a[i] < a[j])
			{
				int tam=a[i];
				a[i]=a[j];
				a[j]=tam;
			}
		}
	}
	for ( int i = 0; i < n; i++)
		cout<<a[i] << " " ;
	
	cout << endl;
}
void SortAscendingOddPosition( int a[100], int n)
{
	for ( int i = 1; i < n-2; i+=2)
	{
		for ( int j =i+2; j< n; j+=2)
		{
			{
				if (a[i] > a[j])
				{
					int tam=a[i];
					a[i]=a[j];
					a[j]=tam;
				}
			}
		}
	}
	for ( int i = 0; i < n; i++)
		cout<<a[i] << " " ;
	
	cout << endl;
}
void SortPrime( int a[100], int n) 
{
	int b[100];
	int k=0;
	bool check = true;
	for ( int i = 0;i < n; i++)
	{
		if (a[i]>2)
		{
			check=true;
			if (a[i] % 2 == 0)  
			{
				check= false;
			}
			for (int j = 3; j < sqrt(a[i]*1.0); j += 2) 
			{
				if (a[i]%j == 0) 
				{
					check= false;
				}
			}
		}
		else check= false;
		if (check== true)
		{
			b[k]=a[i];
			k++;
		}
	}
	for ( int i = 0; i < k-2; i++)
	{
		for ( int j =i+1; j< k-1; j++)
		{
			if (b[i] > b[j])
			{
				int tam=b[i];
				b[i]=b[j];
				b[j]=tam;
			}
		}
	}
	for ( int i = 0; i < k-1; i++)
		cout<<b[i] << " " ;
	
	cout << endl;

}
void SortAscendingPositiveOnly( int a[100], int n)
{
	for ( int i = 0; i < n-1; i++)
	{
		if (a[i]> 0)
		{
			for ( int j =i+1; j< n; j++)
			{
				if (a[i] > a[j] && a[j]>0)
				{
					int tam=a[i];
					a[i]=a[j];
					a[j]=tam;
				}
			}
		}
	}
	for ( int i = 0; i < n; i++)
		cout<<a[i] << " " ;
	
	cout << endl;
}
void InsertingNumber( int a[100], int n, int insert, int wheretoinsert)
{
	int b[100];
	int k=0;
	for ( int i=0; i<=n; i++)
	{
		b[k]=a[i];
		k++;
	}
	if ( wheretoinsert > 0 && wheretoinsert< n)
	{
		for ( int i=k ; i> wheretoinsert; i--)
		{
			b[i]=b[i-1];
		}
		b[wheretoinsert]=insert;
		k++;
	}
	for ( int i=0; i < k-1 ; i++)
		cout <<b[i] << " " ;
	cout << endl;
}
void InsertingAscending ( int a[100], int n, int insert)
{
	for ( int i = 0; i < n-1; i++)
	{
		for ( int j =i+1; j< n; j++)
		{
			if (a[i] > a[j])
			{
				int tam=a[i];
				a[i]=a[j];
				a[j]=tam;
			}
		}
	}
	int b[100];
	int k=0;
	for ( int i=0; i<=n; i++)
	{
		b[k]=a[i];
		k++;
	}
	for( int i=k-2; i > 0; i--)
	{
		if ( insert > b[i] && insert > b[i-1])
		{
			b[i+1]=insert;
			break;

		}
		else if ( insert < b[0] && insert < b[1])
		{
		
			for ( int  j = k-1; j >0; j--)
			{
				b[j]=b[j-1];
			}
			b[0]= insert;
			break;
		}
		else if ( insert < b[i] && insert > b[i-1])
		{
			for ( int  j = k-1; j >i; j--)
			{
				b[j]=b[j-1];
			}
			b[i]=insert;
			break;

		}
	}
	for ( int i=0; i < k ; i++)
		cout <<b[i] << " " ;
	cout << endl;
}
void Removing( int a[100], int n, int remove)
{
	int b[100];
	int k=0;
	for ( int i=0; i<=n; i++)
	{
		b[k]=a[i];
		k++;
	}
	for ( int i = remove ; i < k-2; i++)
	{
		b[i]=b[i+1];
	}
	k--;
	for ( int i=0; i < k-1; i++)
		cout <<b[i] << " " ;
	cout << endl;
	
}
void RemovingNegative( int a[100], int n)
{
	int b[100];
	int k=0;
	for ( int i=0; i<=n; i++)
	{
		b[k]=a[i];
		k++;
	}
	k--;
	for ( int i=0; i < k; i++)
	{
		{
			if ( b[i] < 0 ) 
			{
				for ( int h = i ; h < k; h++)
				{
					b[h]=b[h+1];
				}
			k--;
			i--;
			}
		}
	}


	for ( int i=0; i < k ; i++)
		cout <<b[i] << " " ;
	cout << endl;

}
void ReversingArray( int a[100], int n)
{
	int b[100];
	int k=0;
	for ( int i=n-1; i >=0; i--)
	{
		b[k]=a[i];
		k++;
	}
	for ( int i = 0; i < k ; i++)
		cout << b[i] << " " ;
	cout << endl;
}
void ReversingEven( int a[100], int n)
{
	int k=0, g=0;
	int b[100], c[100];
	for ( int i = 0;i < n; i++)
	{	
		if ( a[i]%2 == 0) 
			{
				b[k]=a[i];
				k++;
			}
	}
	for ( int i = k -1; i>= 0; i--)
	{
		c[g]=b[i];
		g++;
	}
	for ( int i = 0; i < g ; i++)
	{
		cout << c[i] << "  " ;
	}
	cout <<endl;
}
void Rotate(int a[100],int n, int aa)
{
	int b[100];
	int k=0;
	for ( int i=n-1; i >=0; i--)
	{
		b[k]=a[i];
		k++;
	}
	int tmp=b[0];
	for (int i=0;i<k-1;i++) 
		b[i]=b[i+1];
	b[n-1]=tmp;
	for ( int i=0; i < k; i++)
	{
		for ( int j=0; j<=i; j++)
			cout << a[j] << " " ;
		cout<< endl;
	}
 }
void SubArray( int a[100], int n)
{
	int b[100];
	int k=0;
	for ( int i=n-1; i >=0; i--)
	{
		b[k]=a[i];
		k++;
	}
	for ( int i=0; i < k; i++)
	{
		for ( int j=0; j<=i; j++)
			cout << b[j] << " " ;
		cout<< endl;
	}

}
void SubArray2(int a[100], int n)
{
	int b[100];
	int k=0, dem=0;
	for ( int i=n-1; i >=0; i--)
	{
		b[k]=a[i];
		k++;
	}
	for ( int i=0; i < k; i++)
	{
		for ( int j=1; j<=i; j++)
		{

			cout << b[j] << " " ;
		}
	}
	cout<< endl;
}
void SubArrayAscending( int a[100], int n)
{
	int b[100];
	int k=0 ;
	int dem=0;
	for ( int i=n-1; i >=0; i--)
	{
		b[k]=a[i];
		k++;
	}
	for( int i=0 ; i< n; i++)
	{
		dem =0;
		while (b[i] < b[i+1])
		{
			if (dem =0) 
				cout << b[i] << " " << b[i+1];
			else
				cout << b[i+1] << " ";
			dem++;
			i++;
			cout <<endl;
		}
	}
	cout << endl;
}
void BuildOdd( int a[100], int n)
{
	int b[100];
	int k=0 ;
	for ( int i=n-1; i >=0; i--)
	{
		if ( a[i] % 2 !=0)
		{
			b[k]=a[i];
			k++;
		}	
	}
	for ( int i = 0; i < k; i++)
	{
		cout << b[i] << "  " ;
	}

	cout << endl;
}
void BuildNegative(int a[100], int n)
{
	int b[100];
	int k=0 ;
	for ( int i=n-1; i >=0; i--)
	{
		if ( a[i] <0)
		{
			b[k]=a[i];
			k++;
		}	
	}
	for ( int i = 0; i < k; i++)
	{
		cout << b[i] << "  " ;
	}

	cout << endl;
}

