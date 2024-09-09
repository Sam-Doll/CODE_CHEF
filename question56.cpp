// DETERMINE THE WINNER 626

int t;
cin>>t;
while(t--){
    int p1,p2,q1,q2;
    cin>>p1>>p2>>q1>>q2;
    if(p1+p2>q1+q2){
        cout<<"p"<<endl;
    }else if (p1+p2<q1+q2){
        cout<<"q"<<endl;
    }else{
        cout<<"tie"<<endl;
    }
}
return 0;