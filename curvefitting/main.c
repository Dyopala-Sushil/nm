#include <stdio.h>
#include <stdlib.h>
#define max 10
int main()
{
    int n,i;
    float x[max],y[max],X[max],Y[max],sumx=0.0,sumy=0.0,sumX=0.0,sumY=0.0,sumXY=0,sumX2=0,A,B,a,b;
    printf("How many set of data: ");
    scanf("%d",&n);
    printf("\nEnter the data:\n");
    for(i=0;i<n;i++){
        printf("x[%d] = ",i);
        scanf("%f",&x[i]);
        printf("y[%d] = ",i);
        scanf("%f",&y[i]);
        sumx+=x[i];
        sumy+=y[i];
        Y[i]=1/y[i];
        X[i]=1/x[i];
        sumX+=X[i];
        sumY+=Y[i];
        sumXY+=(X[i]*Y[i]);
        sumX2+=(X[i]*X[i]);
    }
    printf("\nx[i]\ty[i]\tX[i]\tY[i]\tx2[i]\txy[i]\n");
    for(i=0;i<n;i++){
        printf("%5f\t%5f\t%5f\t%5f\t%5f\t%5f\n",x[i],y[i],X[i],Y[i],(X[i]*X[i]),(X[i]*Y[i]));
    }
    printf("-----------------------------------------------------------\n");
    printf("%5f\t%5f\t%5f\t%5f\t%5f\t%5f\n",sumx,sumy,sumX,sumY,sumX2,sumXY);
    B=((n*sumXY)-(sumX*sumY))/((n*sumX2)-(sumX*sumX));
    A=(sumY-(B*sumX))/n;
    a=1/A;
    b=a*B;
    printf("\n\na = %f\tb= %f\n",a,b);
    return 0;
}
