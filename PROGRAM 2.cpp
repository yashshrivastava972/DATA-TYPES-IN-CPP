// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: C++ PROGRAM STRUCTURE (DATA TYPES) (EXPERIMENT: 2)


// CODE:

#include<iostream>
#include<string>
using namespace std;

int main(){
    int a;
    cout<<"enter any integer:";
    cin>>a;
    cout<<"integer="<<a<<" and size is "<<sizeof(a)<<"bytes"<<endl;

    float b;
    cout<<"enter any number with decimal:";
    cin>>b;
    cout<<"float="<<b<<" and size is "<<sizeof(b)<<"bytes"<<endl;
    
    string c;
    cout<<"enter any word:";
    cin>>c;
    cout<<"string="<<c<<" and size is "<<sizeof(c)<<"bytes"<<endl;
    
    double d;
    cout<<"enter any number with bigger decimal:";
    cin>>d;
    cout<<"double="<<d<<" and size is "<<sizeof(d)<<"bytes"<<endl;
    
    char e;
    cout<<"enter any character:";
    cin>>e;
    cout<<"character="<<e<<" and size is "<<sizeof(e)<<"bytes"<<endl;
    
    bool f;
    cout<<"enter True/False:";
    cin>>boolalpha;
    cin>>f;
    cout<<"boolean="<<f<<" and size is "<<sizeof(f)<<"bytes"<<endl;
    
    return 0;
    
}

// OUTPUT:

// enter any integer:2
// integer=2 and size is 4bytes
// enter any number with decimal:2.4
// float=2.4 and size is 4bytes
// enter any word:yash
// string=yash and size is 32bytes
// enter any number with bigger decimal:2.99999
// double=2.99999 and size is 8bytes
// enter any character:y
// character=y and size is 1bytes
// enter True/False:True
// boolean=0 and size is 1bytes

