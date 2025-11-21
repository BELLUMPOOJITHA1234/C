#include <stdio.h>
int asc(int a[], int n,int i)
 {
  int temp,j;
    for (i = 0; i < n-1; i++) 
	{
       for (j = i+1; j < n; j++)
		 {
           if (a[i] >a[j])
			 {
                temp = a[i];
                a[i] = a[j];
               a[j] = temp;
            }
        }
    }
}

int main()
 {
    int n ,i;
    printf("Enter number of elements: ");
    int a[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i > n; i++)
	 {
        scanf("%d", &a[i]);
   }
    asc(a, n,i);
    printf("Sorted array in descending order: ");
    for ( i = 0; i < n; i++)
	 {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
//
//
////#include<stdio.h>
////int main()
////{
////	char c;
////	printf("enter the character (+,-,*,/,%):");
////	scanf("%c",&c);
////	int a,b;
////	printf("enter the values a and b:");
////	scanf("%d %d",&a,&b);
////	switch(c)
////	{
////		case'+':printf("%d",a+b);
////		        break;
////		case'-':printf("%d",a-b);
////	         	break;
////	    case'*':printf("%d",a*b);  
////	             break;
////	    case'/':printf("%d",a/b);  
////	             break; 
////		case'%':printf("%d",a%b);  
////	             break; 
////		default:printf("error!not an operator");	
////	}
////}
//
//
//
////#include<stdio.h>
////int main()
////{
////	int r,c;
////	printf("enter the values of r and c:");
////	scanf("%d %d",&r,&c);
////	int a[r][c],b[r][c],mul[r][c],i,j;
////	printf("enter the elements into the matrix:");
////	for(i=0;i<r;i++)
////	{
////		for(j=0;j<c;j++)
////		{
////			scanf("%d",&a[i][j]);
////		}
////	}
////    printf("enter the second matrix:");
////    for(i=0;i<r;i++)
////    {
////    	for(j=0;j<c;j++)
////    	{
////    		scanf("%d",&b[i][j]);
////		}
////	}
////	printf("multiply the matrix:");
////	for(i=0;i<r;i++)
////	{
////		for(j=0;j<c;j++)
////		{
////			mul[i][j]=a[i][j]*b[i][j];
////		}
////	}
////	for(i=0;i<r;i++)
////	{
////		for(j=0;j<c;j++)
////		{
////			printf("%d\n",mul[i][j]);
////		}
////	}
////}
//
//
////#include<stdio.h>
////int main()
////{
////	int n,s;
////	printf("enetr the value n:");
////	scanf("%d",&n);
////	s=n*n;
////	printf("%d",s);
////	
////}
//
//
////#include <stdio.h>
////int main() 
////{
////    char str[100], ch;
////    int i = 0;
////    printf("Enter a string: ");
////    fgets(str, sizeof(str), stdin);
////    while (str[i] != '\0')
////	 {
////        ch = str[i];
////        if (ch >= 'A' && ch <= 'Z')
////		 {
////            str[i] = ch + 32; 
////        }
////        i++;
////    }
////    printf("Lowercase string: %s\n", str);
////    return 0;
////}
//
//
////#include <stdio.h>
////
////int main()
//// {
////    int a[100], n, p, nv,i;
////    printf("Enter the number of elements in the array: ");
////    scanf("%d", &n);
////    printf("Enter %d elements: ", n);
////    for ( i = 0; i < n; i++)
////	 {
////        scanf("%d", &a[i]);
////    }
////    printf("Enter the position of the element to replace (1 to %d): ", n);
////    scanf("%d", &p);
////    printf("Enter the new value: ");
////    scanf("%d", &nv);
////    if (p >= 1 && p <= n) 
////	{
////        a[p - 1] = nv;
////    }
////	 else
////	  {
////        printf("Invalid position!\n");
////        return 1;  
////    }
////    printf("Updated array: ");
////    for ( i = 0; i < n; i++)
////	 {
////        printf("%d ", a[i]);
////    }
////    printf("\n");
////    return 0;
////}
//
//
////#include <stdio.h>
////int Prime(int n)
//// {
//// 	int i;
////    if (n <= 1)
////	 {
////        return 0;
////    }
////    for ( i = 2; i <= n/ 2; i++)
////	 {
////        if (n % i == 0)
////		 {
////            return 0;
////        }
////    }
////    return 1;
////}
////int main()
//// {
////    int n;
////    printf("Enter a number: ");
////    scanf("%d", &n);
////    if (Prime(n))
////	  {
////        printf("%d is a prime number.\n", n);
////      }
////	 else
////	  {
////        printf("%d is not a prime number.\n", n);
////      }
////    return 0;
//}












































































