#include <stdio.h>
#include <math.h>

int main()
{
    double a=0.0, //нижний предел
    b=1.0, //верхний предел
    e=0.0001; // точность
    double h,k,s1,s2;
    int n; //разбиения
    printf("Количесвто разбиений n=");
    scanf("%d", &n);
    s1=0.0;
    h=(b-a)/n;
    s2=h*cos(a);
    do{
        s1=s2;
        h=(b-a)/n;
        for(int i=a;i<n-1;i++){
            k+=h;
            s2+=cos(k);
        }
        s2=h*(((cos(a)+cos(b))/2.0)+s2);
        n*=2;
    }while(abs(s1-s2)<=e);
    printf("Интеграл %f", s2);
}
