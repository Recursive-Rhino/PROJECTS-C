#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define MAX 10 //MAX SIZE OF THE MATRIX
//DECLARED ALL THE FUNCTION
void addition(int,int);
void subtraction(int,int);
void divide(float,float);
void multiplication(int,int);
void modulus(int,int);
void powerCal(int,int);
void show_menu();
void Square_Root(void);
//FOR MATRIX OPERATION
void matrix_menu(void);
void matrix_addition(void);
void matrix_subtraction(void);
void matrix_multiplication(void);
void matrix_Display(int,int,int [MAX][MAX]);
int main() {
int number1,number2,choice,NUM,POWER;
printf("     HELLO , WELCOME TO CALCULATOR ");
do{
    show_menu();//WILL SHOW THE MENU
    printf("NOW ,ENTER YOUR CHOICE :  ");
    scanf("%d",&choice);
    if(choice!=8) {
      if(choice<6 || choice>7) { // POWER OPERATION WILL TAKE ONE NUMBER AND POWER OF THAT & FOR SQRT IT SKIPS IS BEACUSE IT ONLY TAKE ONE VALUE
      printf("ENTER 1ST NUMBER : ");
      scanf("%d",&number1);
      printf("\nENTER 2ND NUMBER : ");
      scanf("%d",&number2);
    }
    }
    switch(choice) { //TO OPERATE ACCORDING TO THE USER
      case 1 :
      addition(number1,number2);
      break;
      case 2 :
      subtraction(number1,number2);
      break;
      case 3 :
      multiplication(number1,number2);
      break;
      case 4 :
      divide(number1,number2);
      break;
      case 5 :
      modulus(number1,number2);
      break;
      case 6 :
      printf("ENTER THE NUMBER : ");
      scanf("%d",&NUM);
      printf("\nENTER THE POWER : ");
      scanf("%d",&POWER);
      powerCal(NUM,POWER);
      break;
      case 7 :
      Square_Root();
      break;
      case 8 :
      matrix_menu();
      break;
      case 9 :
      printf(" ------------------- THANK YOU -----------------------");
      exit(1);
      default :
      printf("\nSorry !! , Please try again...\n");
    }
} while (1);
}
//OPERATION FUNCTIONS
void show_menu() {
  printf("\n||_____________________________________________||\n");
  printf("\nENTER THE OPERATION YOU WANT TO PERFORM : \n");
  printf("1. ADDITION \n");
  printf("2. SUBTRACTION \n");
  printf("3. MULTIPLICATION \n");
  printf("4. DIVISION \n");
  printf("5. MODULUS \n");
  printf("6. POWER \n");
  printf("7. SQUARE-ROOT \n");
  printf("8. MATRIX OPERATION \n");
  printf("9. EXIT \n");
}
void addition(int num1,int num2) {
  int sum= num1+num2;
  printf("\nRESULT OF ADDITION IS : %d\n\n",sum);
}
void multiplication(int num1,int num2) {
  int mul=num1*num2;
  printf("\nRESULT OF MULTIPLICATION : %d\n\n",mul);
}
void subtraction(int num1,int num2) {
  int sub=num1-num2;
  printf("\nRESULT OF SUBTRACTION IS : %d\n\n",sub);
}
void divide(float num1,float num2) {
  if (num2!=0) {
  float div =(num1/num2);
  printf("\nRESULT OF DIVISION : %.2f\n\n",div);
  } else {
    printf("INVALID NUMBER TO DIVIDE..\n");
  }
  
}
void modulus(int num1,int num2) {
  if(num2!=0) {
  int mod =num1%num2;
  printf("\nRESULT OF MODULUS : %d\n\n",mod);
  } else {
    printf("INVALID NUMBER...\n");
  }
}
void powerCal(int num1,int power) {
  int ans=pow(num1,power);
  printf("\nRESULT OF POWER : %d\n\n",ans);
}
void Square_Root () {
  float num,ans;
    printf("ENTER THE NUMBER : ");
    scanf("%f",&num);
    ans= sqrt(num);
  printf("RESULT OF SQUARE ROOT : %.2f\n",ans);
}
void matrix_menu() {
  int choice1;
  printf("1- MATRIX ADDITION \n");
  printf("2- MATRIX  SUBTRACATION \n");
  printf("3.- MATRIX  MULTIPLICATION \n");
  printf("ENTER YOUR CHOICE : \n");
  scanf("%d",&choice1);
  switch(choice1) {
    case 1 :
    matrix_addition();
    break;
    case 2 : 
    matrix_subtraction();
    break;
    case 3 :
    matrix_multiplication();
    break;
    default :
    return ;

  }
}

