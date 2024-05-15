void display(){
    cout<<"|_"<<endl;
    int c=1;
    cout<<left;
    cout<<setw(10)<<"SERIAL.NO"<<setw(30)<<"ACCOUNT HOLDER NAME"<<setw(20)<<"ACCOUNT NUMBER"<<setw(20)<<"BALANCE"<<setw(20)<<"PHONE NUMBER"<<setw(10)<<"PIN"<<endl;
    cout<<setw(10)<<c<<setw(30)<<holdername<<setw(20)<<accountno<<setw(20)<<balance<<setw(20)<<phnumber<<setw(10)<<pin<<endl;
    c++;
    cout<<"|"<<endl;
}
