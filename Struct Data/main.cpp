#include <iostream>
using namespace std;
struct StudentData {
    string NIM;
    float UTS;
    float UAS;
    float avg;
} ;

StudentData NumberStudent[50];
int main() 
{
    int n;
    cout <<"Enter The Number of Student (max = 50) : " ;
    cin >> n;
    for (int i=0;i<n;i++) {
        cout << "NIM : " ;
        cin >> NumberStudent[i] .NIM ;
        cout << "UTS : " ;
        cin >> NumberStudent[i] .UTS ;
        cout << "UAS : " ;
        cin >> NumberStudent[i] .UAS ;
        cout << endl ;
        NumberStudent[i].avg = (NumberStudent[i].UTS + NumberStudent[i].UAS)/2 ;
    }
    
    for(int i=0;i<n;i++){
        cout << "\nNIM: " << NumberStudent[i].NIM << endl ;
        cout << "Average Score: " << NumberStudent[i].avg << endl;
    }
    
    return 0;
}
