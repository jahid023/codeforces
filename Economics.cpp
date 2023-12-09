#include<iostream>
using namespace std;
int main()
{
    int n;
    float ca,cl,in,gs,ar,s,nfa,ta,tl,oi,ic,ni,pd,ce,r;

    cout<<"Enter Current Assets:";
    cin>>ca;
    cout<<"\nEnter Current Liabilities:";
    cin>>cl;
    cout<<"\nEnter Inventory:";
    cin>>in;
    cout<<"\nEnter Cost of Goods Sold or Variable operating cost:";
    cin>>gs;
    cout<<"\nEnter Accounts Receivables:";
    cin>>ar;
    cout<<"\nEnter Sales:";
    cin>>s;
    cout<<"\nEnter Net Fixed assets:";
    cin>>nfa;
    cout<<"\nEnter Total Assets:";
    cin>>ta;
    cout<<"\nEnter Total liabilities:";
    cin>>tl;
    cout<<"\nEnter Operating income:";
    cin>>oi;
    cout<<"\nEnter Interest Charge:";
    cin>>ic;
    cout<<"\nEnter Net income:";
    cin>>ni;
    cout<<"\nEnter preferred dividends:";
    cin>>pd;
    cout<<"\nEnter common equity:";
    cin>>ce;
    cout<<"\n\n";

    for(int i=0;i<=10;i++)
    {

        cout<<"which ratio do you want to know?\n";
        cout<<"press 1 for Current Ratio.\n";
        cout<<"press 2 for Quick ratio.\n";
        cout<<"press 3 for Inventory Turnover ratio.\n";
        cout<<"press 4 for Days Sales Outstanding (DSO) ratio.\n";
        cout<<"press 5 for Fixed assets turn over ratio.\n";
        cout<<"press 6 for Total assets turn over ratio.\n";
        cout<<"press 7 for Debt ratio.\n";
        cout<<"press 8 for Times Interest Earned (TIE) ratio.\n";
        cout<<"press 9 for Net Profit Margin ratio.\n";
        cout<<"press 10 for Return on Total Assets (ROA) ratio.\n";
        cout<<"press 11 for Return on Equity (ROE) ratio.\n";
        cout<<"press 0 if you don't want any ratio.\n";
        cout<<"\n\n";
        cin>>n;

        if(n>=0&&n<=11)
        {
            if(n==1)
            {
                r=ca/cl;
                cout<<"\nThe current ratio  is "<<r<<" X\n\n";
            }
            else if(n==2)
            {
                r=(ca-in)/cl;
                cout<<"\nThe ratio Quick is: "<<r<<" X\n\n";
            }
            else if(n==3)
            {
                r=gs/in;
                cout<<"\nThe Inventory Turnover ratio is: "<<r<<" X\n\n";
            }
            else if(n==4)
            {
                r=ar/(s/360);
                cout<<"\nThe DSO ratio is: "<<r<<" Days\n\n";
            }
            else if(n==5)
            {
                r=s/nfa;
                cout<<"\nThe Fixed assets turn over ratio is: "<<r<<" times\n\n";
            }
            else if(n==6)
            {
                r=s/ta;
                cout<<"\nThe Total assets turn over ratio is: "<<r<<" times\n\n";
            }
            else if(n==7)
            {
                r=(tl/ta)*100;
                cout<<"\nThe Debt ratio is: "<<r<<"%\n\n";
            }
            else if(n==8)
            {
                r=oi/ic;
                cout<<"\nThe TIE ratio is:"<<r<<" X\n\n";
            }
            else if(n==9)
            {
                r=ni/s;
                cout<<"\nThe Net Profit Margin ratio is: "<<r<<"\n\n";
            }
            else if(n==10)
            {
                r=ni/ta;
                cout<<"\nThe ROA ratio is: "<<r<<"\n\n";
            }
            else if(n==11)
            {
                r=ni-pd/ce;
                cout<<"\nThe ROE ratio is: "<<r<<"\n\n";
            }
            else if(n==0)
            {
                break;
            }

            else
            {
                cout<<"invalid ratio number";

            }
        }
    }

    return 0;
}
