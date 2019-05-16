#include<stdio.h>

#include<conio.h>

int S(void);
int A(void);
int B(void);
char input[100];
int i = 0;
void main() {
  char ch;
  do {
    //clrscr();
    printf("The Grammar is S->aAd/aB \n A->b/c \n B->ccd/ddc \n");
    printf("enter the input string\n");
    scanf("%s", & input);
    i = 0;
    if (S()) {
      if (input[i] == '\0')
        printf("string accepted\n");
      else
        printf("string rejected");
      getch();
      printf("do you wish to continue");
      scanf("%c", & ch);
    } else
      printf("string rejected");
  }
  while (ch == 'y' || ch == 'Y');
  getch();
}

int S() {
  int j = 1;
  if (input[i] == 'a') {
    i++;
    if (A()) {
      if (input[i] == 'd') {
        i++;
        return 1;
      } else {
        i = j;
        if (B())
          return 1;
        else
          return 0;
      }
    } else {
      i = 1;
      if (B())
        return 1;
      else
        return 0;
    }
  } else
    return 0;
}

int A() {
  if (input[i] == 'b') {
    i++;
    return 1;
  } else if (input[i] == 'c') {
    i++;
    return 1;
  } else
    return 0;
}

int B() {
  if (input[i] == 'c') {
    i++;
    if (input[i] == 'c') {
      i++;
      if (input[i] == 'd') {
        i++;
        return 1;
      } else
        return 0;
    } else
      return 0;
  } else if (input[i] == 'd')

  {
    i++;
    if (input[i] == 'd') {
      i++;
      if (input[i] == 'c') {
        i++;
        return 1;
      } else
        return 0;
    } else
      return 0;
  } else
    return 0;
}

/*
The Grammar is S->aAd/aB 
 A->b/c 
 B->ccd/ddc 
enter the input string
aa
rejected


*/
