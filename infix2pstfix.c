#include<stdio.h>
#include<ctype.h>

int s[50];
int top=-1;

void push(char x){
    s[++top]=x;
}

char pop(){
    if(top==-1)
    {
        return -1;
    }
    else
    {
        return s[top--];
    }
}

int priority(char x){
    if(x=='(')
        return 0;
    if(x=='+'||x=='-')
        return 1;
    if(x=='*'||x=='/')
        return 2;
    if(x=='^')
        return 3;
    return 0;
}

int convert()
{
    char exp[100];
    char *e, x;
    printf("Enter the expression : ");
    scanf("%s",exp);
    printf("\n");
    e = exp;
    while(*e != '\0')
    {
        if(isalnum(*e))
            printf("%c ",*e);
        else if(*e == '(')
            push(*e);
        else if(*e == ')')
        {
            while((x = pop()) != '(')
                printf("%c ", x);
        }
        else
        {
            while(priority(s[top]) >= priority(*e))
                printf("%c ",pop());
            push(*e);
        }
        e++;
    }
    while(top != -1)
    {
        printf("%c ",pop());
    }return 0;
}

int evaluate()
{
    int z=0,a=-1;
    char stacke[100];
    int ans[100];
    printf("\nEnter the postfix expression to evaluate\n");
    scanf("%s",stacke);
    while(stacke[z]!='\0')
    {
        if(stacke[z]==' ')
            z++;
        else
        {
            if(stacke[z]=='+'||stacke[z]=='-'||stacke[z]=='*'||stacke[z]=='/')
            {
                if(stacke[z]=='+')
                {
                    ans[a-1]=ans[a]+ans[a-1];
                    a--;
                    z++;
                }
                else if(stacke[z]=='-')
                {
                    ans[a-1]=ans[a-1]-ans[a];
                    a--;
                    z++;
                }
                else if(stacke[z]=='*')
                {
                    ans[a-1]=ans[a-1]*ans[a];
                    a--;
                    z++;
                }
                else if(stacke[z]=='/')
                {
                    ans[a-1]=ans[a-1]/ans[a];
                    a--;
                    z++;
                }
            }
            else
            {
                a++;
                ans[a]=(int)(stacke[z]);
                ans[a]=ans[a]-48;
                z++;
            }
        }
    }
    printf("The final value after evealuation is = %d",ans[0]);
}

int main()
{
    int f=0,x;
    while(f!=1)
    {
        printf("\nEnter your choice\n");
        printf("1)Infix to Postfix conversion\n2)Evaluate\n3)Press (3) to exit\n");
        scanf("%d",&x);
        switch (x)
        {
            case 1:
                convert();
                break;
            case 2:
                evaluate();
                break;
            case 3:
                printf("Exiting.....");
                f=1;
                break;
            default:
                printf("Enter a valid choice\n");
        }
    }
}
