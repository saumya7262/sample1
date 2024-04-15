#include<iostream>
using namespace std;

class Food{
    int totalburgers;
    int totalpizzas;
public:
    Food(){totalburgers=6, totalpizzas=4;}
    int GetFood(){
        return totalburgers;
    }
    int getpizzas(){
        return totalpizzas;
    }
};

class Beverages:public Food{
private:
    int totalMojitos;
public:
    Beverages(){totalMojitos=5;}
    int getBeverages(){
        return totalMojitos;
    }
};

class BILL:public Beverages{
private:
    int burgersPrice, pizzasPrice, mojitosPrice;
public:
    BILL(){
        burgersPrice=60, pizzasPrice=180, mojitosPrice=90;
    }
    void show_Bill(){
        int total_Foodcost=(GetFood()*burgersPrice)+(getpizzas()*pizzasPrice);
        int total_BeveragesCost=getBeverages()*mojitosPrice;
        int total_Bill=total_Foodcost+total_BeveragesCost;

        cout<<"Total Bill="<<total_Bill<<endl;
    }
};

int main(){
    BILL obj1;
    obj1.show_Bill();
}

