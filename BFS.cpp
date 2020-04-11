#include <bits/stdc++.h>
using namespace std;
int main()
{
    char in[5][6];
    int out[5][6],co=1,c3=0;
    in[1][1]='#';in[2][1]='#';in[2][3]='#';in[3][2]='#';in[3][4]='#';
    in[1][2]='T';in[4][0]='S';
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<6;j++)
        {
            out[i][j]=0;
            if(in[i][j]!='#'&&in[i][j]!='T'&&in[i][j]!='S')
            {
                in[i][j]='0';

            }
            //cout<<in[i][j]<<" ";
        }
        //cout<<endl;
    }

    int c1=0,c2=0;
    int in2[30];
    int in3[30];
    char c='a';
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<6;j++)
        {
           if(in[i][j]=='S')
           {
               in2[c1]=i;in3[c1]=j;
               c1++;
                if(in[i+1][j]!='#'&&i+1<5)
               {
                 in[i+1][j]=c;c++;
                 in2[c1]=i+1;in3[c1]=j;
               out[in2[c1]][in3[c1]]=co;
               c1++;

               }
               if(in[i-1][j]!='#'&&i-1>=0)
               {
                 in[i-1][j]=c;c++;
                 in2[c1]=i-1;in3[c1]=j;
                 out[in2[c1]][in3[c1]]=co;
               c1++;

               }


               if(in[i][j+1]!='#'&&j+1<6)
               {
                 in[i][j+1]=c;
                 c++;
                 in2[c1]=i;in3[c1]=j+1;
                 out[in2[c1]][in3[c1]]=co;
               c1++;

               }
               if(in[i][j-1]!='#'&&j-1>=0)
               {
                 in[i][j-1]=c;c++;
                 in2[c1]=i;in3[c1]=j-1;
                 out[in2[c1]][in3[c1]]=co;
               c1++;

               }
               goto b;


           }

        }

    }
   b:
co++;
c2=c1-1;
c3=c1;
int cc=0;
//cout<<co<<endl;
         for(int i=1;i<c1;i++)
            {

                if(cc==c2)
                {
                    co++;
                    c2=c1-c3;

                    //cout<<c1<<"--"<<c2<<"--"<<c3<<endl;
                    c3=c1;
                    cc=0;
                }
                 //cout<<i<<" "<<c1<<" = "<<c2<<endl;


            if(in2[i]-1>=0&&in[in2[i]-1][in3[i]]=='0')
            {
              //cout<<"Test 1"<<endl;
              in[in2[i]-1][in3[i]]=c;
              c++;
              in2[c1]=in2[i]-1;in3[c1]=in3[i];
               c1++;
               //cc++;
            out[in2[i]-1][in3[i]]=co;
            //cout<<out[in2[i]-1][in3[i]]<<" ";


          }
          if(in2[i]+1<5&&in[in2[i]+1][in3[i]]=='0')
          {
              //cout<<"Test 2"<<endl;
              in[in2[i]+1][in3[i]]=c;c++;
              in2[c1]=in2[i]+1;in3[c1]=in3[i];
               c1++;
               //cc++;
               out[in2[i]+1][in3[i]]=co;//cout<<out[in2[i]+1][in3[i]]<<" ";


          }
          if(in3[i]-1>=0&&in[in2[i]][in3[i]-1]=='0')
          {
             // cout<<"Test 3"<<endl;
             in[in2[i]][in3[i]-1]=c;c++;
             in2[c1]=in2[i];in3[c1]=in3[i]-1;
               c1++;
               //cc++;
               out[in2[i]][in3[i]-1]=co;
              // cout<<out[in2[i]][in3[i]-1]<<" ";

          }
          if(in3[i]+1<6&&in[in2[i]][in3[i]+1]=='0')
          {
              //cout<<"Test 4"<<endl;
             in[in2[i]][in3[i]+1]=c;c++;
             in2[c1]=in2[i];in3[c1]=in3[i]+1;
               c1++;
               //cc++;
                out[in2[i]][in3[i]+1]=co;
                //cout<<out[in2[i]][in3[i]+1]<<" ";

          }

       if(in2[i]-1>=0&&in[in2[i]-1][in3[i]]=='T')
          {
              //cout<<"Test 1"<<endl;
              break;
          }
          if(in2[i]+1<5&&in[in2[i]+1][in3[i]]=='T')
          {
              //cout<<"Test 2"<<endl;

              break;
          }
          if(in3[i]-1>=0&&in[in2[i]][in3[i]-1]=='T')
          {
            //cout<<"Test 3"<<endl;
              break;
          }
          if(in3[i]+1<6&&in[in2[i]][in3[i]+1]=='T')
          {
            //cout<<"Test 4"<<endl;
              break;

          }



         cc++;




   }

cout<<co<<endl;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<6;j++)
        {
            cout<<in[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;cout<<endl;
   for(int i=0;i<5;i++)
    {
        for(int j=0;j<6;j++)
        {
            cout<<out[i][j]<<" ";
        }
        cout<<endl;
    }
  return 0;
}
