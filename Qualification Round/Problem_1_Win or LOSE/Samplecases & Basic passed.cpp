#include<iostream>
using namespace std;
int main()
{
    int t,n,i,j;
	double* s;
	double* e; 
    double* sume;
    double* sums;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n;
		sume = (double*)calloc(n, sizeof(double));
        sums = (double*)calloc(n, sizeof(double));
        s = (double*)calloc(n, sizeof(double));
        e = (double*)calloc(n, sizeof(double));
        for(j=0;j<n;j++){
            cin>>s[j];
            sums[i]+=s[j];
        }
        for(j=0;j<n;j++){
            cin>>e[j];
            sume[i]+=e[j];
        }
    }
    for(i=0;i<t;i++){
        if(sume[i]>sums[i])
         cout<<"WIN\n";
        else
        cout<<"LOSE\n";
    }
    return 0;
}
