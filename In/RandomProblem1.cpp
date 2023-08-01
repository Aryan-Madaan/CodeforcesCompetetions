//                                               Created by Aryan Madaan.
//---------------------------------------------------------------------------------------------------
#include <bits/stdc++.h>

#include <stdio.h>
using namespace std;
#define Expresso std::ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define mod 1000000007
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef long double ld;
typedef unsigned long long ull;
#define mp make_pair
#define ff first
#define ss second
#define pb(v) push_back(v)
#define INF 2e9
#define rep(i,n) for(int i =0;i<n;i++)
#define endl '\n'
const double eps = 1e-6, pi = acos(-1);
const char nl = '\n';

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int randomize()
{
return (rand() % 1000);
}


//---------------------------------------------------------------------------------------------------

struct node
{
    int no;
    node* next;
    node* prev;
};

void printlist(node*head)
{
    node* temp = head;
    node* temp1 = head;

    do
    {
        cout << temp->no << " ";
        temp = temp->next;
    }
    while(temp!=temp1);
    cout << "\n";
}


void solve()
{
    int t=1;
    //cin >> t;
    // cout << "working";
    while(t--)
    {
        int n;
        cin >> n;
        if(n==1)
        {
            cout << 1 ;
            return;
        }
        node* head = NULL;
        node* temp1 = NULL;
        rep(i,n)
        {
            if(i==0)
            {
                node* newnode = new node;
                head = newnode;
                temp1 = newnode;
                newnode->no = i+1;
                newnode->prev = NULL;
                newnode->next = NULL;
                // cout << "working";
            }
            else if(i==n-1)
            {
                node* newnode = new node;
                newnode->no = i+1;
                newnode->prev = temp1;
                newnode->next = head; 
                head->prev = newnode;
                temp1->next = newnode;
                temp1 = temp1->next;
            }
            else{
            node* newnode = new node;
            newnode->no = i+1;
            newnode->prev = temp1;
            newnode->next = NULL;
            temp1->next = newnode;
            temp1 = temp1->next;
            }
        }

        node* temp = head;
        // cout << temp -> no << "\n";
        // node* temp2 = head->prev;
        while(temp->next!=temp)
        {
            // cout << temp->no << " ";
            // temp = temp->next;
            // temp2 -> next = temp->next;
            // printlist(temp);
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            temp = temp->next;
            temp = temp->next;
            // cout << temp->no << "\n";
        }
        cout << temp->next->no;
    }
}
/*
*/





//---------------------------------------------------------------------------------------------------
int main() {
   cout.precision(numeric_limits<double>::max_digits10);
       cout << setprecision(15) << fixed;
    Expresso
    solve();
    return 0;
}


