
// SWE ASSINMENT BY ATAHArul ISlAM RAHIN (2022211043)
// Solving question one

// uncommnet a portion of program to check the code or run the  
//////////////////////////////////////////////////////////////////////

// #include <stdio.h>

// int main(){
//     int num;
//     printf("Enter a number__");
//     scanf("%d",&num);
//     if (num%2==0)
//     {
//         printf(" %d is a even number",num);
//     }else{
//         printf(" %d is a odd number",num);
//     }
//     return 0;
    
// }


// solving question two
//////////////////////////////////////////////////////////////

// #include <stdio.h>

// int main(){
//     int mark;
//     printf("Dear student , enter your mark::");
//     scanf("%d", &mark);
//     if(mark>=0 && mark<=100){
//         switch (mark/10)
//         {
//         case 10:
//         case 9:
//             printf("%d  A Grade",mark);
//             break;
//         case 8:
//             printf("%d  B Grade",mark);
//             break;
//         case 7:
//             printf("%d  C Grade",mark);
//             break;
//         case 6:
//             printf("%d  D Grade",mark);
//             break;
//         default:
//             printf("you are fail , better study hard");
//             break;
//         }



//     }else{
//         printf("please enter a valid mark \n between 0-100");
//     }
// }


// simple calculator using c ; solving question no 3
//////////////////////////////////////////////////////

// #include <stdio.h>

// int main(){
//     int num1;
//     char op;
//     int num2;
//     printf("enter the first number\n");
//     scanf("%d", &num1);
//     printf("enter the available operator (+,-,*, /)\n");
//     scanf(" %c", &op);
//     printf("enter the second number\n");
//     scanf("%d", &num2);
//      switch (op)
//      {
//      case '+':
//         printf("%d+%d=%d\n",num1,num2,num1+num2);
//         break;
//      case '-':
//         printf("%d-%d=%d\n",num1,num2,num1-num2);
//         break;
//      case '*':
//         printf("%d*%d=%d\n",num1,num2,num1*num2);
//         break;
//      case '/':
//         printf("%d/%d=%d\n",num1,num2,num1/num2);
//         break;
     
//      default:
//      printf("enter a valid operator \n opeartor must be (+,-,*,/,)");
//         break;
//      }
//      return 0;

// }



// larget of three numbers: solving q4
//////////////////////////////////////

// #include <stdio.h>

// int main(){
//     int num, largest;
//     int count=0;
//     do{
//         printf("enter a number");
//         scanf("%d",&num); 
//         if( count==0 || num>largest){
//             largest=num;
//                 }
//         count++ ;
//     }

//     while (count<1010);{
//         printf("\n the largest number is %d\n", largest);
//         }
//     return 0; 
// }




// factorial calculator uisng c:: solving question 5
////////////////////////////////////////////////////

// #include <stdio.h>

// int main(){
//     int n, fact=1;
//     int i=1;
//     printf("enter a number__");
//     scanf("%d",&n);
//     while (i<=n)
//     {
//         fact*=i;
//         i++;
//     }
//     printf("factorial of %d  is %d\n",n,fact);
//     return 0;
    
// }




// sum of digits :: solving question 6
///////////////////////////////////////////



// #include <stdio.h>



// int sumOFdigits(int num){
//     int sum=0;
//     while(num !=0){
//         sum+= num%10;
//         num/=10;
//     }
//     return sum;
// }

// int main(){
//     int number;
//     printf("Enter a number__");
//     scanf("%d",&number);
//     printf("sum of digits %d is %d\n ", number, sumOFdigits(number));
//     return 0;
// }


////////////////////////////////////////////////////////////////
//multiplication table //////////////////////////////////
//////////////////////////////////////////////////////////////////



// #include <stdio.h>

// int main(){
//     int num, i=1;
//     printf("Enter a number please__");
//     scanf("%d",&num);
//     if (num>=0 && num<=10)
//     {
//         while (i<=10)
//         {
//            printf("%d*%2d=%2d\n", num,i, num*i);
//            i++;
//         }
           
//     } else{
//         printf("you entered %d which is not valid \n please enter a number between 1-10",num);
//     }
    
// }



///////////////////////////////////////////////////////////////////////////
//////////checking leap year ////////////////////// solvin q8
/////////////////////////////////////////////////////////////////////////////


// #include <stdio.h>

// int main(){
//     int num;
//     printf("enter the year like:2004:::::");
//     scanf("%d",&num);
//     if (num%4==0 || num%400==0 && num%100!=0){
//         printf("the year %d is a leap year",num);

//     }
//     else{
//         printf("oops , year %d is not a leap year",num);
//     }
// }



/////////////////////////////////////////////////////////////////
//solving question 9 /// counting vowels
//////////////////////////////////////////////////////////////

// #include <stdio.h>
// #include <ctype.h>

// int main(){
//     int num=0, vowels=0;
//     char sen[100];
//     printf("enter a sentence__");
//     fgets(sen, sizeof(sen),stdin);
//     while (sen[num]!='\0')
//     {
//         switch (tolower(sen[num]))
//         {
//         case 'a':
//         case 'e':
//         case 'i':
//         case 'o':
//         case 'u':
//          vowels++;
            
//             break;
        
//         }
//         num++;
//     }
//     printf("total vowels %d\n", vowels);
//     return 0;

// }


///////////////////////////////////////////////////////////////////////////////
//////////////////number guessing game///////////solving question 10
////////////////////////////////////////////////////////////////////////////////



// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>


// int main(){
//     int secretNumber, attempts=0, guess=0;
//     const int max_attempts=10;
//     const int min_range=1;
//     const int max_range=100;
    
//     srand(time(0));
//     secretNumber=rand()%max_range+min_range;
//     printf("welcome to number guessing game!!");
//     printf("generating a number for you......");
//     printf("guessed , and you have %d attempts to guess it",max_attempts);
//     while (attempts<max_attempts)
//     {
//         printf("attempt%d/%d :: enter the number::",attempts+1, max_attempts);
//         scanf("%d",&guess);
//         attempts++;
//         if (guess==secretNumber){
//             printf("congragulations , you passed on %d attempt", attempts);
//             return 0;

//         }
//         else if (guess<secretNumber){
//          printf("Too low! Try a higher number.\n");
//         }
//         else {
//               printf("Too high! Try a lower number.\n");
//         }
//     }
//      printf("\nGame over! You've used all your attempts.\n");
//     printf("The secret number was: %d\n", secretNumber);
    
//     return 0;
    

// }



/////////////////////////////////////////////////////////////////////////////////////////
/// assinment over/////////////////////////
// written by rahin islam//////////////////////////////////
////////////////2022231043////////////////////////////////////////////////////////////





































