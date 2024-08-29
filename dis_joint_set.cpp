#include<bits/stdc++.h>
using namespace std;

class DisJointSet{
    public:
    vector<int> parent;
    vector<int> rank;
    vector<int> size;
    DisJointSet(int n){
        parent.resize(n);
        rank.resize(n);
        for(int i=0;i<n;i++){
            parent[i]=i;
            rank[i]=0;
            size[i]=1;
        }
    }
    int find(int u){
        if(parent[u]!=u){
            parent[u]=find(parent[u]);
        }
        return parent[u];
    }
    void UnionByrank(int u,int v){
        int ulp_u=find(u);
        int ulp_v=find(v);
        if(ulp_u==ulp_v){
            return;
        }
        if(rank[ulp_u]>rank[ulp_v]){
            parent[ulp_v]=ulp_u;
        }

        else if(rank[ulp_u]<rank[ulp_v]){
            parent[ulp_u]=ulp_v;
        }
        else{
            parent[ulp_v]=ulp_u;
            rank[ulp_u]++;
        }

    }

    void UnionBySize(int u,int v){
        int ulp_u=find(u);
        int ulp_v=find(v);
        if(ulp_u==ulp_v){
            return;
        }
        if(size[ulp_u]>size[ulp_v]){
            parent[ulp_v]=ulp_u;
            size[ulp_u]+=size[ulp_v];
        }


        else{
            parent[ulp_u]=ulp_v;
            size[ulp_v]+=size[ulp_u];
        }

    }
};

int main(){
    DisJointSet ds(5);
    ds.UnionByrank(0,2);
    ds.UnionByrank(4,2);
    ds.UnionByrank(3,1);
    if(ds.find(4)==ds.find(0)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    if(ds.find(1)==ds.find(0)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}   // Time Complexity: O(logn) for each operation.     
    // Space Complexity: O(n) for storing the parent and rank array.    

