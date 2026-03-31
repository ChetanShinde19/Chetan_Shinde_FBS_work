#include<stdio.h>
#include<stdlib.h>
typedef struct{
    int hour;
    int min;
    int sec;
}time;

void store(time *d,int n);
void display(time *d,int n);
int main(){

    int n;
    time *d;
    printf("Enter the no.of time records:");
    scanf("%d",&n);
    d=(time *)malloc(n * sizeof(time));
    if (d==NULL)
    {
        printf("Failled to allocate memory!!");
        return 0;
    }
    
    store(d,n);
    display(d,n);
    free(d);
    return 0;
}

void store(time *d,int n)
    {
        for (int i = 0; i < n; i++)
        {   
    printf("Entre the time (hrs,min,sec)-%d",i+1);
    scanf("%d %d %d",&d[i].hour,&d[i].min,&d[i].sec);
    }
}
void display(time *d,int n){
    for (int i = 0; i < n; i++)
    {
    printf("Date: %d,%d,%d\n",d[i].hour,d[i].min,d[i].sec);
}
}