void matrix_addition() {
  int A[MAX][MAX], B[MAX][MAX], result[MAX][MAX];
  int rowsA, colsA, rowsB, colsB;
  // Input for matrix A
  printf("Enter the number of rows : ");
  scanf("%d",&rowsA);
  printf("columns for matrix A: ");
  scanf("%d",&colsA);
  printf("Enter the elements of matrix A:\n");
  for (int i = 0; i < rowsA; i++) {
      for (int j = 0; j < colsA; j++) {
          scanf("%d", &A[i][j]);
      }
  }
  // Input for matrix B
  printf("Enter the elements of matrix B : \n");
  for (int i = 0; i < rowsA; i++) {
    for (int j = 0; j < colsA; j++) {
        scanf("%d", &B[i][j]);
    }
} // perform matrix addtition
  for (int i = 0; i < rowsA; i++) {
    for (int j = 0; j < colsA; j++) {
        result[i][j] = A[i][j] + B[i][j];
    }
    
}
matrix_Display(rowsA,colsA,result);//For addition resultant
}
void matrix_subtraction() {
  int A[MAX][MAX], B[MAX][MAX], result[MAX][MAX];
  int rowsA, colsA;
  // Input for matrix A
  printf("Enter the number of rows : ");
  scanf("%d",&rowsA);
  printf("columns for matrix A: ");
  scanf("%d",&colsA);
  printf("Enter the elements of matrix A:\n");
  for (int i = 0; i < rowsA; i++) {
      for (int j = 0; j < colsA; j++) {
          scanf("%d", &A[i][j]);
      }
  }
  // Input for matrix B
  printf("Enter the elements of matrix B : \n");
  for (int i = 0; i < rowsA; i++) {
    for (int j = 0; j < colsA; j++) {
        scanf("%d", &B[i][j]);
    }
} // perform matrix addtition
  for (int i = 0; i < rowsA; i++) {
    for (int j = 0; j < colsA; j++) {
        result[i][j] = A[i][j] - B[i][j];
    }
}
  matrix_Display(rowsA,colsA,result);
}
void matrix_multiplication() {
  int A[MAX][MAX], B[MAX][MAX], result[MAX][MAX];
  int rowsA, colsA, rowsB, colsB;
  // Input for matrix A
  printf("Enter the number of rows : ");
  scanf("%d",&rowsA);
  printf("columns for matrix A: ");
  scanf("%d",&colsA);
  printf("Enter the elements of matrix A:\n");
  for (int i = 0; i < rowsA; i++) {
      for (int j = 0; j < colsA; j++) {
          scanf("%d", &A[i][j]);
      }
  }
  // Input for matrix B
  printf("Enter the number of rows : ");
  scanf("%d",&rowsB);
  printf("columns for matrix B : ");
  scanf("%d",&colsB);
  if (colsA != rowsB) {
      printf("Error: Number of columns in A must be equal to number of rows in B.\n");
      return ;
  }
  printf("Enter the elements of matrix B:\n");
  for (int i = 0; i < rowsB; i++) {
      for (int j = 0; j < colsB; j++) {
          scanf("%d", &B[i][j]);
      }
  }
    // Initialize the result matrix with zeros
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            result[i][j] = 0;
        }
    }
    // Perform matrix multiplication
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            for (int k = 0; k < colsA; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    matrix_Display(rowsA,colsB,result);
}
void matrix_Display(int row,int clm,int matrix[MAX][MAX]) {
  printf("\n------------- MATRIX DISPLAY--------------\n");
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < clm; j++) {
        printf("%d\t",matrix[i][j]);
    }
    printf("\n");
}
}



