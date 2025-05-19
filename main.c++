
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b, c, top=0;
    string s, topper="";
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>s>>a>>b>>c;
        int r = a+b+c;
        cout<<s<<" "<<r<<" "<<r/3<<" ";
        if(a >=90 && b>=90 && c>=90)
        cout<<5<<" "<<r/3+5<<" ";
        else if((a+b)/2 >=85 || (b+c)/2 >=85 || (c+a)/2 >=85)
        cout<<2<<" "<<r/3+2<<" ";
        if(r/3>= 95)
        cout<<"Genuis";
        else if(r/3 >= 90)
        cout<<"Outstanding";
        else if(r/3 >= 80)
        cout<<"Excelent";
        else if(r/3 >= 70)
        cout<<"Good";
        else if(r/3 >= 60)
        cout<<"Average";
        else if(r/3 < 60)
        cout<<"Poor";
        cout<<endl;
       
       
        if(r>=top){
            if(r>top)
            topper=s;
            if(r==top){
                topper.append(" ");
            topper.append(s);
            }
            top = r;
        }
        
    }
    cout<<"Top performer: "<<topper;
        cout<<endl;
    return 0;
}
