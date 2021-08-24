#include <iostram>
#include<vector>
using namespace std;
void printvec(vector<int>&v){
        //use always reference otherwise any changes will not b get updated
        cout<<"SIZE:"<<v.size()<<endl;//O(1)
        for(int i=0;i<v.size();i++){
                cout<<v[i]<<endl;
        }
        v.push_back(555);
}
void printvecc(vector<string>&v){
        //use always reference otherwise any changes will not b get updated
        cout<<"SIZE:"<<v.size()<<endl;//O(1)
        for(int i=0;i<v.size();i++){
                cout<<v[i]<<endl;
        }
        v.push_back("555");//should b in double quote otherwise the type of data will get disturbed
}
int main() {
    pair<int,string>p;
    p={3,"papa"};
    pair<int ,string>&p1=p;//here pointer variable is used if we will update any data then automatically it will get changed otherwise it won't
    p.first=22;
    cout<<p1.first<<" "<<p1.second<<endl;
//     int a[]={2,3,4};
//     int b[]={22,33,44};
    pair<int,string>mm[3];
//     mm[0]={2,22};
//     mm[1]={3,33};
//     mm[2]={4,44};
//or
for(int i=0;i<3;i++){
            cin>>mm[i].first>>mm[i].second;
    }
    for(int i=0;i<3;i++){
            cout<<mm[i].first<<" "<<mm[i].second<<endl;
    }
    cout<<endl;
     vector<int>v;
     int n;
     cin>>n;
     for(int i=0;i<n;i++){
             int x;cin>>x;
             printvec(v);
             v.push_back(x);

     }
     printvec(v);
     vector<int>wp(10);
     wp.push_back(111);//O(1)
     printvec(wp);
     vector<int>wl(10,99);
//      printvec(wl);
//      wl.pop_back();
//      printvec(wl);
     //copy of a vector
     vector<int>&v2=wl;//O(N)//if &v2=wl then also the original vector will go not the copied value
     v2.push_back(77);
     printvec(wl);
     printvec(wl);//here in vector function push back 555 will not b added coz copied vector is going not original(not refrence)
     printvec(v2);
     cout<<endl;
     vector<string>vv;
     int nn;cin>>nn;
     for(int i=0;i<nn;i++ ){
             string s;
             cin>>s;
             vv.push_back(s);
     }
     printvecc(vv);
     cout<<endl;
     printvecc(vv);
}

