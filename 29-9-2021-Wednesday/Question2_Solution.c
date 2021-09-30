#include <stdio.h>
int main()
{
    char a;
    scanf("%c", &a);
    if (65 <= a && a <= 90){
        printf("A Capital letter\n");
    }
    else if (48 <= a && a <= 57){
        printf("A digit\n");
    }
    else if (97 <= a && a <= 122){
        printf("A Small letter\n");
    }
    else{
        printf("A Special character\n");
    }
    return 0;
} 