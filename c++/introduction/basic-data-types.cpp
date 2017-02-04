#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a;
    long b;
    long long c;
    char f;
    float d;
    double e;
    scanf("%d %ld %lld %c %f %lf",&a,&b,&c,&f,&d,&e);
    printf("%d",a);
    printf("\n%ld",b);
    printf("\n%lld",c);
    printf("\n%c",f);
    printf("\n%.2f",d);
    printf("\n%.5lf",e);
    cout<<endl;
    return 0;
}

