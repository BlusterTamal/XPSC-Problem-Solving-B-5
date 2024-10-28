#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, s_score = 0, d_score = 0;
    deque<int> cards;
    cin >> n;

    for (int i = 0; i < n; i++) 
    {
        int card;
        cin >> card;
        cards.push_back(card);
    }

    bool s_turn = true; // if sereja turn is true, then go to dima's turn

    while (!cards.empty()) 
    {
        int card;
        if (cards.front() > cards.back()) 
        {
            card = cards.front();
            cards.pop_front();
        } 
        else 
        {
            card = cards.back();
            cards.pop_back();
        }

        if (s_turn) 
        {
            s_score = s_score + card;
        } 
        else 
        {
            d_score = d_score + card;
        }

        s_turn = !s_turn; //It is used to switch the turn to the other .
    }

    cout << s_score << " " << d_score; 

    return 0;
}
