#include<iostream>
#include<windows.h>
using namespace std;
char x[9]={'0','1','2','3','4','5','6','7','8'};
void tic_map(char v,int c);
int check_result();
int result2();
int result1();
int main()
{
    int i=0,p_c=2;
    char in;

    while(i!=9)
    {
      tic_map('9',10) ;
     inn: cin>>in;
      if(in!='X'||in!='O')
      {
         tic_map(in,p_c);
      p_c++;
       i++;
       //check_result();
       int x=check_result();
       if(x==0)
       {
           goto v;
       }
      system("cls");

      }
      else
      {
          cout<<"Invalid move ";
          goto inn;
      }


    }
    cout<<"**********"<<endl;
    cout<<"* D       *"<<endl;
    cout<<"*  R      *"<<endl;
    cout<<"*   A     *"<<endl;
    cout<<"*    w    *"<<endl;
    cout<<"**********"<<endl;




    v:
    return 0;
}
void tic_map(char v,int c)
{
    //int p_c=2;
    for(int i=0;i<9;i++)
    {
        if(v==x[i])
        {
            if(c%2==0)
            {
                x[i]='X';
            }
            else if(c%2!=0)
            {
                x[i]='O';

            }

        }
    }
//    p_c++;
       cout<<"   ====Tic_Tac_toe===="<<endl;
       cout<<"Player 1 = X      player 2 = O"<<endl<<endl<<endl;

    cout<<"     "<<x[0]<<"  |"<<x[1]<<"  |"<<x[2]<<"  |"<<endl;
    cout<<"     "<<"____"<<"____"<<"____"<<endl;
    cout<<"     "<<x[3]<<"  |"<<x[4]<<"  |"<<x[5]<<"  |"<<endl;
    cout<<"     "<<"____"<<"____"<<"____"<<endl;
    cout<<"     "<<x[6]<<"  |"<<x[7]<<"  |"<<x[8]<<"  |"<<endl;
     //check_result() ;
}
int check_result()
{
    int re_c=0,p1=1;


   if(x[0]==x[1]&&x[0]==x[2])
   {
       if(x[0]=='O')
       {
         int p1= result2();

       }
       else if(x[0]=='X')
       {
          int p1= result1();
       }

   }
  else if(x[0]==x[3]&&x[0]==x[3])
   {
        if(x[0]=='O')
       {
         int p1= result2();
       }
       else if(x[0]=='X')
       {
         int p1=  result1();
       }


   }
 else  if(x[0]==x[4]&&x[0]==x[8])
   {
       if(x[0]=='O')
       {
         int p1= result2();
       }
       else if(x[0]=='X')
       {
          int p1= result1();
       }

   }
 else  if(x[1]==x[4]&&x[1]==x[7])
   {
       if(x[1]=='O')
       {
         int p1= result2();
       }
       else if(x[1]=='X')
       {
          int p1= result1();
       }
   }
  else   if(x[2]==x[4]&&x[2]==x[6])
   {
       if(x[2]=='O')
       {
        int p1=  result2();
       }
       else if(x[2]=='X')
       {
          int p1= result1();
       }
   }
 else  if(x[2]==x[5]&&x[2]==x[8])
   {
       if(x[2]=='O')
       {
         int p1= result2();
       }
       else if(x[2]=='X')
       {
        int p1=  result1();
       }
   }
 else  if(x[3]==x[4]&&x[3]==x[5])
   {
       if(x[3]=='O')
       {
        int p1=  result2();
       }
       else if(x[3]=='X')
       {
          int p1= result1();       }
   }
  else if(x[6]==x[7]&&x[6]==x[8])
   {
       if(x[6]='O')
       {
        int p1= result2();
       }
       else if(x[6]=='X')
       {
           int p1=result1();
       }
   }
   if(p1==0)
   {
       return re_c;
   }


}


int result1()
{
 int   x=0;
    cout<<"**********"<<endl;
    cout<<"* Player *"<<endl;
    cout<<"*   1    *"<<endl;
    cout<<"*  Wins  *"<<endl;
    cout<<"*        *"<<endl;
    cout<<"**********"<<endl;
   // x++;
    return x;

}
int result2()
{
    int y=0;
    cout<<"**********"<<endl;
    cout<<"* Player *"<<endl;
    cout<<"*   2    *"<<endl;
    cout<<"*  Wins  *"<<endl;
    cout<<"*        *"<<endl;
    cout<<"**********"<<endl;
    //y=0;
    return y ;


}

