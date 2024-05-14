int main(){
    int choice;
    cout<<"************************** ATM simultaneous *****************************"<<endl;
    cout<<"------------------------------------------------------------------------"<<endl;
   while(1)
   {
    cout<<"1.registration"<<endl;
    cout<<"2.insert atm"<<endl;
    cout<<"3.check balance"<<endl;
    cout<<"4.withdraw"<<endl;
    cout<<"5.transaction"<<endl;
    cout<<"6.pin_change"<<endl;
    cout<<"7.display"<<endl;
    cout<<"8.exit"<<endl;
    cout<<""<<endl;
    cout<<"enter your choice among them :"<<endl;
    cin>>choice;
    cout<<""<<endl;
    switch(choice)
    {
    case 1:registration();break;
    case 2:insertatm();break;
    case 3:
    {
        cout<<"_"<<endl;
        cout<<"account holder  name :"<<holdername<<endl;
        cout<<"account number:"<<accountno<<endl;  
        cout<<"_"<<endl;
        cout<<"your current balance :" <<balance<<endl;
        cout<<"_"<<endl;
        break;
    }
    
    case 4: 
    {
        cout<<"_"<<endl;


        cout<<"enter account number:"<<accountno1<<endl;
        cin>>accountno1;
        cout<<"_"<<endl;
        if(accountno == accountno1){
            cout<<"account holdername "<<endl;
            cin>>holdername;
            cout<<"enter the amount that you want to withdraw"<<endl;
            cin>>withdraw;
            balance = balance - withdraw;
            cout<<"_"<<endl;
            cout<<"******** transaction completed ********** " <<endl;
            cout<<"----------- now,your cuurent balance is :" <<balance<<endl;
        }
        else{
            cout<<"==================== transaction failed,================== please enter valid detail,it is invalid==============="<<endl;
        }
        break;
    }
    case 5:
    {
        cout<<"_"<<endl;
        cout<<"enter account no :"<<endl;
        cin>>accountno1;
        if(accountno == accountno1){
            cout<<"your last transaction is withdraw - Rs" <<withdraw<<endl;
            
            cout<<"now,your current balance is :"<<balance<<endl;
            
        }
        else{
             cout<<"==================== transaction failed,================== please enter valid detail,it is invalid==============="<<endl;
        }
        break;
    }
    case 6:
    {
        pin_change();

        break;
    }
    case 7:
    {
        display();
    }
    case 8:
    {
        cout<<"_"<<endl;
        cout<<"*Thanking for your visiting"<<endl;
        break;
        //return 0;
    }
    default :
    {
            cout<<"Invalid choice please try again.."<<endl;
            break;
        }  
    }
    if(choice==7)break;
}

return 0;
}
