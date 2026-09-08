variables value assigning and operatotrs ke baaare me padhaya gya hai ch 2 me

#include <stdio.h>
#include <math.h>

int main(){
    int b, c;
    b = c = 1;
    int a = b + c;
    int power = pow(b,c);
    printf("%d", power);
    return 0;
}

Modulo operator

#include <stdio.h>
#include <math.h>

int main(){
    printf("%d", 16%10);
    return 0;
}

#include <stdio.h>
#include <math.h>

int main(){
    int b, c;
    b = c = 1;
    int a = b + c;
    
    printf("%d", a); 
    return 0;
}


modulo operator me bhi negative positve hota hai for ex negative division krke negative remainders bhi la skte hai




TYPE CONVERSIONSSSS

int op int ----> int

int op float -----> float

float op float -----> float

#include <stdio.h>
#include <math.h>

int main(){
    printf("%f \n",3.0 / 2.0);
    return 0;
}

question based on type conversion

q- a = 1.999999 convert to non decimal 

#include <stdio.h>
#include <math.h>

int main(){
    int a = (int) 1.999999;
    printf("%d\n", a);
    return 0;
}


OPERATOR PRECEDDENCE 

 *,/,% ----> +,- ------> =

Associativity Precedence ( for same precedence) left to right keep in notice you have to go left right

#include <stdio.h>
#include <math.h>

int main(){
    int a = 4 * 3 / 6 * 2;
    printf("%d\n", a);
    return 0;
}

Questions for associative precedence

a. 5*2-2*3
b. 5*2/2*3
c. 5*(2/2)*3
d. 5+2/2*3

#include <stdio.h>
#include <math.h>

int main(){
    int a = 5*2/2*3;
    printf("%d \n", a);
    return 0;
}

#include <stdio.h>
#include <math.h>

int main(){
    int a = 5+2/2*3;
    printf("%d \n", a);
    return 0;
}

/////////////////////////////////////////////////////////

Control Instructions

a. Sequence Control
b. Decision control
c. Loop Control
d. Case control



OPERATORS

a. Arithmetic 
b. RElational
c Logical
d Bitwise
e. Assignment
f. Ternary


A....RELATIONAL OPERATORS....

#include <stdio.h>
#include <math.h>

int main(){
    
    printf("%d \n", 4 == 4); // this will give 1 in terminal which means true and 0 means false...every integer other than 0 is true and 0 is false
    return 0;
}   

LOGICCAL OPERATORS--- &&-AND , ||-OR , !-NOT 

#include <stdio.h>
#include <math.h>

int main(){
    
    printf("%d \n", 3>4 && 5>2);
    return 0;
}

#include <stdio.h>
#include <math.h>

int main(){
    
    printf("%d \n", 3>4 || 5>2);
    return 0;
}

#include <stdio.h>
#include <math.h>

int main(){
    
    printf("%d \n", !((5>2) && (3&4)));
    return 0;
}


ASSIGNMENT OPERATORS

= operator--> ye value dalte hai jo variable = ke left side me hota hai usme...whi normal eqns wala =
+= operator ---> a = a + b iss chiz me dono taraf a variable hai toh isko a+= b aise bhi likh skte hai
-=
*= 



.  QUESTIONS 
-1-> WAP to check if a number is divisible by 2 or not( this is also the answer of the question where we have to write a program to check if a number is even or odd)

#include<stdio.h>
#include<math.h>

int main(){
    int x;
    printf("Enter a number; ");
    scanf("%d", &x);
    printf("%d", x % 2 == 0);
}



SEE PRACTICE Q 7 abt valid and not valid statements



PRACTICE question 8- Print 1(true) or 0 (false) for following statements :
                         a. if its sunday & its snowing --> true
                         if its monday or its raining --> true
                         if a number is greater than 9 & less than 100--> ttrue

ans a.

#include <stdio.h>
#include <math.h>

int main(){
    int isSunday=1;
    int isSnowing=1;
    printf("%d\n", isSunday && isSnowing);
    return 0;
}

ans b

#include <stdio.h>
#include <math.h>

int main(){
    int isMonday=0;
    int isRaining=1;
    printf("%d\n", isMonday || isRaining);
    return 0;
}

ans c

#include<stdio.h>
#include<math.h>

int main(){
    int x;
    printf("enter number: ");
    scanf("%d", &x);
    printf("%d\n", x>9 && x<100);
    return 0;

}

HOMEWORK QUESTIONS

a. WAP tp print avg of 3 nos

#include<stdio.h>
#include<math.h>

int main(){
    float a;
    printf("enter first no:");
    scanf("%f", &a);
    float b;
    printf("ENter second number:");
    scanf("%f", &b);
    float c;
    printf("Enter third no:");
    scanf("%f", &c);
    printf("Avg = %f", (a + b + c)/3);
    return 0;
}

   /////////////Second method

#include <stdio.h>

int main() {
    float a, b, c, avg;

    printf("Enter three numbers: ");
    scanf("%f %f %f", &a, &b, &c);

    avg = (a + b + c) / 3;

    printf("Average = %.2f", avg);

    return 0;
}   

ques b. WAP to check if given character is digit or not

#include<stdio.h>

int main(){
    char x;
    printf("Enter character:");
    scanf("%c", &x);
    printf("%d", x >= '0' && x <= '9');
    return 0;
}

ques c. WAP a program to print the smallest number






























  











