#include "stdafx.h"
#include <iostream>
#include <string>
using std::cin; using std::cout; using std::endl; using std::string; using std::error;

struct Sales_data{
    string bookno;
    unsigned units_sold = 0;
    double revenue = 0;
}

main(){

    Sales_data total;
    if(cin>>total.bookno>>total.units_sold>>total.revenue){
        Sales_data trans;
        while(cin>>trans.bookno>>trans.units_sold>>trans.revenue){
            if(total.bookno==trans.bookno){
                total.units_sold += trans.units_sold;
                total.revenue += trans.revenue;
            }else{
                cout<<total.bookno<<" "<<total.units_sold<<" "<<total.revenue<<endl;
                total = trans;
            }
        }
        cout<<total.bookno<<" "<<total.units_sold<<" "<<total.revenue<<endl;
    }else{
        error<<"No data?"<<endl;
        return -1;
    }

    return 0;
}