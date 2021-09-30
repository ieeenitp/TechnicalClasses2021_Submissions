### Program Code for Problem 2

<pre>int main()
{
    float x,y,i;
    printf("x y i\n");
    for(y=1;y<=6;y++){
        for(x=5.5;x<=12.5;x+=0.5){
            i=2+(y+0.5*x);
            printf("%0.2f %0.2f %0.2f\n",x,y,i);
        }
        printf("\n");
    }
    return 0;
}
