int pound, shilling, pence; //  1 pound = 20 shilling = 240 pence

float penceFormula; // 1 pound = 20 shilling = 240 pence = 100 pence = 1 pound 
cout<<"Enter Pound: ";
cin>>pound;
cout<<"Enter Shilling: ";
cin>>shilling;
cout<<"Enter Pence: ";
cin>>pence;

penceFormula = (float)((shilling*12)+pence)/240; // 1 pound = 20 shilling = 240 pence = 100 pence = 1 pound 
pence=penceFormula*100;

cout<<penceFormula<<endl;

if (pence >= 100){
    pound = pound + (pence/100);
    pence = pence%100;
}  
cout<<"Decimal Pounds:\x9c"<<pound<<"."<<pence;