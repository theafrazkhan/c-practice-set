//print the name of a user stored in variable

// written by : github.com/theafrazkhan
// dated : 17/oct/2023

#include<stdio.h>

int main (void)
{
	char ch1 = 'a';
	char ch2 = 'f';
	char ch3 = 'r';
	char ch4 = 'a';
	char ch5 = 'z';


	printf("Hello %c%c%c%c%c, its so lengthy to program in c",ch1,ch2,ch3,ch4,ch5);

	return 0;
}

//we can also use string in c by adding a third party library

/*





#include<stdio.h>
//we need an explicit library to use string in c
#include<cs50.h>

int main (void)
{
    string name = get_string("Enter your name: ");

    printf("hello %s, nice meeting you: ",name);

    return 0;
}



*/