#include<stdio.h>
#include<conio.h>
#define MAX 20
char post[MAX], infix[MAX], s[MAX], top, t;
int i, j;
void push (char t)
{
  top++;
  s[top] = t;
}

char pop ()
{
  return (s[top--]);
}

int priority (char ch)
{
  if (ch == '+' || ch == '-')
    return (2);
  else if (ch == '*' || ch == '/')
    return (3);
  else
    return 0;
}

void check ()
{
  while (priority (t) <= priority (s[top]))
    post[j++] = pop ();
}

void main ()
{
  char x;
  i = 0;
  j = 0;
  printf ("enter the infix expression :");
  scanf ("%s", &infix);
  while (infix[i] != '\0')
    {
      t = infix[i];
      if (t != '+' && t != '-' && t != '*' && t != '/' && t != '('
	  && t != ')')
	{
	  post[j++] = t;
	}
      else
	switch (t)
	  {
	  case '(':
	    push (t);
	    break;
	  case '+':
	  case '-':
	  case '*':
	  case '/':
	    check ();
	    push (t);
	    break;
	  case ')':
	    while ((x = pop ()) != '(')
	      {
		post[j++] = x;
	      }
	    break;
	  }
      i = i + 1;
    }
  while (s[top] != '\0')
    post[j++] = pop ();
  printf ("the postfix expression is:%s", post);
}
/*
Output:

enter the infix expression :a+b-c*d/e
the postfix expression is:ab+cd*e/-



*/
