#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
char p_1='X',p_2='#';
char tic[9]={'1','2','3','4','5','6','7','8','9'};
int in,inp;
void tic_map();
void timer(int sec);
void input();
void com_input ();
int check_result();
void result1();
void result2();

int main()
{
    int mes=1,draw=0;
    while(1)
    {
         tic_map() ;
         if(mes%2!=0)
         {
             cout<<"Player 1 input index 1-9"<<endl;
             input();
         }
         else
         {
             cout<<"player 2 input index 1-9"<<endl;
            com_input();
         }
         mes++;
        int last= check_result();
        if(last==1)
        {
            tic_map();
            result1();
            break;
        }
        else if(last==2)
        {
            tic_map();
            result2();
            break;
        }

   else
   {
      draw++;
 if(draw==9)
 {
     tic_map();
     cout<<"Draw";
     break;

 }

   }

    }



    return 0;
}
void tic_map()
{
   system("cls");
      cout<<"   ====Tic_Tac_toe===="<<endl;
       cout<<"Player 1 = X      player 2 = #"<<endl<<endl<<endl;

    cout<<"     "<<tic[0]<<"  |"<<tic[1]<<"  |"<<tic[2]<<"  |"<<endl;
    cout<<"     "<<"____"<<"____"<<"____"<<endl;
    cout<<"     "<<tic[3]<<"  |"<<tic[4]<<"  |"<<tic[5]<<"  |"<<endl;
    cout<<"     "<<"____"<<"____"<<"____"<<endl;
    cout<<"     "<<tic[6]<<"  |"<<tic[7]<<"  |"<<tic[8]<<"  |"<<endl;
}
void timer(int sec)
{
   Sleep(sec*1000);
}
void input ()
{
   again: cin>>in;
       if(in==1&&tic[0]=='1')
       {

           tic[0]=p_1;
       }
       else if(in==2&&tic[1]=='2')
       {
           tic[1]=p_1;
       }
 else if(in==3&&tic[2]=='3')
       {
           tic[2]=p_1;
       }
 else if(in==4&&tic[3]=='4')
       {
           tic[3]=p_1;
       }
 else if(in==5&&tic[4]=='5')
       {
           tic[4]=p_1;
       }
 else if(in==6&&tic[5]=='6')
       {
           tic[5]=p_1;
       }
 else if(in==7&&tic[6]=='7')
       {
           tic[6]=p_1;
       }
 else if(in==8&&tic[7]=='8')
       {
           tic[7]=p_1;
       }
 else if(in==9&&tic[8]=='9')
       {
           tic[8]=p_1;
       }
       else
       {
           cout<<"Invalid input"<<endl;
           goto again;
       }
    }




void com_input ()
{
   again: cin>>in;
       if(in==1&&tic[0]=='1')
       {

           tic[0]=p_2;
       }
       else if(in==2&&tic[1]=='2')
       {
           tic[1]=p_2;
       }
 else if(in==3&&tic[2]=='3')
       {
           tic[2]=p_2;
       }
 else if(in==4&&tic[3]=='4')
       {
           tic[3]=p_2;
       }
 else if(in==5&&tic[4]=='5')
       {
           tic[4]=p_2;
       }
 else if(in==6&&tic[5]=='6')
       {
           tic[5]=p_2;
       }
 else if(in==7&&tic[6]=='7')
       {
           tic[6]=p_2;
       }
 else if(in==8&&tic[7]=='8')
       {
           tic[7]=p_2;
       }
 else if(in==9&&tic[8]=='9')
       {
           tic[8]=p_2;
       }
       else
       {
           cout<<"Invalid input"<<endl;
           goto again;
       }
}



int check_result()
{
    int x=1,y=2;
    if(tic[0]==tic[1]&&tic[0]==tic[2])
   {
       if(tic[0]==p_1)
       {
          return x;

       }
       else if(tic[0]==p_2)
       {
           return y;
       }

   }
  else if(tic[0]==tic[3]&&tic[0]==tic[6])
   {
        if(tic[0]==p_1)
       {
             return x;
       }
       else if(tic[0]==p_2)
       {
           return y;
       }


   }
 else  if(tic[0]==tic[4]&&tic[0]==tic[8])
   {
       if(tic[0]==p_1)
       {
          return x;
       }
       else if(tic[0]==p_2)
       {
          return y;
       }

   }
 else  if(tic[1]==tic[4]&&tic[1]==tic[7])
   {
       if(tic[1]==p_1)
       {
          return x;
       }
       else if(tic[1]==p_2)
       {
           return y;
       }
   }
  else   if(tic[2]==tic[4]&&tic[2]==tic[6])
   {
       if(tic[2]==p_1)
       {
        return x;
       }
       else if(tic[2]==p_2)
       {
         return y;
       }
   }
 else  if(tic[2]==tic[5]&&tic[2]==tic[8])
   {
       if(tic[2]==p_1)
       {
          return x;
       }
       else if(tic[2]==p_2)
       {
         return y;
       }
   }
 else  if(tic[3]==tic[4]&&tic[3]==tic[5])
   {
       if(tic[3]==p_1)
       {
        return x;
       }
       else if(tic[3]==p_2)
       {
          return y;       }
   }
  else if(tic[6]==tic[7]&&tic[6]==tic[8])
   {
       if(tic[6]==p_1)
       {
         return x;
       }
       else if(tic[6]==p_2)
       {
           return y;
       }
   }



}
void result1()
{
    cout<<"     "<<"**********"<<endl;
    cout<<"     "<<"* Player *"<<endl;
    cout<<"     "<<"*   1    *"<<endl;
    cout<<"     "<<"*  Wins  *"<<endl;
    cout<<"     "<<"*        *"<<endl;
    cout<<"     "<<"**********"<<endl;
}

void result2()
{
    cout<<"     "<<"**********"<<endl;
    cout<<"     "<<"* Player *"<<endl;
    cout<<"     "<<"*   2    *"<<endl;
    cout<<"     "<<"*  Wins  *"<<endl;
    cout<<"     "<<"*        *"<<endl;
    cout<<"     "<<"**********"<<endl;
}




