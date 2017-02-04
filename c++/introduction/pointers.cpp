#include <stdio.h>
//#include<cmath>
int absolute(int a,int b)
{
	if((a-b)>0)
	return (a-b);
	else return (-1)*(a-b);
}
void update(int *a,int *b) {
    // Complete this function 
    int pa=(*a)+(*b);
    int pb=absolute((*a),(*b));
    *a=pa;
    *b=pb;
    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
