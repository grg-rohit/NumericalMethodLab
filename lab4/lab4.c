

//program to find a solution of linear algebraic equations using Gauss elimination method. 




// #include<stdio.h>
// #include<conio.h>
// #include<math.h>
// #include<stdlib.h>

// #define   SIZE   10

// int main()
// {
// 	 float a[SIZE][SIZE], x[SIZE], ratio;
// 	 int i,j,k,n;
	
	
// 	 /* Inputs */
// 	 /* 1. Reading number of unknowns */
// 	 printf("Enter number of unknowns: ");
// 	 scanf("%d", &n);
// 	 /* 2. Reading Augmented Matrix */
// 	 for(i=1;i<=n;i++)
// 	 {
// 		  for(j=1;j<=n+1;j++)
// 		  {
// 			   printf("a[%d][%d] = ",i,j);
// 			   scanf("%f", &a[i][j]);
// 		  }
// 	 }
// 	/* Applying Gauss Elimination */
// 	 for(i=1;i<=n-1;i++)
// 	 {
// 		  if(a[i][i] == 0.0)
// 		  {
// 			   printf("Mathematical Error!");
// 			   exit(0);
// 		  }
// 		  for(j=i+1;j<=n;j++)
// 		  {
// 			   ratio = a[j][i]/a[i][i];
			   
// 			   for(k=1;k<=n+1;k++)
// 			   {
// 			  		a[j][k] = a[j][k] - ratio*a[i][k];
// 			   }
// 		  }
// 	 }
// 	 /* Obtaining Solution by Back Subsitution */
// 	 x[n] = a[n][n+1]/a[n][n];
	
// 	 for(i=n-1;i>=1;i--)
// 	 {
// 		  x[i] = a[i][n+1];
// 		  for(j=i+1;j<=n;j++)
// 		  {
// 		  		x[i] = x[i] - a[i][j]*x[j];
// 		  }
// 		  x[i] = x[i]/a[i][i];
// 	 }
// 	 /* Displaying Solution */ 
// 	 printf("\nSolution:\n");
// 	 for(i=1;i<=n;i++)
// 	 {
// 	  	printf("x[%d] = %0.3f\n",i, x[i]);
// 	 }

// 	 return(0);
// }








//  program to find a solution of linear algebraic equations using Gauss Jordan method. 
//  #include<stdio.h>
// #include<conio.h>
// #include<math.h>

// #define SIZE 10

// int main()
// {
// 		 float a[SIZE][SIZE], x[SIZE], ratio;
// 		 int i,j,k,n;

// 		 /* Inputs */
// 		 /* 1. Reading number of unknowns */
// 		 printf("Enter number of unknowns: ");
// 		 scanf("%d", &n);
// 		 /* 2. Reading Augmented Matrix */
// 		 printf("Enter coefficients of Augmented Matrix:\n");
// 		 for(i=1;i<=n;i++)
// 		 {
// 			  for(j=1;j<=n+1;j++)
// 			  {
// 				   printf("a[%d][%d] = ",i,j);
// 				   scanf("%f", &a[i][j]);
// 			  }
// 		 }
// 		 /* Applying Gauss Jordan Elimination */
// 		 for(i=1;i<=n;i++)
// 		 {
// 			  if(a[i][i] == 0.0)
// 			  {
// 				   printf("Mathematical Error!");
// 				   exit(0);
// 			  }
// 			  for(j=1;j<=n;j++)
// 			  {
// 				   if(i!=j)
// 				   {
// 					    ratio = a[j][i]/a[i][i];
// 					    for(k=1;k<=n+1;k++)
// 					    {
// 					     	a[j][k] = a[j][k] - ratio*a[i][k];
// 					    }
// 				   }
// 			  }
// 		 }
// 		 /* Obtaining Solution */
// 		 for(i=1;i<=n;i++)
// 		 {
// 		  	x[i] = a[i][n+1]/a[i][i];
// 		 }
// 		 /* Displaying Solution */
// 		 printf("\nSolution:\n");
// 		 for(i=1;i<=n;i++)
// 		 {
// 		  	printf("x[%d] = %0.3f\n",i, x[i]);
// 		 }

// 		 return(0);
// }








// program to find a solution of linear algebraic equations using Jacobi  method. 



// #include<stdio.h>
// #include<conio.h>
// #include<math.h>

// /* In this example we are solving
//    3x + 20y - z = -18
//    2x - 3y + 20z = 25
//    20x + y - 2z = 17
// */
// /* Arranging given system of linear
//    equations in diagonally dominant
//    form:
//    20x + y - 2z = 17
//    3x + 20y -z = -18
//    2x - 3y + 20z = 25
// */
// /* Equations:
//    x = (17-y+2z)/20
//    y = (-18-3x+z)/20
//    z = (25-2x+3y)/20
// */
// /* Defining function */
// #define f1(x,y,z)  (17-y+2*z)/20
// #define f2(x,y,z)  (-18-3*x+z)/20
// #define f3(x,y,z)  (25-2*x+3*y)/20

