//In the name of Allah, most Gracious, most Merciful

#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define Asif ios::sync_with_stdio(0);cin.tie(0);


using namespace std;

int main()
{
    cout << "Please enter Grocery_Shopping_Cost serially . Enter -1 to terminate :" << endl;
    int i, Shopping_cost = 0;
    while(1){
        cin >> i;
        if(i == -1)break;
        Shopping_cost += i;

    }
    cout << "Enter total Mess Member : ";
    int member; cin >> member;

    cout << endl << "Please Enter Mess member Name and their Invest in Meal by following " << endl;
    cout << "this format  <Name> <space> <Money>" << endl;
    map<string, int> Inv;
    map<int, int> Lnv;
    int g = 0;
    for(int i = 0; i < member; i++){
        string Name; int Invest;
        cin >> Name >> Invest;
        Inv.insert({Name, Invest});
        Lnv.insert({g++,Invest});


    }

    double per_meal_cost;
    int Meal[member][31] = {0};
    int x;
    for (auto itr = Inv.begin(); itr != Inv.end(); ++itr){
        cout << "Enter Meals of " << itr->first << " :" << endl;
        for(int j = 0; j < 31; j++){
                cin >> x;
                //if(x == -1)break;
                Meal[i][j] = x;
            }
    }

    for(int i = 0; i < member; i++){
        int sum = Meal[i][0];
        for(int j = 1; j < 31; j++){
            Meal[i][j] += sum;
            sum = Meal[i][j];
        }
    }
    int sum_Meal = 0;
    for(int i = 0; i < member; i++) sum_Meal += Meal[i][30];
    per_meal_cost = Shopping_cost / sum_Meal;

    cout << "Per Meal Costs :  " << per_meal_cost << endl << endl << endl;
    int m = 0;
    auto itr = Inv.begin();

    for (int i = 0; i < member; i++){
        int d = Lnv[m];
        int y = Meal[m++][30];
        double q = y * per_meal_cost;


        cout << itr-> first << "$ : total Meal = " << y << " & costs" << q << " with Invest of " <<  d - q << endl;
        ++itr;
    }

    return 0;


}





// Alhamdulillah  - All praise to my Lord, the First & the Last

