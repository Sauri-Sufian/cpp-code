#include<bits/stdc++.h>
using namespace std;
int main()
{
   string in;
   string t1="Open";
   string t2="Closed";
   int x;
    getline(cin,in);
   if(in.substr(0,4)==t1)//checking substring
   {
       stringstream d;
        d<<in.substr(13,4);
        d>>x;//casting values from a datatype
        if(x>28)
        {
            cout<<"Hurrah! You can attend the exams!"<<endl;
        }
        else
        {
            cout<<"Sorry! Tashfiah"<<endl;
        }
   }
    if(in.substr(0,6)==t2)
   {
        stringstream d;
        d<<in.substr(16,4);
        d>>x;
        if(x>56)
        {
            cout<<"Hurrah! You can attend the exams!"<<endl;
        }
        else
        {
            cout<<"Sorry! Tashfiah"<<endl;
        }
   }
    return 0 ;
}
