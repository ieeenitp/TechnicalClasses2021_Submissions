Error in line 
Case a||b;
because case can only have integers value to check for case

The other option can be 
We can write seperate cases for case 3 and case 4 to get desirable output:-


# include <stdio.h>

int main()
{
int a=3 , b = 4, c;

c=b-a;

switch (c)

{

case 1:
printf ("God give me chance to change things\n");
break;

case 2:
printf ("God give me chance to change things\n");
break;

case 3:
printf ("God give me a chance to run my show\n");
break;

case 4:
printf ("God give me a chance to run my show\n");
break;

}

return 0;
}


//output 

God give me chance to change things.

Because (c=b-a is equal to 1 )
Hence case 1 runs and gives output.