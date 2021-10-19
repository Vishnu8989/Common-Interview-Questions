#include <iostream>
#include <string>
using namespace std;
class dfa
{
public:
    int d[30][10], final[30];
    char alphabets[10];
    int no_states = 0, no_alphabets = 0, no_finals = 0;
    void features()
    {
        cout << "\nEnter number of states (less than 20 pls): ";
        cin >> no_states;
        cout << "\nEnter number of alphabets (less than 10 pls): ";
        cin >> no_alphabets;
        for (int i = 0; i < no_alphabets; i++)
        {
            cout << "Enter your alphabet " << i << " : ";
            cin >> alphabets[i];
        }
        cout << "Enter Number of final states : ";
        cin >> no_finals;
        for (int i = 0; i < no_finals; i++)
        {
            cout << "Enter your final State no." << i << " : ";
            cin >> final[i];
        }
        cout << "Now Enter Transitions \n";
        for (int i = 0; i < no_states; i++)
        {
            for (int j = 0; j < no_alphabets; j++)
            {
                cout << "(q" << i << "," << alphabets[j] << ") : ";
                cin >> d[i][j];
            }
        }
    }
    int next(int i, int a)
    {
        // cout << "\nthis" << i << a << endl;
        // cout << d[i][a] << endl;
        return d[i][a];
    }
};
int main(int argc, char const *argv[])
{
    system("cls");
    cout << "Intital state : 0" << endl;
    dfa A;
    A.features();
    int temp = 1;
    while (temp != -1)
    {
        cout << "Enter String to check : ";
        string s;
        cin >> s;
        int state = 0;
        cout << "Intital state : 0" << endl;
        for (int i = 0; i < s.length(); i++)
        {
            int alpha;
            cout << s[i] << endl;
            for (int j = 0; j < A.no_alphabets; j++)
            {
                alpha = -1;
                if (s[i] == A.alphabets[j])
                {
                    alpha = j;
                    break;
                }
            }
            if (alpha == -1)
            {
                cout << "\nWrong Alphabet caught" << endl;
                goto l;
            }

            // cout << "\nAlphabet : " << alpha << endl;
            // cout<<state<<endl;
            state = A.next(state, alpha);
            cout << s[i] << "," << state << endl;
        }
        for (int i = 0; i < A.no_finals; i++)
        {
            if (state == A.final[i])
            {
                cout << "String Accepted";
                goto l;
            }
        }
        cout << "String Rejected";
    l:
        cout << "\nenter -1 to exit or 1 to continue : ";
        cin >> temp;
        if (temp!=-1) 
        {
            temp = 1;
        }
    }
    return 0;
}
