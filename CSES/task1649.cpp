#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"
#define all(x) (x).begin(), x.end()
#define rall(x) (x).rbegin(), x.rend()
#define INF -1
#define vi vector<int>
#define vll vector<long long>
#define vvi vector<vector<int>>
#define sz(a) ((int)a.size())

void read(vector<int> &x){
    for(auto &e:x) cin >> e;
}


struct segtree{
    vi t;
    int N;
    segtree(vi &x){
        N = sz(x);
        t.assign(4 * N, 0);
        build(1, 0, N-1, x);
    }
    void build(int no, int l, int r, vi &x){
        if(l == r){
            t[no] = x[l];
            return;
        }
        int mid = l + (r - l) / 2;
        build(2 * no, l, mid, x); //hijo izquierdo
        build(2 * no + 1, mid+1, r, x); //hijo derecho
        t[no] = min(t[2*no], t[2*no+1]); //union de los 2 hijos, puede ser cualquier operacion
        return;
    }
    int query(int no, int l, int r, int a, int b){
        if(a == l && b == r){ //necesito justo lo que tengo ahora
            return t[no];
        }
        int mid = l + (r - l) / 2;
        if(b <= mid){
            return query(2 * no, l, mid, a, b); //solo importa hijo izquierdo
        }else if(a > mid){
            return query(2*no+1, mid+1, r, a, b); //solo derecho
        }else{
            return min(query(2*no, l, mid, a, mid), query(2*no+1, mid+1, r, mid+1, b)); //union de los 2
        }
    }

    int ask(int l, int r){
        return query(1, 0, N-1, l, r);
    }
    void update(int no, int l, int r, int tar, int val){
        if(l == r){
            t[no] = val;
            return;
        }
        int mid = l + (r - l) / 2;
        if(tar <= mid){
            update(2*no, l, mid, tar, val);
        }else{
            update(2 * no + 1, mid+1, r, tar, val);
        }
        t[no] = min(t[2*no], t[2*no+1]);
        return;
    }
    void updt(int tar, int val){
        update(1, 0, N-1, tar, val);
    }

};

void tc(){
    int n; cin >> n;
    int q; cin >> q;
    vi x(n); read(x);
    segtree tree(x);
    while(q--){
        int t; cin >> t;
        int l, r; cin >> l >> r;
        l--;
        if(t == 2){
            r--;
            cout << tree.ask(l, r) << "\n";
        }else{
            tree.updt(l, r);
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t = 1; //cin >> t;
    while(t--){
        tc();
    }
}
