//Name Cases: Store a person’s name in a variable, and then print that person’s name in lowercase, uppercase, and titlecase.

//written by Afraz khan
//Dated: 10/16/2023
//facebook.com/theafrazkhan
//github.com/theafrazkhan

#include<stdio.h>
#include<string.h>
#include<cs50.h>

//to use cs50 on linux download this library on linux terminal and execute the next command
//curl -s https://packagecloud.io/install/repositories/cs50/repo/script.deb.sh | sudo bash
//$ sudo apt install libcs50

//prototyping the functions

void to_lower(string name);
void to_upper(string name);
void to_title(string name);



int main (void)
{
    string name = get_string("Enter the name: ");

    printf("name in uppercase is : ");
    to_upper(name);

    printf("name in lowercase is : ");
    to_lower(name);

    printf("name in titlecase is : ");
    to_title(name);

    return 0;
}
//function defination
void to_upper(string name)
{
    int length = strlen(name);

    for (int i = 0; i < length; i++)

    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            printf("%c",name[i] - 32);
        }

        else
        {
            printf("%c",name[i]);
        }
    }
    printf("\n");

}
//function defination
void to_lower(string name)
{

    int length = strlen(name);
        for(int i = 0; i < length; i ++)
        {
            if (name[i] >= 'A' && name[i] <= 'Z')
            {
            printf("%c",name[i]+32);
            }

        else
        {
            printf("%c", name[i]);
        }
    }
    printf("\n");
}
// function defination
void to_title(string name)
{
    int length = strlen(name);

     if (name[0] >= 'a' && name[0]<= 'z')

        {
            printf("%c",name[0]-32);
        }
        else
        {
            printf("%c",name[0]);
        }

    for (int i = 1; i <length; i ++)
    {
        if (name[i] >= 'A' && name [i] <= 'Z')
        {
            printf("%c",name[i]+32);

        }
        else
        {
            printf("%c",name[i]);
        }
    }
    printf("\n");

}