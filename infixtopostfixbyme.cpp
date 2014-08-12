#include<iostream>
#include<string>
#include<ctype.h>
char s[50];
int top=0;
using namespace std;
void push(char c)
{
    s[++top]=c;
}
char pop()
{
    char p;
    p=s[top--];
    return(p);

}
int prio(char c)
{
    switch(c)
    {
        case '@' : return 0;
                   break;
        case '(' : return 1;
                   break;
        case '+' : return 2;
                   break;
        case '-' : return 2;
                   break;
        case '*' : return 3;
                   break;
        case '/' : return 3;
                   break;
    }
}

int main()
{
    char in[50],po[50],c,d;
    int i=0,k=0,q;
    cin >> in;
    push('@');
    while((c=in[i++])!='\0')
    {
        if(c=='(')
            push(c);
        else if(isalnum(c))
             po[k++]=c;
             else if(c==')')
             {
                 while(s[top]!='(')
                 po[k++]=pop();
                 d=pop();
             }
             else
                {
                    while(prio(s[top])>=prio(c))
                    po[k++]=pop();
                    push(c);
             }
    }
    while(s[top]!='@')
        po[k++]=pop();
        po[k]='\0';
    cout << "postfix conversion is ";
    cout << po;
    return 0;
}
