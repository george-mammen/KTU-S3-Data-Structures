#include<stdio.h>
#include<malloc.h>

struct node {
    float coeff;
    int exp;
} poly1[10],poly2[10],sum[10];

void main(){
    int deg1,deg2,i,j;

    printf("\n Enter the degree of the first polynomial :");
    scanf("%d",&deg1);
    for(i = 0;i <= deg1;i++){
        printf("\n Enter the coefficient of x^%d :",i);
        scanf("%f",&poly1[i].coeff);
        poly1[i].exp = i;
    }

    printf("\n Enter the degree of the second polynomial :");
    scanf("%d", &deg2);
    for (i = 0; i <= deg2; i++)
    {
        printf("\n Enter the coefficient of x^%d :", i);
        scanf("%f", &poly2[i].coeff);
        poly2[i].exp = i;
    }

    printf("\n The First Polynomial is : \n \t");
    for (i = 0; i <= deg1; i++) {
        printf("+ %.1fx^(%d) ", poly1[i].coeff, poly1[i].exp);
    }

    printf("\n The Second Polynomial is : \n \t");
    for (i = 0; i <= deg2; i++) {
        printf("+ %.1fx^(%d) ", poly2[i].coeff, poly2[i].exp);
    }

    if (deg1 > deg2)
    {
        for (i = 0; i <= deg2; i++)
        {
            sum[i].coeff = poly1[i].coeff + poly2[i].coeff;
            sum[i].exp = poly1[i].exp;
        }

        for (; i <= deg1; i++)
        {
            sum[i].coeff = poly1[i].coeff;
            sum[i].exp = poly1[i].exp;
        }
    }

    else
    {
        for (i = 0; i <= deg1; i++)
        {
            sum[i].coeff = poly1[i].coeff + poly2[i].coeff;
            sum[i].exp = poly2[i].exp;
        }
        for (; i <= deg2; i++)
        {
            sum[i].coeff = poly2[i].coeff;
            sum[i].exp = poly2[i].exp;
        }
    }

    printf("\n The Sum of the Polynomial is : \n \t");
    for (j = 0; j < i; j++)
        printf("+ %.1fx^(%d)", sum[j].coeff, sum[j].exp);
}
