// problem one with answer:

// Babul is learning about vowel and consonent.Now he wants you to write a program for him where he can gave a letter and the program will tell if its vowel or consonent.

// He has given the list of vowel to help you(a,e,i,o.u)

// input format: input will contain a lower case letter C.

// Constraints: c will be a letter between a to z(inclusive)

// output format:print "Vowel" if its a vowel and "Consonent" otherwise.

// sample input: a

// sample output: Vowel


#include <stdio.h>
int main()
{
    char C;

    scanf("%c", &C);

    if(C=='a' || C=='e' || C=='i'|| C=='o' || C=='u'){
        printf("Vowel");
    }else{
        printf("Consonent");
    }

    return 0;
}



// problem two with Answer:

/*

In this problem you will be give a number intiger N, Followed by N number. Each number will be either 0 or 1. You need to be print two intigers, the first one will be number of 0's and the second one will be the number of 1's in the input.
input format:
1. The first line will contain a single Integer N.
2. The Second Line will contain N Integers.


constraints:
1. 1<=N<=100000
2. Each Number Will be either 0 or 1.

Output Format:
1.Print two space separated integers, total number of 0's and 1's

Sample Input:
10
0 0 1 0 1 0 0 0 1 1

sample Output

6 4

*/



#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int zeroCount = 0;
    int oneCount = 0;
    for (int i = 0; i < N; i++)
    {
        int x;
        scanf("%d", &x);
        if (x == 0)
        {
            zeroCount++;
        }
        if (x == 1)
        {
            oneCount++;
        }
    }

    printf("%d %d", zeroCount, oneCount);

    return 0;
}



// problem four with answer:

/*
In This problem you will be given an integer N and You will have to print a pattern with N Numbers.
for example: If N=4, the pattern will be:
1
12
123
1234
 123
  12
   1
See Input sample for better understanding.

Input format:
1. The input will contain a single Integer N

contraints:
1. 1<=N<=9

Output Format:
1. Print a pattern with N numbers according to the description.

sample input 0:
3
sample output 0:
1
12
123
 12
  1
Sample input 1:
5
sample output:
1
12
123
1234
12345
 1234
  123
   12
    1

*/




#include <stdio.h>

int main()
{
   int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    for (int i = N - 1; i >= 1; i--) {
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}



// problem 3 with Answer:

/*
In this problem you will be give a number intiger N, Followed By an array containing N numbers.

Each Number will be either 0 or 1.

You will also be an integer X
You will have to toggle the X_th value in the array, toggle means if the value is 0, you will make it 1 and If its 1 then you have to make it 0

Then you have to print the array.

input format:
1. The first line contain a single integer N.
2. The Second Line will contain N Integers,
3. The Third Line will contain a single integer X.

constraints:
1. 1<=N<=100000
2. Each Number will be either 0 or 1.

Output Format:
1. Print the array after uploading

sample input 0:

5
0 1 1 0 0
4

sample Output 0:
0 1 1 1 0

sample Input 1:
4
0 1 1 1
1

sample Output 1:
1 1 1 1
*/



#include <stdio.h>

int main()
{
    int N;
    int X;
    scanf("%d", &N);
    scanf("%d", &X);


    int arr[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    arr[X - 1] = 1 - arr[X - 1];

    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}


// problem 5 with answer:
/*
This Year Abul is giving his cousin Salami

But one of his cousin has came and complained that he gave everyone different amounts of Salami , So some got more and some got less.

So Abul Decided he will give everyone equal salami. He told his cousin to find out who got the maximum Salami and to tell him how much more everyone else need to get equal salami. They came to you for help.

now you have an array containing N Integers the amount of salami of each cousin.

You need to print N integers in a line, for each Salami amount, the difference of it from the maximum amount.

Input format:
1. The first line of input will contain an integer N
2. The second Line of input will contain N integers.

Constraints:
1. 1<=N<=100000
2. Each Salami Amount will be positive and less than 10^9

Output Format:
1. Print N space separated integers, i_th of which will be the difference of the maximum amount and i_th cousins salami amount

sample input:
5
5 2 8 3 4

sample output:
3 6 0 5 4

*/


#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int array[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &array[i]);
    }

    int max = array[0];

    for (int i = 1; i < N; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }

    for (int i = 0; i < N; i++) {
        printf("%d ", max - array[i]);
    }
    
    return 0;
}
