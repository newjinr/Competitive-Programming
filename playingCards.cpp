#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write your code here
    int t;
    cin >> t;
    while (t--)
    {
        string cardOnTable;
        cin >> cardOnTable;
        cin.ignore();
        string cardsOnHand;
        getline(cin, cardsOnHand);

        regex reg(" ");
        cardsOnHand = regex_replace(cardsOnHand, reg, "");
        bool ans = false;

        for (int i = 0; i < cardsOnHand.length(); ++i)
            if ((i % 2 == 0 && cardsOnHand[i] == cardOnTable[0]) || (i % 2 == 1 && cardsOnHand[i] == cardOnTable[1]))
            {
                ans = true;
                break;
            }

        (ans) ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}