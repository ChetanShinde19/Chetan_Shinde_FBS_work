#include<stdio.h>
#include<stdlib.h>
typedef struct{
    int date;
    int month;
    int year;
}Date;

void store(Date *d,int n);
void display(Date *d,int n);
int main(){

    int n;
    Date *d;
    printf("Enter the no.of dd-mm-yy:");
    scanf("%d",&n);
    d=(Date *)malloc(n * sizeof(Date));
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

void store(Date *d,int n)
    {
        for (int i = 0; i < n; i++)
        {   
    printf("Entre the (dd mm yy)-%d",i+1);
    scanf("%d %d %d",&d[i].date,&d[i].month,&d[i].year);
    }
}
void display(Date *d,int n){
    for (int i = 0; i < n; i++)
    {
    printf("Date: %d-%d-%d\n",d[i].date,d[i].month,d[i].year);
}
}
