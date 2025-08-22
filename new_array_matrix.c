/* 
#include <stdio.h>
int main(){

    int a[3][3];
    int b[3][3];

   int i, j; 

   printf("this is A matrix.\n");

   for ( i = 0; i < 3; i++)
   {
    for ( j = 0; j < 3; j++)
    {
        printf("A[%d][%d]= ", i, j);

        scanf("%d", &a[i][j]);
    }
    printf("\n");
   }
   
 
   
   //this is matrix B.
   
   printf("this is B matrix.\n");

   for ( i = 0; i < 3; i++)
   {
    for ( j = 0; j < 3; j++)
    {
        printf("B[%d][%d]= ", i, j);

        scanf("%d", &b[i][j]);
    }
    printf("\n");
   }
   
     printf("your A matrix is :\n ");
   //printing A matrix.
   for ( i = 0; i < 3; i++)
   {
    for ( j = 0; j < 3; j++)
    {
        printf("\t %d  ", a[i][j]);

    }
    printf("\n");
   }
   
   printf("& ");
   
   printf("your B matrix is :\n ");
   //printing B matrix.
   for ( i = 0; i < 3; i++)
   {
    for ( j = 0; j < 3; j++)
    {
        printf("\t %d  ", b[i][j]);

    }
    printf("\n");
   }
   
   return 0; 
}
*/




/*

//user can input row and collum. 


#include <stdio.h>
int main(){
    
    int m, n, x, y; 
    
    printf("Enter your row and collum for A matrix : ");
    
    scanf("%d%d", &m ,&n);
    
     printf("Enter your row and collum for B matrix : ");
     
     scanf("%d%d", &x ,&y);
     
    int a[n][m];
    int b[x][y];

   int i, j; 

   printf("this is A matrix.\n");

   for ( i = 0; i < m; i++)
   {
    for ( j = 0; j < n; j++)
    {
        printf("A[%d][%d]= ", i, j);

        scanf("%d", &a[i][j]);
    }
    printf("\n");
   }
   
 
   
   //this is matrix B.
   
   printf("this is B matrix.\n");

   for ( i = 0; i < x; i++)
   {
    for ( j = 0; j < y; j++)
    {
        printf("B[%d][%d]= ", i, j);

        scanf("%d", &b[i][j]);
    }
    printf("\n");
   }
   
     printf("your A matrix is :\n ");
   //printing A matrix.
   for ( i = 0; i < m; i++)
   {
    for ( j = 0; j < n; j++)
    {
        printf("\t %d  ", a[i][j]);

    }
    printf("\n");
   }
   
   printf("& ");
   
   printf("your B matrix is :\n ");
   //printing B matrix.
   for ( i = 0; i < x; i++)
   {
    for ( j = 0; j < y; j++)
    {
        printf("\t %d  ", b[i][j]);

    }
    printf("\n");
   }
   
   return 0; 
}
*/







//matrix Addition.

/*
#include <stdio.h>
int main(){
    
    int m, n, x, y; 
    
    printf("Enter your row and collum for A matrix : ");
    
    scanf("%d%d", &m ,&n);
    
     printf("Enter your row and collum for B matrix : ");
     
     scanf("%d%d", &x ,&y);
    if (m==x && n==y){
        
    int a[n][m];
    int b[x][y];
    int c[m][n];

   int i, j; 

   printf("this is A matrix.\n");

   for ( i = 0; i < m; i++)
   {
    for ( j = 0; j < n; j++)
    {
        printf("A[%d][%d]= ", i, j);

        scanf("%d", &a[i][j]);
    }
    printf("\n");
   }
   
 
   
   //this is matrix B.
   
   printf("this is B matrix.\n");

   for ( i = 0; i < x; i++)
   {
    for ( j = 0; j < y; j++)
    {
        printf("B[%d][%d]= ", i, j);

        scanf("%d", &b[i][j]);
    }
    printf("\n");
   }
   
     printf("your A matrix is :\n ");
   //printing A matrix.
   for ( i = 0; i < m; i++)
   {
    for ( j = 0; j < n; j++)
    {
        printf("\t %d  ", a[i][j]);

    }
    printf("\n");
   }
   
   printf("& ");
   
   printf("your B matrix is :\n ");
   //printing B matrix.
   for ( i = 0; i < x; i++)
   {
    for ( j = 0; j < y; j++)
    {
        printf("\t %d  ", b[i][j]);

    }
    printf("\n");
   }
   
   //matrix addition.
   
   printf("Sum of yuor two matrix is :\n");
   
    for ( i = 0; i < m; i++)
   {
    for ( j = 0; j < n; j++)
    {
        c[i][j]=a[i][j]+b[i][j];
        
        printf("\t %d", c[i][j]);

    }
    printf("\n");
   }
   
} 

else printf("your matrixs can't be added !...you have to put same row and collum number for addition.");
   
   return 0; 
}

*/