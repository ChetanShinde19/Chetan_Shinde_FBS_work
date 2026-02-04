//Write a menu driven program to take a number for user and perform operations as follows.

// Press 1.To check number is even or odd.
// 2.To check number is prime or not.
// 3.To check number is pallindrome or not.
// 4.To check number is positive, negative or zero.
// 5.To reverse a number.
// 6.To find sum of digits.

#include<stdio.h>
int main()
{
    int choice,num,i,temp,rev,sum,digit,flag;
    printf("MENU\n");
    printf("Enter your choice from the following:\n");
    printf("1) To check number is even or odd:\n");
    printf("2) To check number is prime or not:\n");
    printf("3) To check number is pallindrome or not:\n");
    printf("4) To check number is positive, negative or zero:\n");
    printf("5) To reverse a number:\n");
    printf("6) To find sum of digits:\n");

    printf("Enter your choice from the following: ");
    scanf(" %d", &choice);

    printf("Enter the number: \n");
    scanf(" %d",&num);

//even or odd
    if (choice==1)
    {
        printf("even and odd numbers from 1 to %d\n",num);
        for (int  i = 1; i <=num; i++)
        {
            if (i%2==0)
        {
            printf("%d is a even number\n",i);
        }
        else{
            printf("%d is a odd number\n",i);
        }
        }
    }

//prime or not
    else if (choice==2)
    {
    int flag=1;
    printf("prime number between 1 to %d is :\n",num);
      if (num<=1)
    {
        printf("It is not prime number:\n");
    }
    for (int i = 2; i <=num; i++)
    {
        flag=1;
        for(int j=2;j<=i/2;j++)
        {
            if (i%j==0)
        {
            flag=0;
            break;

        }
        }
       
     if (flag==1)
    {
        printf("%d is prime number\n",i);
    }
    else{
        printf("%d is not a prime number\n",i);
    }
    }
    }


//palindrome number
    else if (choice==3)
    {
         int first,last;
  
    first=num/100;
    last=num%10;
    if(num>=100 && num<=999 && first==last){
    printf("%d it is palindrome number",num);
    }
    else{
    printf("%d it is not palindrome number",num);
    }
}


//positive, negative or zero
    else if (choice==4)
{
    if (num>0)
    {
        printf("%d is a positive number",num);
    }
    else if(num<0)
    {
        printf("%d is a negative number",num);
    }
    else{
        printf("the numer is a zero");
    }
    
}


//reverse a number

else if (choice==5)
{
   temp=num;;
   rev=0;
   while (temp>0)
   {
    digit = temp % 10;
    rev = rev * 10 + digit;
    temp = temp / 10;
   }
   printf("Reverse order of the number is %d",rev);
}

//sum of digits
else if (choice==6)
{
    temp=num;
    while (temp > 0)
{
    digit = temp % 10;
    sum = sum + digit;
    temp = temp / 10;
}

printf("Sum of digits = %d", sum);
    
}

else
    {
        printf("Invalid choice");
    }

    return 0;
}