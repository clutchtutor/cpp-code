#include<iostream>
#include<ctype.h>
#define size 50
using namespace std;
int s[size];
int top=0;
void push(int q)
{
    s[++top]=q;
}
int pop()
{
    return(s[top--]);
}
main()
{
    char po[50],c;
    int i=0,j,k,a,b;
    cout<<"ENter input postfix\n";
    cin >> po;
    while((c=po[i++])!='\0')
    {
        if(isdigit(c))
           push(c-'0');
            else
        {
            b=pop();
            a=pop();
            switch(c)
            {
                case '+' : push(a+b); break;
                case '-' : push(a-b); break;
                case '*' : push(a*b); break;
                case '/' : push(a/b); break;
            }
        }
    }
    cout<<"result after evaluation is : "<<s[top];
    return 0;
}

