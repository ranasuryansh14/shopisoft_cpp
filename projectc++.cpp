#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    char start;
    float shop(void);
    char choice;

    startL:
        cout<<"Please press H to start shopping for home appliances"<<endl;
        start:
            cin>>start;
            if (start=='h'|| start=='H')
            {
                float total = shop();
                time_t t=time(NULL);
                tm* tPtr=localtime(&t);

                cout<<"Bill Date : ";
                cout<<tPtr->tm_mday<<"/";
                cout<<1+ tPtr-> tm_mon<<"/";
                cout<<1900 + tPtr->tm_year<<endl;
                cout<<"Bill Time : "<<(tPtr->tm_hour)<<":"<<(tPtr->tm_min)<<":"<<(tPtr->tm_sec)<<endl;
                cout<<"Total Bill Amount : "<<total<<endl;
                if(total>50000 && 100000)
                {
                    total=total-(0.05*total);
                    cout<<"total Discount : 5% "<<endl;
                }
                else if(total>100000 && 125000)
                {
                    total=total-(0.1*total);
                    cout<<"total Discount : 25% "<<endl;
                }
                 else if(total>150000)
                {
                    total=total-(0.5*total);
                    cout<<"total Discount : 50% "<<endl;
                }

                cout<<"Total Bill Amount is : "<<total<<endl;
                Again:
                    cout<<"Want to shop again Y/y or N/n "<<endl;
                    cin>>choice;
                    if(choice=='y'|| choice=='Y')
                    {
                        goto startL;
                    }
                    else if(choice=='n'|| choice=='N')
                    {
                        cout<<"THANKS FOR SHOPPING"<<endl;
                    }
                    else{
                        cout<<"You have entered invalid option, Please enter H"<<endl;
                        goto Again;
                    }


            } 
            else{
                cout<<"You have entered invalid option, Please enter H"<<endl;
                goto start;
            }
} // namespace std
        float shop()
        {
         shop:
            char choice;
            char product;
            int quantity;
            float bill=0;
            itemLevel:
                cout<<"********WELOCOME*********"<<endl;
                cout<<"__Please follow the instructions___"<<endl;
                cout<<"|1)Please enter r,R to order Refrigrator"<<endl;
                cout<<"|2)Please enter w,W to order Washing Machine"<<endl;
                cout<<"|3)Please enter t,T to order Television"<<endl;
                cout<<"|4)Please enter m,M to order Microwave"<<endl;
                cout<<"|5)Please enter a,A to order Air Conditioner"<<endl;
                cin>>choice;

                if(choice=='r'|| choice=='R'||choice=='w'||choice=='W'||choice=='t'||choice=='T'||choice=='m'||choice=='M'||choice=='a'||choice=='A')
                {
                    if(choice=='r'||choice=='R')
                    {
                        cout<<"______Refrigrator__brands______&_______Price"<<endl;
                        cout<<"|1) Whirlpool => Price:37000|"<<endl;
                        cout<<"|2) Samsung => Price:24000|"<<endl;
                        cout<<"|3) Voltas => Price:22000|"<<endl;
                        cout<<"|4) LG => Price:40000|"<<endl;
                        cout<<"|5 Haier => Price:20000|"<<endl;

                        cout<<"Please Enter your choice"<<endl;
                        cin>>product;
                        if(product=='1')
                        {
                            cout<<"Select the Quantity or enter"<<endl;
                            cin>>quantity;
                            bill=bill+quantity*37000;
                        }
                        else if(product=='2')
                        {
                            cout<<"Select the Quantity or enter"<<endl;
                            cin>>quantity;
                            bill=bill+quantity*24000;
                        }
                         else if(product=='3')
                        {
                            cout<<"Select the Quantity or enter"<<endl;
                            cin>>quantity;
                            bill=bill+quantity*22000;
                        }
                         else if(product=='4')
                        {
                            cout<<"Select the Quantity or enter"<<endl;
                            cin>>quantity;
                            bill=bill+quantity*40000;
                        }
                         else if(product=='5')
                        {
                            cout<<"Select the Quantity or enter"<<endl;
                            cin>>quantity;
                            bill=bill+quantity*20000;
                        }
                        else{
                            cout<<"invalid option__________****"<<endl;
                            goto shop;
                        }


                    }
                     if(choice=='w'||choice=='W')
                    {
                        cout<<"______Washing_machine__brands______&_______Price"<<endl;
                        cout<<"|1) Whirlpool => Price:37000|"<<endl;
                        cout<<"|2) Samsung => Price:24000|"<<endl;
                        cout<<"|3) Voltas => Price:22000|"<<endl;
                        cout<<"|4) LG => Price:40000|"<<endl;
                        cout<<"|5) Haier => Price:20000|"<<endl;
                        cout<<"Please Enter your choice"<<endl;
                        cin>>product;


                        if(product=='1')
                        {
                            cout<<"Select the Quantity or enter"<<endl;
                            cin>>quantity;
                            bill=bill+quantity*37000;
                        }
                        else if(product=='2')
                        {
                            cout<<"Select the Quantity or enter"<<endl;
                            cin>>quantity;
                            bill=bill+quantity*24000;
                        }
                         else if(product=='3')
                        {
                            cout<<"Select the Quantity or enter"<<endl;
                            cin>>quantity;
                            bill=bill+quantity*22000;
                        }
                         else if(product=='4')
                        {
                            cout<<"Select the Quantity or enter"<<endl;
                            cin>>quantity;
                            bill=bill+quantity*40000;
                        }
                         else if(product=='5')
                        {
                            cout<<"Select the Quantity or enter"<<endl;
                            cin>>quantity;
                            bill=bill+quantity*20000;
                        }
                        else{
                            cout<<"invalid option__________****"<<endl;
                            goto shop;
                        }
                    }
                    if(choice=='t'||choice=='T')
                    {
                        cout<<"______TV__brands______&_______Price"<<endl;
                        cout<<"|1) Mac => Price:37000|"<<endl;
                        cout<<"|2) Samsung => Price:24000|"<<endl;
                        cout<<"|3) MI => Price:22000|"<<endl;
                        cout<<"|4) LG => Price:40000|"<<endl;
                        cout<<"|5) Haier => Price:20000|"<<endl;
                        cout<<"Please Enter your choice"<<endl;
                        cin>>product;


                        if(product=='1')
                        {
                            cout<<"Select the Quantity or enter"<<endl;
                            cin>>quantity;
                            bill=bill+quantity*37000;
                        }
                        else if(product=='2')
                        {
                            cout<<"Select the Quantity or enter"<<endl;
                            cin>>quantity;
                            bill=bill+quantity*24000;
                        }
                         else if(product=='3')
                        {
                            cout<<"Select the Quantity or enter"<<endl;
                            cin>>quantity;
                            bill=bill+quantity*22000;
                        }
                         else if(product=='4')
                        {
                            cout<<"Select the Quantity or enter"<<endl;
                            cin>>quantity;
                            bill=bill+quantity*40000;
                        }
                         else if(product=='5')
                        {
                            cout<<"Select the Quantity or enter"<<endl;
                            cin>>quantity;
                            bill=bill+quantity*20000;
                        }
                        else{
                            cout<<"invalid option__________****"<<endl;
                            goto shop;
                        }
                    }

                        if(choice=='m'||choice=='M')
                    {
                        cout<<"______Microwave_brands______&_______Price"<<endl;
                        cout<<"|1) IFB => Price:37000|"<<endl;
                        cout<<"|2) Samsung => Price:24000|"<<endl;
                        cout<<"|3) Bajaj => Price:22000|"<<endl;
                        cout<<"|4) LG => Price:40000|"<<endl;
                        cout<<"|5) Haier => Price:20000|"<<endl;
                        cout<<"Please Enter your choice"<<endl;
                        cin>>product;


                        if(product=='1')
                        {
                            cout<<"Select the Quantity or enter"<<endl;
                            cin>>quantity;
                            bill=bill+quantity*37000;
                        }
                        else if(product=='2')
                        {
                            cout<<"Select the Quantity or enter"<<endl;
                            cin>>quantity;
                            bill=bill+quantity*24000;
                        }
                         else if(product=='3')
                        {
                            cout<<"Select the Quantity or enter"<<endl;
                            cin>>quantity;
                            bill=bill+quantity*22000;
                        }
                         else if(product=='4')
                        {
                            cout<<"Select the Quantity or enter"<<endl;
                            cin>>quantity;
                            bill=bill+quantity*40000;
                        }
                         else if(product=='5')
                        {
                            cout<<"Select the Quantity or enter"<<endl;
                            cin>>quantity;
                            bill=bill+quantity*20000;
                        }
                        else{
                            cout<<"invalid option__________****"<<endl;
                            goto shop;
                        } 
                    }

                        if(choice=='a'||choice=='A')
                    {
                        cout<<"______AC__brands______&_______Price"<<endl;
                        cout<<"|1) Mac => Price:37000|"<<endl;
                        cout<<"|2) Samsung => Price:24000|"<<endl;
                        cout<<"|3) MI => Price:22000|"<<endl;
                        cout<<"|4) LG => Price:40000|"<<endl;
                        cout<<"|5) Haier => Price:20000|"<<endl;
                        cout<<"Please Enter your choice"<<endl;
                        cin>>product;


                        if(product=='1')
                        {
                            cout<<"Select the Quantity or enter"<<endl;
                            cin>>quantity;
                            bill=bill+quantity*37000;
                        }
                        else if(product=='2')
                        {
                            cout<<"Select the Quantity or enter"<<endl;
                            cin>>quantity;
                            bill=bill+quantity*24000;
                        }
                         else if(product=='3')
                        {
                            cout<<"Select the Quantity or enter"<<endl;
                            cin>>quantity;
                            bill=bill+quantity*22000;
                        }
                         else if(product=='4')
                        {
                            cout<<"Select the Quantity or enter"<<endl;
                            cin>>quantity;
                            bill=bill+quantity*40000;
                        }
                         else if(product=='5')
                        {
                            cout<<"Select the Quantity or enter"<<endl;
                            cin>>quantity;
                            bill=bill+quantity*20000;
                        }
                        else{
                            cout<<"invalid option__________****"<<endl;
                            goto shop;
                        } 
                    }          
                }
                else{
                    cout<<"Invalid selection**********/"<<endl;
                    goto shop;
                }
                return bill;
        } 