#include <bits/stdc++.h>
using namespace std;

string str, usrI;
int N;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin >> str;
    int ln = str.length();
    int asterik;
    for(int i=0;i<ln;i++){
        if(str[i] == '*') asterik = i;
    }

    cin >> N;
    for(int i=0;i<N;i++) {
        cin >> usrI;
        int lnU = usrI.length();
        bool cek = true;

        if(str[0] == '*'){
            if(ln > 1) {
                for(int j=ln;j>1;j--) {
                    if(str[j-1]!=usrI[lnU-1]) cek = false;
                    lnU--;
                }
            }
        } 
        else if(str[ln-1] == '*') {
            for(int j=0;j<ln-1;j++){
                if(str[j] != usrI[j]) cek=false;
            }
        } else {
            for(int j=0;j<asterik;j++){
                if(str[j] != usrI[j]) cek=false;
            }
            for(int j=ln;j>asterik+1;j--){
                if(str[j-1] != usrI[lnU-1]) cek=false;
                lnU--;
            }
        }
        if(cek) {
            cout << usrI << "\n";
        }
    }

    return 0;
}