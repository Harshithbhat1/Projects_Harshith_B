Largest of 3 numbers using ternary operator....




#include <stdio.h>

int main() {
  int num1, num2, num3;
  
  printf("Enter three numbers: \n");
  scanf("%d%d%d", &num1, &num2, &num3);
  
  int largest = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
  
  printf("The largest number is: %d\n", largest);
}


---------------------------------------


Bubble sort using user defined functions......




#include <stdio.h>

void bubbleSort(int arr[], int n) 
{
    int i, j, temp;
    for (i = 0; i < n-1; i++) 
	{
        for (j = 0; j < n-i-1; j++) 
		{
            if (arr[j] > arr[j+1]) 
			{
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, n);

    printf("Sorted array: \n");
    for (i = 0; i < n; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
}



--------------------------------------



Palindrome or not using user defined functions.......




#include <stdio.h>
#include <string.h>

int is_palindrome(char *str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    if (is_palindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
}

-----------------------------------


addition of two complex numbers.......




#include <stdio.h>

struct complex {
    float real;
    float imag;
};

struct complex add(struct complex a, struct complex b) {
    struct complex c;
    c.real = a.real + b.real;
    c.imag = a.imag + b.imag;
    return c;
}

int main() {
    struct complex a, b, c;
    printf("Enter real and imaginary part of first complex number: ");
    scanf("%f%f", &a.real, &a.imag);
    printf("Enter real and imaginary part of second complex number: ");
    scanf("%f%f", &b.real, &b.imag);
    c = add(a, b);
    printf("Sum of the complex numbers = %.1f + %.1fi\n", c.real, c.imag);
}

--------------------------------



10)1-D and 2-D using pointers 




int sum_1d_array(int *arr, int size) {
    int i, sum = 0;
    for (i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return sum;
}

int sum_2d_array(int (*arr)[3], int rows,int n) {
    int i, j, sum = 0;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < n; j++) {
            sum += *(*(arr + i) + j);
        }
    }
    return sum;
}

int main() {
    int a[10],m,n,b,c[10][3],i,j;
    printf("Enter the size of 1-D array\n");
    scanf("%d",&b);
    printf("Enter the array elements\n");
    for(i=0;i<b;i++)
    {
    	scanf("%d",&a[i]);
	}
printf("Enter the order of two dimensional array\n");
scanf("%d %d",&m,&n);
printf("Enter the array elements\n");
for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
	scanf("%d",&c[i][j]);
}
    int sum1 = sum_1d_array(a, b);
    int sum2 = sum_2d_array(c, m,n);

    printf("Sum of 1-D array: %d\n", sum1);
    printf("Sum of 2-D array: %d\n", sum2);
}


-----------------------------------


multiplication of two matrices

#include<stdio.h>
#include<conio.h>
int main()
{
int l,a[10][10],b[10][10],s[10][10],m,n,p,q,i,k,j;
printf("Enter the order of first matrix\n");
scanf("%d %d",&m,&n);
if((m<=0)||(n<=0))
{
printf("The matrix of order %d and %d doesn't exist\n",m,n);
}
else
{
printf("Enter the elements of first matrix\n");
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
printf("Enter the order of second matrix\n");
scanf("%d %d",&p,&q);
if((p<=0)||(q<=0))
{
printf("The matrix of order %d and %d doesn't exist\n",p,q);
}
else if(n!=p)
{
printf("\nMLTIPLICATION IS NOT POSSIBLE as no of columns in first matrix is not equal o no of rows in second matrix\n");
}
else
{
printf("Enter the elements of second matrix\n");
for(i=0;i<p;i++)
for(j=0;j<q;j++)
{
scanf("%d",&b[i][j]);
}
printf("The matrix A is\n");
for(i=0;i<m;i++)
{
printf("\n");
for(j=0;j<n;j++)
printf("     %d",a[i][j]);
}
getch();
printf("\n");
printf("The matrix B is\n");
for(i=0;i<p;i++)
{
printf("\n");
for(j=0;j<q;j++)
printf("     %d",b[i][j]);
}
getch();
for(k=0;k<m;k++)
{
for(l=0;l<q;l++)
{
s[k][l]=0;
for(j=0;j<p;j++)
{
s[k][l]=s[k][l]+((a[k][j])*(b[j][l]));
}
}
}
printf("\nThe product array S is\n");
for(i=0;i<m;i++)
{
printf("\n");
for(j=0;j<q;j++)
printf("     %d",s[i][j]);
}
}
}
return 0;
}



------------------------


Armstrong or not......





#include<stdio.h>
#include<math.h>
int main()
{
int a,sum,dig,n,i,pw=0;
printf("Enter the number\n");
scanf("%d",&a);
int b=a;int c=a;
sum=0;
while(c!=0)
{
c=c/10;	
pw++;
}
for(i=0;i>=0;i++)
{
dig=a%10;
sum=sum+pow(dig,pw);
a=a/10;
if(a==0)
{
	break;
}
}
if(sum==b)
{
printf("%d is an armstrong number\n",b);
}
else
{
printf("%d is not an armstrong number\n",b);
}
return 0;
}








-----------------------


COPYING ELEMENTS OF ONE ARRAY TO ANOTHER



#include<stdio.h>
int main()
{
int a[10],b[10],n,i;
printf("Enter the size of the array\n");
scanf("%d",&n);
printf("Enter the array elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("The array A is \n");
for(i=0;i<n;i++)
{
printf("\n%d",a[i]);
}
for(i=0;i<n;i++)
{
b[i]=a[i];
}
printf("\nThe array B is\n");
for(i=0;i<n;i++)
{
printf("\n%d",b[i]);
}
return 0;
}



-------------------------




BINARY SEARCH





#include<stdio.h>
int main()
{
	int a[10],b,m,e,i,j,k,n,ele;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	printf("Enter the sorted array elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter the search element\n");
	scanf("%d",&ele);
	b=0;
	e=n-1;
	int p=-1;

	while(b<=e)
	{
		m=((b+e)/2);
		if(a[m]==ele)
		{
			p=m;
			goto print;
		}
		else if(a[m]<ele)
		{
			b=m+1;
		
		}
		else
		{
			e=m-1;
		
		}
	}
	print:
	{
	if(p>=0)
	{
		printf("%d is in the position %d\n",ele,p);
	}
	else
	{
	printf("%d does not exist",ele);
    }
    return 0;
    }
}




-----------------------------




N FIBONACCI NUMBERS AND N PRIME NUMBERS using FOR LOOP




#include <stdio.h>
int prime(int n,int isPrime) 
{
    int i, j;
    printf("PRIME\nEnter the value of N: ");
    scanf("%d", &n);
    printf("First %d prime numbers are: \n", n);
printf("1 ");
int num=0;
    for (i = 2; i>0; i++) 
	{
        isPrime = 1;
        for (j = 2; j <= i / 2; j++) 
		{
            if (i % j == 0) 
			{
                isPrime = 0;
                break;
            }
        }      
        if (isPrime == 1) {
        	num=num+1;
            printf("%d ", i);
        }
        if(num==n)
		{
		break;	
		}
    }
return 0;
}
int fibonacci(int n,int s)
{
int i,a;
	printf("FIBONACCI\nEnter the limit\n");
	scanf("%d",&n);
	s=0;a=1;
	int sum;
	printf("The fibonacci series is\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",s);
		sum=s+a;
		a=s;
		s=sum;
	}
	return 0;
}
int main()
{
char c,n,s,isPrime;
printf("Enter the operation \nFor fibonacci,press F\nFor N prime numbers,press P\nFor both press 2\n");
scanf("%c",&c);
if((c=='f')||(c=='F'))
{
fibonacci(n,s);
}
else if((c=='p')||(c=='P'))
{
prime(n,isPrime);
}
else if((c=='2')||(c=='2'))
{
fibonacci(n,s);
prime(n,isPrime);
}
else 
{
printf("Enter the correct input");
}
return 0;
}


--------------------------






N FIBONACCI NUMBERS USING DO WHILE LOOP



#include <stdio.h>
int prime(int n,int isPrime) 
{
    int i, j;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    printf("First %d prime numbers are: \n", n);
printf("1 ");
int num=0;
   i=2;
    do
	{
        isPrime = 1;j=2;
        do
		{
            if (i % j == 0) 
			{
                isPrime = 0;
                break;
            }
            j=j+1;
        }while(j<=i/2);     
        if (isPrime == 1) {
        	num=num+1;
            printf("%d ", i);
        }
        if(num==n)
		{
		break;	
		}
		i=i+1;
    }while(i>0);
return 0;
}
int fibonacci(int n,int s)
{
int i,a;
	printf("Enter the limit\n");
	scanf("%d",&n);
	s=0;a=1;i=0;
	int sum;
	printf("The fibonacci series is\n");
    do
	{
		printf("%d\n",s);
		sum=s+a;
		a=s;
		s=sum;
		i=i+1;
	}while(i<n);
	return 0;
}
int main()
{
char c,n,s,isPrime;
printf("Enter the operation \nFor fibonacci,press F\nFor N prime numbers,press P\nFor both press 2\n");
scanf("%c",&c);
if((c=='f')||(c=='F'))
{
fibonacci(n,s);
}
else if((c=='p')||(c=='P'))
{
prime(n,isPrime);
}
else if((c=='2')||(c=='2'))
{
fibonacci(n,s);
prime(n,isPrime);
}
else 
{
	printf("Enter the correct input");
}
return 0;
}



-------------------------------------------------




ELECTRICITY BILL





#include <stdio.h>
int main()
{
	int units,n;
	printf("Enter the total units\n");
	scanf("%d",&units);
	if(units<0 || units>400)
	{
		printf("Enter valid units\n");
	}
	else
	{
	float dig,sum;
	if(units>0 && units<=50)
	{
		dig=4;
	}
	else if(units>50 && units<=100)
	{
		dig=4.50;
	}
	else if(units>100 && units<=150)
	{
		dig=5;
	}
	else if(units>150 && units<=400)
	{
	dig=6;	
	}
	sum=units*dig;
	printf("Electricity bill of %d units is %.1f rupees",units,sum);
	return 0;
}
}
