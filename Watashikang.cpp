#include <iostream>
#include <stdlib.h>

using namespace std;

char choice;
char retry, again,retrySMcon,submenu;

main(void){
            system("Title Multi-purpose program @dneljo@yahoo.com");
        do{
            system("cls");
            cout<<"Choices: "<<endl;
            cout<<"\t1 - Calculator"<<endl;
            cout<<"\t2 - Converter"<<endl;
            cout<<"\tX - Close the program"<<endl<<endl;
            cout<<"Choice: ";
            cin>>choice;

                switch(choice)
                    {
                    case '1':
                        float fnum, snum, ans;
                        char opp;

                     do{
                            system ("cls");

                            cout<<"=================================== Calculator ==================================="<<endl<<endl;
                            cout<<"Input first number: ";
                            cin>>fnum;
                            cout<<"\n\tOperator [ + , - , * , / ]: ";
                            cin>>opp;
                            cout<<"\nInput second number: ";
                            cin>>snum;

                            switch(opp)
                                {
                                    case '+':
                                        ans=(fnum+snum);
                                        cout<<"\n\tThe Sum is: "<<ans;
                                    break;

                                    case '-':
                                        ans=(fnum-snum);
                                        cout<<"\n\tThe Difference is: "<<ans;
                                    break;

                                    case '*':
                                    case 'x':
                                        ans=(fnum*snum);
                                        cout<<"\n\tThe Product is: "<<ans;
                                    break;

                                    case '/':
                                        ans=(fnum/snum);
                                        cout<<"\n\tThe Quotient is: "<<ans<<endl;
                                        if (snum==0)
                                        cout<<"\n\t*Inf = Math error";
                                    break;

                                    default:
                                        cout<<endl<<endl;
;                                        cout<<"*Invalid Operation"<<endl;
                                    break;
                                }

                                cout<<endl<<endl<<"Use Calculator Again? [Y-yes || N-no] ";
                                    cin>>again;

                            }while (again == 'Y' || again == 'y');
                                cout<<endl<<endl;


                    break;

                    case '2':
                    do{
                        system("cls");
                        int cho;
                        cout<<"=================================== Converter ====================================="<<endl;
                        cout<<"1 - Time"<<endl;
                        cout<<"2 - Length"<<endl;
                        cout<<"3 - Weight"<<endl;
                        cout<<"4 - Temperature"<<endl<<endl;
                        cout<<"Choice: ";
                        cin>>cho;

                            switch(cho)
                                {
                                case 1:

                                    char c;
                                    system("cls");
                                    cout<<"=============================== Time Converter =================================="<<endl;
                                    cout<<"S - Seconds : Minute"<<endl;
                                    cout<<"M - Minute : Hour"<<endl;
                                    cout<<"H - Hour : Days"<<endl;
                                    cout<<"D - Days : Week"<<endl<<endl;
                                    cout<<"Choice: ";
                                    cin>>c;

                                        switch (c);

                                            {
                                                case 's':
                                                case 'S':

                                                    do{
                                                    system ("cls");
                                                    char choi;
                                                    float val1;
                                                    cout<<"=============================== Time Converter =================================="<<endl;
                                                    cout<<"                              [Seconds : Minute]"<<endl<<endl;
                                                    cout<<" A - Seconds to Minute"<<endl;
                                                    cout<<" B - Minute to Seconds"<<endl<<endl;
                                                    cout<<endl<<"Choice: ";
                                                    cin>>choi;
                                                    cout<<endl;
                                                        if (choi=='A' || choi=='a')
                                                            {
                                                                cout<<"Enter a value: ";
                                                                cin>>val1;
                                                                cout<<endl<<val1<<" Second/s is Equal to "<<val1/60<<" Minute/s"<<endl;
                                                            }
                                                        else if (choi=='B' || choi=='b')
                                                            {
                                                                cout<<"Enter a value: ";
                                                                cin>>val1;
                                                                cout<<endl<<val1<<" Minute/s is Equal to "<<val1*60<<" Second/s"<<endl;

                                                            }

                                                        else {cout<<endl<<endl<<"*Invalid input"<<endl;}

                                                        cout<<endl<<"Use [Second:Minute] Converter Again? [Y-yes || N-no]: ";
                                                        cin>>retrySMcon;

                                                    }while (retrySMcon=='Y' || retrySMcon=='y');

                                                            }
                                        break;

                                        default:
                                            cout<<endl<<"*Invalid input"<<endl;
                                        break;

                                }

                        cout<<endl<<"S - Go to Converter Menu [click any key except S to continue]: ";
                        cin>>submenu;

                    }while (submenu=='S' || submenu=='s');





                    break;

                    case 'X':
                        cout<<"============================= Program Terminated ============================="<<endl;
                        cout<<"                       Thank you for using the program"<<endl<<endl;
                        system("pause");
                        return 0;
                    break;

                    default:
                        cout<<"============================= <Invalid choice> ==============================="<<endl;
                    break;
                    }

                    cout<<endl<<endl;
                    cout<<"M - Go back to Main Menu"<<endl<<endl;
                    cout<<"X - Close the Program"<<endl<<endl;
                    cout<<"Choice: ";
                    cin>>retry;
            }while (retry == 'M' || retry=='m');

                    system("pause");
}
