#include<iostream>
#include<windows.h>
using namespace std;
char x[9]={'1','2','3','4','5','6','7','8','9'};
char p1='x',p2='#';
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
     tic_map('10',10) ;
     inn:  cin>>in;
      if(in>=49&&in<=57)
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
                x[i]=p1;
            }
            else if(c%2!=0)
            {
                x[i]=p2;

            }

        }
    }
//    p_c++;
       cout<<"   ====Tic_Tac_Toe===="<<endl;
       cout<<"Player 1 = X      player 2 = #"<<endl<<endl<<endl;

    cout<<"     "<<x[0]<<"  |"<<x[1]<<"  |"<<x[2]<<"  |"<<endl;
    cout<<"     "<<"____"<<"____"<<"____"<<endl;
    cout<<"     "<<x[3]<<"  |"<<x[4]<<"  |"<<x[5]<<"  |"<<endl;
    cout<<"     "<<"____"<<"____"<<"____"<<endl;
    cout<<"     "<<x[6]<<"  |"<<x[7]<<"  |"<<x[8]<<"  |"<<endl;
     //check_result() ;
}
int check_result()
{
    int re_c=0,p_1=1;


   if(x[0]==x[1]&&x[0]==x[2])
   {
       if(x[0]==p2)
       {
         int p_1= result2();

       }
       else if(x[0]==p1)
       {
          int p_1= result1();
       }

   }
  else if(x[0]==x[3]&&x[0]==x[3])
   {
        if(x[0]==p2)
       {
         int p_1= result2();
       }
       else if(x[0]==p1)
       {
         int p_1=  result1();
       }


   }
 else  if(x[0]==x[4]&&x[0]==x[8])
   {
       if(x[0]==p2)
       {
         int p_1= result2();
       }
       else if(x[0]==p1)
       {
          int p_1= result1();
       }

   }
 else  if(x[1]==x[4]&&x[1]==x[7])
   {
       if(x[1]==p2)
       {
         int p_1= result2();
       }
       else if(x[1]==p1)
       {
          int p_1= result1();
       }
   }
  else   if(x[2]==x[4]&&x[2]==x[6])
   {
       if(x[2]==p2)
       {
        int p_1=  result2();
       }
       else if(x[2]==p1)
       {
          int p_1= result1();
       }
   }
 else  if(x[2]==x[5]&&x[2]==x[8])
   {
       if(x[2]==p2)
       {
         int p_1= result2();
       }
       else if(x[2]==p1)
       {
        int p_1=  result1();
       }
   }
 else  if(x[3]==x[4]&&x[3]==x[5])
   {
       if(x[3]==p2)
       {
        int p_1=  result2();
       }
       else if(x[3]==p1)
       {
          int p_1= result1();       }
   }
  else if(x[6]==x[7]&&x[6]==x[8])
   {
       if(x[6]==p2)
       {
        int p_1= result2();
       }
       else if(x[6]==p1)
       {
           int p_1=result1();
       }
   }
   if(p_1==0)
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

