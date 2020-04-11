#include <bits/stdc++.h>
#include<windows.h>
using namespace std;
void welcome();
 void timer(int sec)
{
    Sleep(1000*sec);
}

bool final_pass(int n,int m)
{
    int x,sum=0;
    if(n%10!=n/1000)
        return false;
    while(n!=0)
    {
      x=n%10;
      sum+=x;
      n=n/10;
    }
    if(sum>m)
        return true;
    else
        return false;
}
bool pas_check(int n, int a)
{
    int tmp=n;

    for(int i=1;i<=sqrt(a);i++)
    {
        if(a%i==0)
        {
           if(tmp==i||a/i==tmp)
           {
           // cout<<i<<endl;
            return true;

           }
        }
    }
        return false;
}

int main()
{
    int day, year,m,c=3;
    int  pass;
    cout<<"Date : ";
    cin>>day;
    cout<<"Month : ";
    cin>>m;
    cout<<"Year : ";
    cin>>year;

    while(c>0){
    cout<<"password 1"<<endl;
    cin>>pass;
int pass2;

    bool x=pas_check(pass%10,year);
    bool y=pas_check(pass/1000,day);
    if(x==true&&y==true&&pass%10==(pass%100)/10)
        {
            cout<<"password 2"<<endl;
            cin>>pass2;
           if( final_pass(pass2,m)==true)
           {
               welcome();

               break;
           }
           else
           {
               cout<<"Try again";
           }
        }
        else
           {
               cout<<"Try again";
           }

c--;
    }

    return 0;
}

void welcome()
{

    char me[]="Welcome to justice league online     ",x1;
  while(true){
//strlen(me)
    for(int i=0;i<strlen(me);i++)
    {
            cout<<me[i];


    }
       x1=me[0];
    for(int i=0;i<strlen(me);i++)
    {

       if(i<strlen(me)-1)
       {
        me[i]=me[i+1];


       }


    }
        me[strlen(me)-2]=x1;
   // cout<<me[strlen(me)-2];

    timer(1);
    system("cls");
  }

}

