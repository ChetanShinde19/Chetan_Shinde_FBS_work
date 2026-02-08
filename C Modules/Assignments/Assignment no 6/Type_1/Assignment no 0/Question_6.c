#include<stdio.h>
int square_cube();
int main()
{
    square_cube();
}
int square_cube()
{
    int square,cube,t1,t2;
    square=10;
    cube=10;
    t1=square*square;
    t2=cube*cube*cube;
    printf("Sqare %d & Cube %d",t1,t2);
    return 0;
}