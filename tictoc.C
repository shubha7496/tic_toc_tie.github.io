#include<stdio.h>
#include<stdlib.h>
void ply1();
void ply2();
void chnce();
void disp();
void check();
void start();
char arr[10][10];
int main()
{
start();
return 0;
}
void start(){
        int i,j;
    char arr[10][10],c;
   int ch;
   printf("please select the player one or two press 1 or 2\n");
   scanf("\n%d",&ch);
   if(ch==1||ch==2){
   switch(ch)
   {
       case 1:
       ply1();
       break;
       case 2:
       ply2();
       break;
   }
   }
   else{
    start();
   }
}
void check(){
         if(arr[0][0]=='o'&&arr[0][1]=='x'&&arr[0][2]=='x'&&
            arr[1][0]=='x'&&arr[1][1]=='o'&&arr[1][2]=='o'&&
            arr[2][0]=='x'&&arr[2][1]=='o'&&arr[2][2]=='x'){
        printf("The match is Draw!");
        exit(0);
            }
    else if(arr[0][0]=='x'&&arr[0][1]=='o'&&arr[0][2]=='o'&&
            arr[1][0]=='o'&&arr[1][1]=='x'&&arr[1][2]=='x'&&
            arr[2][0]=='o'&&arr[2][1]=='x'&&arr[2][2]=='o'){
        printf("The match is Draw!");
        exit(0);
            }
    else if(arr[0][0]=='o'&&arr[0][1]=='x'&&arr[0][2]=='o'&&
            arr[1][0]=='x'&&arr[1][1]=='o'&&arr[1][2]=='o'&&
            arr[2][0]=='x'&&arr[2][1]=='o'&&arr[2][2]=='x'){
        printf("The match is Draw!");
        exit(0);
            }
    else if(arr[0][0]=='x'&&arr[0][1]=='o'&&arr[0][2]=='x'&&
            arr[1][0]=='o'&&arr[1][1]=='x'&&arr[1][2]=='x'&&
            arr[2][0]=='o'&&arr[2][1]=='x'&&arr[2][2]=='o'){
        printf("The match is Draw!");
        exit(0);
            }
    else if(arr[0][0]=='o'&&arr[0][1]=='x'&&arr[0][2]=='o'&&
            arr[1][0]=='o'&&arr[1][1]=='o'&&arr[1][2]=='x'&&
            arr[2][0]=='x'&&arr[2][1]=='o'&&arr[2][2]=='x'){
        printf("The match is Draw!");
        exit(0);
            }
    else if(arr[0][0]=='x'&&arr[0][1]=='o'&&arr[0][2]=='x'&&
            arr[1][0]=='o'&&arr[1][1]=='o'&&arr[1][2]=='x'&&
            arr[2][0]=='o'&&arr[2][1]=='x'&&arr[2][2]=='o'){
        printf("The match is Draw!");
        exit(0);
            }
     else if(arr[0][0]=='x'&&arr[0][1]=='o'&&arr[0][2]=='x'&&
             arr[1][0]=='o'&&arr[1][1]=='o'&&arr[1][2]=='x'&&
             arr[2][0]=='x'&&arr[2][1]=='x'&&arr[2][2]=='o'){
        printf("The match is Draw!");
        exit(0);
            }
     else if(arr[0][0]=='x'&&arr[0][1]=='o'&&arr[0][2]=='x'&&
             arr[1][0]=='x'&&arr[1][1]=='o'&&arr[1][2]=='o'&&
             arr[2][0]=='o'&&arr[2][1]=='x'&&arr[2][2]=='o'){
        printf("The match is Draw!");
        exit(0);
            }
     else if(arr[0][0]=='o'&&arr[0][1]=='x'&&arr[0][2]=='x'&&
            arr[1][0]=='x'&&arr[1][1]=='o'&&arr[1][2]=='o'&&
            arr[2][0]=='o'&&arr[2][1]=='o'&&arr[2][2]=='x'){
        printf("The match is Draw!");
        exit(0);
            }
     else if(arr[0][0]=='o'&&arr[0][1]=='x'&&arr[0][2]=='o'&&
            arr[1][0]=='o'&&arr[1][1]=='x'&&arr[1][2]=='x'&&
            arr[2][0]=='x'&&arr[2][1]=='o'&&arr[2][2]=='o'){
        printf("The match is Draw!");
        exit(0);
            }
     else if(arr[0][0]=='o'&&arr[0][1]=='x'&&arr[0][2]=='o'&&
            arr[1][0]=='x'&&arr[1][1]=='x'&&arr[1][2]=='0'&&
            arr[2][0]=='x'&&arr[2][1]=='o'&&arr[2][2]=='x'){
        printf("The match is Draw!");
        exit(0);
            }
      else if(arr[0][0]=='o'&&arr[0][1]=='x'&&arr[0][2]=='o'&&
              arr[1][0]=='o'&&arr[1][1]=='x'&&arr[1][2]=='x'&&
              arr[2][0]=='x'&&arr[2][1]=='o'&&arr[2][2]=='x'){
        printf("The match is Draw!");
        exit(0);
            }
         else if(arr[0][0]=='x'&&arr[0][1]=='x'&&arr[0][2]=='o'&&
              arr[1][0]=='o'&&arr[1][1]=='o'&&arr[1][2]=='x'&&
              arr[2][0]=='x'&&arr[2][1]=='o'&&arr[2][2]=='x'){
        printf("The match is Draw!");
        exit(0);
            }
       else if(arr[0][0]=='o'&&arr[0][1]=='o'&&arr[0][2]=='x'&&
              arr[1][0]=='x'&&arr[1][1]=='x'&&arr[1][2]=='o'&&
              arr[2][0]=='o'&&arr[2][1]=='x'&&arr[2][2]=='o'){
        printf("The match is Draw!");
        exit(0);
            }
       else if(arr[0][0]=='o'&&arr[0][1]=='o'&&arr[0][2]=='x'&&
              arr[1][0]=='x'&&arr[1][1]=='x'&&arr[1][2]=='o'&&
              arr[2][0]=='o'&&arr[2][1]=='x'&&arr[2][2]=='x'){
        printf("The match is Draw!");
        exit(0);
            }
        else if(arr[0][0]=='o'&&arr[0][1]=='x'&&arr[0][2]=='x'&&
              arr[1][0]=='x'&&arr[1][1]=='o'&&arr[1][2]=='o'&&
              arr[2][0]=='o'&&arr[2][1]=='o'&&arr[2][2]=='x'){
        printf("The match is Draw!");
        exit(0);
            }
         else if(arr[0][0]=='x'&&arr[0][1]=='x'&&arr[0][2]=='o'&&
              arr[1][0]=='o'&&arr[1][1]=='o'&&arr[1][2]=='x'&&
              arr[2][0]=='x'&&arr[2][1]=='o'&&arr[2][2]=='o'){
        printf("The match is Draw!");
        exit(0);
            }
        else if(arr[0][0]=='x'&&arr[0][1]=='o'&&arr[0][2]=='o'&&
              arr[1][0]=='o'&&arr[1][1]=='x'&&arr[1][2]=='x'&&
              arr[2][0]=='x'&&arr[2][1]=='x'&&arr[2][2]=='o'){
        printf("The match is Draw!");
        exit(0);
            }
      else if(arr[0][0]=='o'&&arr[0][1]=='o'&&arr[0][2]=='x'&&
              arr[1][0]=='x'&&arr[1][1]=='x'&&arr[1][2]=='o'&&
              arr[2][0]=='o'&&arr[2][1]=='o'&&arr[2][2]=='x'){
        printf("The match is Draw!");
        exit(0);
            }
      else if(arr[0][0]=='o'&&arr[0][1]=='x'&&arr[0][2]=='o'&&
              arr[1][0]=='x'&&arr[1][1]=='o'&&arr[1][2]=='o'&&
              arr[2][0]=='x'&&arr[2][1]=='o'&&arr[2][2]=='x'){
        printf("The match is Draw!");
        exit(0);
            }
      else if(arr[0][0]=='x'&&arr[0][1]=='x'&&arr[0][2]=='o'&&
              arr[1][0]=='o'&&arr[1][1]=='x'&&arr[1][2]=='x'&&
              arr[2][0]=='x'&&arr[2][1]=='o'&&arr[2][2]=='o'){
        printf("The match is Draw!");
        exit(0);
            }
      else if(arr[0][0]=='o'&&arr[0][1]=='x'&&arr[0][2]=='o'&&
              arr[1][0]=='x'&&arr[1][1]=='x'&&arr[1][2]=='o'&&
              arr[2][0]=='x'&&arr[2][1]=='o'&&arr[2][2]=='x'){
        printf("The match is Draw!");
        exit(0);
            }
       else if(arr[0][0]=='x'&&arr[0][1]=='o'&&arr[0][2]=='x'&&
              arr[1][0]=='x'&&arr[1][1]=='x'&&arr[1][2]=='o'&&
              arr[2][0]=='o'&&arr[2][1]=='x'&&arr[2][2]=='o'){
        printf("The match is Draw!");
        exit(0);
            }
      else if(arr[0][0]=='o'&&arr[0][1]=='x'&&arr[0][2]=='x'&&
              arr[1][0]=='x'&&arr[1][1]=='x'&&arr[1][2]=='o'&&
              arr[2][0]=='o'&&arr[2][1]=='o'&&arr[2][2]=='x'){
        printf("The match is Draw!");
        exit(0);
            }   
      else if(arr[0][0]=='x'&&arr[0][1]=='o'&&arr[0][2]=='x'&&
              arr[1][0]=='x'&&arr[1][1]=='x'&&arr[1][2]=='o'&&
              arr[2][0]=='o'&&arr[2][1]=='x'&&arr[2][2]=='o'){
        printf("The match is Draw!");
        exit(0);
              }    
      else if(arr[0][0]=='x'&&arr[0][1]=='o'&&arr[0][2]=='o'&&
              arr[1][0]=='o'&&arr[1][1]=='o'&&arr[1][2]=='x'&&
              arr[2][0]=='x'&&arr[2][1]=='x'&&arr[2][2]=='o'){
        printf("The match is Draw!");
        exit(0);
              }    
      else if(arr[0][0]=='x'&&arr[0][1]=='o'&&arr[0][2]=='x'&&
              arr[1][0]=='o'&&arr[1][1]=='x'&&arr[1][2]=='o'&&
              arr[2][0]=='o'&&arr[2][1]=='x'&&arr[2][2]=='o'){
        printf("The match is Draw!");
        exit(0);
              }  
      else if(arr[0][0]=='x'&&arr[0][1]=='o'&&arr[0][2]=='x'&&
              arr[1][0]=='o'&&arr[1][1]=='o'&&arr[1][2]=='x'&&
              arr[2][0]=='x'&&arr[2][1]=='x'&&arr[2][2]=='o'){
        printf("The match is Draw!");
        exit(0);
              }  
      else if(arr[0][0]=='x'&&arr[0][1]=='x'&&arr[0][2]=='o'&&
              arr[1][0]=='o'&&arr[1][1]=='o'&&arr[1][2]=='x'&&
              arr[2][0]=='x'&&arr[2][1]=='x'&&arr[2][2]=='o'){
        printf("The match is Draw!");
        exit(0);
              }  
       else if(arr[0][0]=='x'&&arr[0][1]=='o'&&arr[0][2]=='x'&&
              arr[1][0]=='x'&&arr[1][1]=='o'&&arr[1][2]=='x'&&
              arr[2][0]=='o'&&arr[2][1]=='x'&&arr[2][2]=='o'){
        printf("The match is Draw!");
        exit(0);
              } 
      else if(arr[0][0]=='o'&&arr[0][1]=='o'&&arr[0][2]=='x'&&
              arr[1][0]=='x'&&arr[1][1]=='o'&&arr[1][2]=='o'&&
              arr[2][0]=='o'&&arr[2][1]=='x'&&arr[2][2]=='x'){
        printf("The match is Draw!");
        exit(0);
              } 
       else if(arr[0][0]=='o'&&arr[0][1]=='x'&&arr[0][2]=='x'&&
              arr[1][0]=='x'&&arr[1][1]=='o'&&arr[1][2]=='o'&&
              arr[2][0]=='o'&&arr[2][1]=='x'&&arr[2][2]=='x'){
        printf("The match is Draw!");
        exit(0);
              }  
      else if(arr[0][0]=='o'&&arr[0][1]=='x'&&arr[0][2]=='o'&&
              arr[1][0]=='x'&&arr[1][1]=='x'&&arr[1][2]=='o'&&
              arr[2][0]=='o'&&arr[2][1]=='o'&&arr[2][2]=='x'){
        printf("The match is Draw!");
        exit(0);
              } 
      else if(arr[0][0]=='o'&&arr[0][1]=='x'&&arr[0][2]=='o'&&
              arr[1][0]=='o'&&arr[1][1]=='x'&&arr[1][2]=='o'&&
              arr[2][0]=='x'&&arr[2][1]=='o'&&arr[2][2]=='x'){
        printf("The match is Draw!");
        exit(0);
              } 
}
void disp()
{
    
    printf("    |       |       \n");
    printf(" %c  |  %c        %c \n",arr[0][0],arr[0][1],arr[0][2]);
    printf("____|_______|_______\n");
    printf("    |       |       \n");
    printf(" %c     %c         %c  \n",arr[1][0],arr[1][1],arr[1][2]);
    printf("____|_______|_______\n");
    printf("    |       |       \n");
    printf(" %c     %c         %c         \n",arr[2][0],arr[2][1],arr[2][2]);
    printf("    |       |       \n");
}
void chnce(){
    int ch,l=9;   
   scanf("\n%d",&ch);
            if(ch== 1){
            scanf("\n%c",&arr[0][0]);
           disp();
            }
            else if(ch==2){
            scanf("\n%c",&arr[0][1]);
            disp();
            }
            else if(ch==3){
            scanf("\n%c",&arr[0][2]);
            disp();
            }
            else if(ch==4){
            scanf("\n%c",&arr[1][0]);
            disp();
            }
            else if(ch==5){
            scanf("\n%c",&arr[1][1]);
            disp();
            }
            else if(ch==6){
            scanf("\n%c",&arr[1][2]);
            disp();
            }
            else if(ch==7){
            scanf("\n%c",&arr[2][0]);
            disp();
            }
            else if(ch==8){
            scanf("\n%c",&arr[2][1]);
            disp();
            }
            else if(ch==9){
            scanf("\n%c",&arr[2][2]);
            disp();
            }
            else{
                printf("please enter valid input 1 to 9");
                chnce();
            }
}
void ply1()
{   
    printf("player 1 turn!\n");
    printf("player 1 Dice is X\n");
    chnce();
    check();
    if(arr[0][0]=='x'&&arr[0][1]=='x'&&arr[0][2]=='x')
    {
        printf("player 1 is win");  
        exit(0);
    }
   else if(arr[0][0]=='x'&&arr[1][0]=='x'&&arr[2][0]=='x')
    {
        printf("player 1 is win"); 
        exit(0); 
    }
    else if(arr[0][0]=='x'&&arr[1][1]=='x'&&arr[2][2]=='x')
    {
        printf("player 1 is win");
        exit(0);
    }
    else if(arr[0][1]=='x'&&arr[1][1]=='x'&&arr[2][1]=='x')
    {
        printf("palyer 1 is win");
        exit(0);
   }
    else if(arr[0][2]=='x'&&arr[1][2]=='x'&&arr[2][2]=='x')
    {
        printf("player 1 is win");
        exit(0);
    }
    else if(arr[1][0]=='x'&&arr[1][1]=='x'&&arr[1][2]=='x')
    {
        printf("player 1 is win");
        exit(0);
    }
    else if(arr[2][0]=='x'&&arr[2][1]=='x'&&arr[2][2]=='x')
    {
        printf("player 1 is win");
        exit(0);
    }
    else if(arr[2][0]=='x'&&arr[1][1]=='x'&&arr[0][2]=='x')
    {
        printf("player 1 is win");
        exit(0);
    }
    else{
   ply2();
    }
}
void ply2(){
    printf("player 2 turn!\n");
    printf("player 2 Dice O\n");
    chnce();
    check();
        if(arr[0][0]=='o'&&arr[0][1]=='o'&&arr[0][2]=='o')
    {
        printf("player 2 is win");
        exit(0);
    }
    else if(arr[0][0]=='o'&&arr[1][0]=='o'&&arr[2][0]=='o')
    {
        printf("player 2 is win");
        exit(0);
    }
    else if(arr[0][0]=='o'&&arr[1][1]=='o'&&arr[2][2]=='o')
    {
        printf("player 2 is win");
        exit(0);
    }
    else if(arr[0][1]=='o'&&arr[1][1]=='o'&&arr[2][1]=='o')
    {
        printf("palyer 2 is win");
        exit(0);
    }
    else if(arr[0][2]=='o'&&arr[1][2]=='o'&&arr[2][2]=='o')
    {
        printf("player 2 is win");
        exit(0);
    }
    else if(arr[1][0]=='o'&&arr[1][1]=='o'&&arr[1][2]=='o')
    {
        printf("player 2 is win");
        exit(0);
    }
    else if(arr[2][0]=='o'&&arr[2][1]=='o'&&arr[2][2]=='o')
    {
        printf("player 2 is win");
        exit(0);
    }
    else if(arr[2][0]=='o'&&arr[1][1]=='o'&&arr[0][2]=='o')
    {
        printf("player 2 is win");
        exit(0);
    }
    else
    {
ply1();
    }
    }

