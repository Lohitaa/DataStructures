/* Given a bag which consists of numbers (integers) blocks,
you have to organize the numbers again in the same order as they were inserted it into the bag,
i.e. the first number inserted into the bag should be picked up first followed by other numbers in series.
You can use one extra bag to complete the work 
(assume that the bags are compact and is in the form of a stack structure and has the same width as that of the number blocks
and is large enough to fill the bag to the top and the number taken from bag is in reverse order).
input: 15 21 39 390 392 380.
output: 15 21 39 390 392 380.*/

#include <stdio.h>
int top=-1,stack[10];
void push(int a)
{
    top=top+1;
    stack[top]=a;
}

int pop()
{
    int b=stack[top];
    top=top-1;
    return b;
 }

void display(int n)
{
    int i;
    for(i=0;i<n;i++)
    {
    int a=pop();
    
    printf("%d ",a);
    
    }
}
int main()
{
    int i,n,a[10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=n-1;i>=0;i--)
    {
        push(a[i]);
    }
    display(n);
}
