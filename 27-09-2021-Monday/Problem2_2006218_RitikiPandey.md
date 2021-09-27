# Code for Problem 2


<pre>int main(){ 
    float y, x; 
    printf("i y x");
    for(y = 1; y<=6; y++){
        for(x=5.5; x<=12.5; x = x+0.5){
            printf("%0.1f %0.1f %0.1f", 2+(y+0.5*x), y ,x);
        }
        printf("\n");
    }
    return 0;
}
