vector<vector<int> > result;
void update(vector<int> & target, int nval, int nindex) {
    if(target.size() <= nindex) {
        for(int i=0; i<nindex-target.size()+1; i++) {
            target.push_back(0);
        }
    }
   
    target[nindex] += nval;
    while(target[nindex] >= 10000) {
        int nadd = target[nindex]/10000;
        target[nindex] -= (nadd*10000);
        nindex++;
       
        if(nindex >= target.size()) {
            target.push_back(0);
        }
        target[nindex] += nadd;
    }
}
void add(vector<int> & base, vector<int> & target) {
    // note: target must be not smaller than base
    int nadd=0;
    for(int i=0; i<base.size(); i++) {
        target[i] +=(base[i] + nadd);
        if(target[i] >= 10000) {
            nadd = target[i]/10000;
            target[i] -= (nadd*10000);
        } else {
            nadd = 0;
        }
    }
   
    if (nadd > 0) {
        for(int i=base.size(); i<target.size(); i++) {
            if(nadd == 0)
                break;
           
            target[i] += nadd;
            if(target[i] >= 10000) {
                nadd = target[i]/10000;
                target[i] -= (nadd*10000);
            } else {
                nadd = 0;
            }
        }
    }
}
void square(vector<int> & base, vector<int> & target) {
    int nsize = base.size();
    for(int i=0; i<base.size(); i++) {
        for(int j=0; j<base.size(); j++) {
            int nindex = i+j, nval=base[i]*base[j];
            update(target, nval, nindex);
        }
    }
}
void getNthNumber(int k) {
    int i=3;
    while(i <= k) {
        square(result[i-2], result[i-1]);
        add(result[i-3], result[i-1]);
       
        i++;
    }
}
int main() { 
    int a=0, b=0, k=0;
    cin>>a>>b>>k;
    for(int i=0; i<k; i++) {
        result.push_back(vector<int>());
    }
    result[0].push_back(a);
    result[1].push_back(b);
    getNthNumber(k);
    int nsize = result[k-1].size();
    cout<<result[k-1][nsize-1];
    for(int i=nsize-2; i>=0; i--) {
        int nval = result[k-1][i];
        //cout<<"|";
        if(nval >= 1000) {
            ;
        } else if (nval >= 100) {
            cout<<"0";
        } else if (nval >= 10) {
            cout<<"00";
        } else {
            cout<<"000";
        }
        cout<<nval;
    }
    return 0;
}
