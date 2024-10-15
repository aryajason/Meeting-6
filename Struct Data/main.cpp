#include <iostream>
using namespace std;
struct StudentData {   // Struct definition contain of 4 fields
    string NIM;
    float UTS;
    float UAS;
    float avg;
} ;

StudentData NumberStudent[50]; // The program declares an array NumberStudent of size 50
int main() // Main Function
{
    int n;
    cout <<"Enter The Number of Student (max = 50) : " ;
    cin >> n;
    for (int i=0;i<n;i++) { // Input loop
        cout << "NIM : " ;
        cin >> NumberStudent[i] .NIM ;
        cout << "UTS : " ;
        cin >> NumberStudent[i] .UTS ;
        cout << "UAS : " ;
        cin >> NumberStudent[i] .UAS ;
        cout << endl ;
        NumberStudent[i].avg = (NumberStudent[i].UTS + NumberStudent[i].UAS)/2 ;
    }
    
    cout << "-----------------" << '\n' ; // The output loop
    
    for(int i=0;i<n;i++){
        cout << "\nNIM: " << NumberStudent[i].NIM << endl ;
        cout << "Average Score: " << NumberStudent[i].avg << endl;
    }
    
    return 0; // end program
}
