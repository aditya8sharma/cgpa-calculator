#include <iostream>
using namespace std;

int main(){
    double c=0,a=0;
    int n;
    cout<<"No. of semesters, you want to count your CGPA for :"<<endl;
    cin>>n;
    double sgpa[n],cr[n];

    for(int i=0;i<n;i++){
        cout<<"Your SGPA in Semester "<<i+1<<", followed by the credits in that Semester :"<<endl;
        cin>>sgpa[i]>>cr[i];

        c=c+cr[i];
        a=a+(cr[i]*sgpa[i]);
        cout<<"Current Final CGPA = "<<a/c;
        cout<<"\n";
    }

    
    return 0;
}