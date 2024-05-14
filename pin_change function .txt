void pin_change(){
    cout<<"enter the new pin that you want:"<<endl;
    cin>>new_pin;
    cout<<"confirm your pin:"<<endl;
    cin>>new_pin1;
    if (new_pin == new_pin1) {
        pin = new_pin;
        cout << "***************** Successfully created your new pin *********************" << endl;
    } else {
        cout << "***************** Pin creation failed. Pin  do not match. *********************" << endl;
    }
}
