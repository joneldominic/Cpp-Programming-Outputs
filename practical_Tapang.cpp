#include <iostream>
using namespace std;

int choice;

int main(){
            cout<<"Jonel Dominic E. Tapang \tPractical exam - Friday (7-10) Laboratory - 3/11/16"<<endl<<endl;
            cout<<"Options:"<<endl<<endl;
            cout<<"\t1 - M to KM"<<endl<<endl;
            cout<<"\t2 - Temperature"<<endl<<endl;
            cout<<"\t3 - Terminate program"<<endl<<endl;
            cout<<"What is your choice?: ";
            cin>>choice;


        switch(choice)
            {
            case 1:
                float mmnt;
                cout<<endl;
                cout<<"**Conversion from meters to kilometer**"<<endl<<endl;
                cout<<"Input the measurement: ";
                cin>>mmnt;
                cout<<endl;
                cout<<"Conversion: "<<mmnt<<" meters is "<<mmnt/1000<<" kilometers"<<endl;
                break;
            case 2:
                int temp;
                cout<<endl;
                cout<<"**Water temperature**"<<endl<<endl;
                cout<<"Input the temperature in degree Celcius: ";
                cin>>temp;
                cout<<endl;
                if(temp<0)
                    {
                    cout<<"Water has turned to ice";
                    }
                if(temp<=100 and temp>=0)
                    {
                    cout<<"Normal water temperature";
                    }
                if (temp>100)
                    {
                    cout<<"Water has turned to steam";
                    }

                cout<<endl;
                break;

            case 3:
                cout<<endl;
                cout<<"You selected option 3. Program terminated"<<endl;
                break;

            default:
                cout<<endl<<"Invalid input";
                cout<<endl;
                break;



            }
            cout<<endl;
            cout<<"Thank you for using the program."<<endl;

}