// /* Main function */
// int main()
// {
//  float x0=0, y0=0, z0=0, x1, y1, z1, e1, e2, e3, e;
//  int count=1;

//  printf("Enter tolerable error:\n");
//  scanf("%f", &e);

//  printf("\nCount\tx\ty\tz\n");
//  do
//  {
//   /* Calculation */
//   x1 = f1(x0,y0,z0);
//   y1 = f2(x0,y0,z0);
//   z1 = f3(x0,y0,z0);
//   printf("%d\t%0.4f\t%0.4f\t%0.4f\n",count, x1,y1,z1);

//   /* Error */
//   e1 = fabs(x0-x1);
//   e2 = fabs(y0-y1);
//   e3 = fabs(z0-z1);

//   count++;

//   /* Set value for next iteration */
//   x0 = x1;
//   y0 = y1;
//   z0 = z1;
//  }while(e1>e && e2>e && e3>e);

//  printf("\nSolution: x=%0.3f, y=%0.3f and z = %0.3f\n",x1,y1,z1);


//  return 0;
// }






// program to find a solution of linear algebraic equations using Gauss  Seidel Method. 



// #include<stdio.h>
// #include<conio.h>
// #include<math.h>

// /* In this example we are solving
//    3x + 20y - z = -18
//    2x - 3y + 20z = 25
//    20x + y - 2z = 17
// */
// /* Arranging given system of linear
//    equations in diagonally dominant
//    form:
//    20x + y - 2z = 17
//    3x + 20y -z = -18
//    2x - 3y + 20z = 25
// */
// /* Equations:
//    x = (17-y+2z)/20
//    y = (-18-3x+z)/20
//    z = (25-2x+3y)/20
// */
// /* Defining function */
// #define f1(x,y,z)  (17-y+2*z)/20
// #define f2(x,y,z)  (-18-3*x+z)/20
// #define f3(x,y,z)  (25-2*x+3*y)/20

// /* Main function */
// int main()
// {
//  float x0=0, y0=0, z0=0, x1, y1, z1, e1, e2, e3, e;
//  int count=1;

//  printf("Enter tolerable error:\n");
//  scanf("%f", &e);

//  printf("\nCount\tx\ty\tz\n");
//  do
//  {
//   /* Calculation */
//   x1 = f1(x0,y0,z0);
//   y1 = f2(x1,y0,z0);
//   z1 = f3(x1,y1,z0);
//   printf("%d\t%0.4f\t%0.4f\t%0.4f\n",count, x1,y1,z1);

//   /* Error */
//   e1 = fabs(x0-x1);
//   e2 = fabs(y0-y1);
//   e3 = fabs(z0-z1);

//   count++;

//   /* Set value for next iteration */
//   x0 = x1;
//   y0 = y1;
//   z0 = z1;

//  }while(e1>e && e2>e && e3>e);

//  printf("\nSolution: x=%0.3f, y=%0.3f and z = %0.3f\n",x1,y1,z1);


//  return 0;
// }





//program to find Eigen values using Power method. 

// #include<stdio.h>
// #include<conio.h>
// #include<math.h>
// void main()
// {

//     int i,j,n;
//     float A[40][40],x[40],z[40],e[40],zmax,emax;
//     printf("\nEnter the order of matrix:");
//     scanf("%d",&n);
//     printf("\nEnter matrix elements row-wise\n");
//     for(i=1; i<=n; i++)
//     {
//         for(j=1; j<=n; j++)
//         {
//             printf("A[%d][%d]=", i,j);
//             scanf("%f",&A[i][j]);
//         }
//     }
//     printf("\nEnter the column vector\n");
//     for(i=1; i<=n; i++)
//     {
//         printf("X[%d]=",i);
//         scanf("%f",&x[i]);
//     }
//     do
//     {
//         for(i=1; i<=n; i++)
//         {
//             z[i]=0;
//             for(j=1; j<=n; j++)
//             {
//                 z[i]=z[i]+A[i][j]*x[j];
//             }
//         }
//         zmax=fabs(z[1]);
//         for(i=2; i<=n; i++)
//         {
//             if((fabs(z[i]))>zmax)
//                 zmax=fabs(z[i]);
//         }
//         for(i=1; i<=n; i++)
//         {
//             z[i]=z[i]/zmax;
//         }
//         for(i=1; i<=n; i++)
//         {
//             e[i]=0;
//             e[i]=fabs((fabs(z[i]))-(fabs(x[i])));
//         }
//         emax=e[1];
//         for(i=2; i<=n; i++)
//         {
//             if(e[i]>emax)
//                 emax=e[i];
//         }
//         for(i=1; i<=n; i++)
//         {
//             x[i]=z[i];
//         }
//     }
//     while(emax>0.001);
//     printf("\n The required eigen value is %f",zmax);
//     printf("\n\nThe required eigen vector is :\n");
//     for(i=1; i<=n; i++)
//     {
//         printf("%f\t",z[i]);
//     }

// }
