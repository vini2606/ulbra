int main()
{

    int n1, n2, n3, n4, soma;
    printf("digite o valor de n1:/n");
    scanf("%d%*c", &n1);
    printf("digite o valor de n2:/n");
    scanf("%d%*c", &n2);

    printf("digite o valor de n3:/n");
    scanf("%d%*c", &n3);

    printf("digite o vaor de n4:/n");
    scanf("%d%*c", &n4);
    soma = n1 + n2 + n3 + n4;
    printf("soma é %d", soma);
}
#include <stdio.h>

int main()
{

    int n1, n2, n3, media;
    printf("digite o valor de n1:\n");
    scanf("%d%*c", &n1);
    printf("digite o valor de n2:\n");
    scanf("%d%*c", &n2);
    printf("digite o valor de n3:\n");
    scanf("%d%*c", &n3);
    media = (n1 + n2 + n3) / 3;
    printf("media é %d", media);
}
int main()
{
    int n1, n2, n3, p1, p2, p3;
    int s1, s2, s3, total, media;
    printf("digite o valor de n1:\n");
    scanf("%d%*c", &n1);
    printf("digite o valor de n2:\n");
    scanf("%d%*c", &n2);
    printf("digite o valor de n3:\n");
    scanf("%d%*c", &n3);
    printf("digite o valor de p1:\n");
    scanf("%d%*c", &p1);
    printf("digite o valor de p2:\n");
    scanf("%d%*c", &p2);
    printf("digite o valor de p3:\n");
    scanf("%d%*c", &p3);
    s1 = n1 * p1;
    s2 = n2 * p2;
    s3 = n3 * p3;
    total = p1 + p2 + p3;
    media = (s1 + s2 + s3) / total;
    printf("media é %d", media);
}