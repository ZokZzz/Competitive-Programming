#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"
#define all(x) (x).begin(), x.end()
#define rall(x) (x).rbegin(), x.rend()


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    double n1, n2, n3, n4;
    cin >> n1 >> n2 >> n3 >> n4;

    double media =  ( (n1 * 2) + (n2 * 3) + (n3 * 4) + (n4) ) / 10;

    cout << "Media: " << fixed << setprecision(1) << media << "\n";


    if(media >= 7.0){

        cout << "Aluno aprovado.\n";

    } else if(media < 5.0) {

        cout << "Aluno reprovado.\n";

    } else {

      cout << "Aluno em exame.\n";

      double exam = 0;
      cin >> exam;

      cout << "Nota do exame: " << exam << "\n";

      media = (media + exam) / 2;

      if(media >= 5.0) cout << "Aluno aprovado.\n";
      else  cout << "Aluno reprovado.\n";

      cout << "Media final: " << media << "\n";


    }


    return 0;
}

