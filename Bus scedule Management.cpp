#include <iostream>
#include <cstring>
#include <stdio.h>

using namespace std;

class Bus
{
public:
    int dep;
    int seat=35;
    float reach;
    int no;
    string type;
    //string dest;



    Bus ()
    {
        dep=00;
        reach=00;
        no=0;
        type="No Info Added Yet";
        //dest="No Info Added Yet";

    }



};

class ticket : public Bus
{
   public:
   int seat=0;
   int res=25;


   int isFull ()
   {
       if (res-seat==0)
       return 0;
       else
        return 1;
   }

void display (string type2)
    {
        if (type==type2)
            cout<<"\n\nBus No: "<<no<<"\nDeparture Time: "<<dep<<"\nReaching Time: "<<reach<<endl;
    }

    void display ()
    {

            cout<<"\n\nBus No: "<<no<<"\nDeparture Time: "<<dep<<"\nReaching Time: "<<reach<<endl;
    }


};


int main ()
{
    ticket GL[5][5];
    ticket HF [5][5];
    ticket BC [5][5];
    int ch;
    char ch2;
    int i,j;
    int seat;
    string type;
    string name;



    do
    {
        cout<<"BUS SCHEDULE APP\n";
        cout<<"-----------------\n";
        cout<<"\n1.Admin\n2.User\n\nEnter Your Choice: ";
        cin>>ch;


    if (ch==1)
    {
        cout<<"Select The Bus Company to Modify or Add Information:";
        cout<<"\n1.Green Line\n2.Hanif Paribahan\n3.BRTC\n\nEnter Your Choice: ";
        cin>>ch;

        if (ch==1)
        {
            cout<<"\n\nWelcome to Green Line\n";
            cout<<"-----------------------\n";
            cout<<"Select Your Destination:\n1.Kolkata\n2.Khulna\n3.Rajshahi\n4.Sylhet\n5.Chittagong\n\nSelect Your Choice: ";
            cin>>ch;

            if (ch==1)
            i=0;
            else if (ch==2)
            i=1;
            else if (ch==3)
            i=2;
             else if (ch==4)
            i=3;
             else if (ch==5)
            i=4;

                for (int j=0;j<5;j++)
                    {//cout<<"\n\nEnter Destination of Bus "<<j+1<<": ";
                    //cin>>GL[i][j].dest;
                    cout<<"\n\nEnter Type of Bus "<<j+1<<": ";
                    cin>>GL[i][j].type;
                    cout<<"\nEnter Departure Time of Bus "<<j+1<<": ";
                    cin>>GL[i][j].dep;
                    cout<<"\nEnter Reaching Time of Bus "<<j+1<<": ";
                    cin>>GL[i][j].reach;
                    GL[i][j].no=j+1;
                    }



        }

       else if (ch==2)
        {
            cout<<"\n\nWelcome to Hanif Paribahan\n";
            cout<<"-----------------------\n";
            cout<<"Select Your Destination:\n1.Kolkata\n2.Khulna\n3.Rajshahi\n4.Sylhet\n5.Chittagong\n\nSelect Your Choice: ";
            cin>>ch;

            if (ch==1)
            i=0;
            else if (ch==2)
            i=1;
            else if (ch==3)
            i=2;
             else if (ch==4)
            i=3;
             else if (ch==5)
            i=4;

                for (int j=0;j<5;j++)
                    {//cout<<"\n\nEnter Destination of Bus "<<j+1<<": ";
                    //cin>>HF[i][j].dest;
                    cout<<"\n\nEnter Type of Bus "<<j+1<<": ";
                    cin>>HF[i][j].type;
                    cout<<"\nEnter Departure Time of Bus "<<j+1<<": ";
                    cin>>HF[i][j].dep;
                    cout<<"\nEnter Reaching Time of Bus "<<j+1<<": ";
                    cin>>HF[i][j].reach;
                    HF[i][j].no=j+1;
                    }
        }

       else if (ch==3)
        {
            cout<<"\n\nWelcome to BRTC\n";
            cout<<"-----------------------\n";
            cout<<"Select Your Destination:\n1.Kolkata\n2.Khulna\n3.Rajshahi\n4.Sylhet\n5.Chittagong\n\nSelect Your Choice: ";
            cin>>ch;

            if (ch==1)
            i=0;
            else if (ch==2)
            i=1;
            else if (ch==3)
            i=2;
             else if (ch==4)
            i=3;
             else if (ch==5)
            i=4;

                for (int j=0;j<5;j++)
                    {//cout<<"\n\nEnter Destination of Bus "<<j+1<<": ";
                    //cin>>BC[i][j].dest;
                    cout<<"\n\nEnter Type of Bus "<<j+1<<": ";
                    cin>>BC[i][j].type;
                    cout<<"\nEnter Departure Time of Bus "<<j+1<<": ";
                    cin>>BC[i][j].dep;
                    cout<<"\nEnter Reaching Time of Bus "<<j+1<<": ";
                    cin>>BC[i][j].reach;
                    BC[i][j].no=j+1;
                    }
        }


    }
    else if (ch==2)
    {
        cout<<"\nWhich Operation Do You Want to Perform?: ";
        cout<<"\n1.Buy a Ticket\n2.Bus List Show\nEnter Your Choice: ";
        cin>>ch;

        if (ch==1)
        {

            cout<<"\nSelect Bus Name(GreenLine/Hanif/BRTC): ";
            cin>>name;
            //gets(name);
            cout<<"\nSelect Your Destination:\n1.Kolkata\n2.Khulna\n3.Rajshahi\n4.Sylhet\n5.Chittagong\n\nSelect Your Choice: ";
            cin>>ch;
            cout<<"\nSelect Bus Type(AC/Non-AC): ";
            cin>>type;

            if (name=="GreenLine")
            {
                if (ch==1)
                    i=0;
                else if (ch==2)
                    i=1;
                else if (ch==3)
                    i=2;
                else if (ch==4)
                    i=3;
                else if (ch==5)
                    i=4;

                if (GL[i][0].no==0)
                {
                    cout<<"\nSorry! No Buses Are Available.";
                }
                else
                {


                   for (j=0;j<5;j++)

                    GL[i][j].display(type);
                    cout<<"\nSelect Bus No: ";
                    cin>>ch;
                    if (ch==1)
                    j=0;
                else if (ch==2)
                    j=1;
                else if (ch==3)
                    j=2;
                else if (ch==4)
                    j=3;
                else if (ch==5)
                    j=4;

        if (GL[i][j].isFull())
    {   cout<<"\nHow Many Seats You Want to Book?: ";
        cin>>seat;


        GL[i][j].seat=GL[i][j].seat+seat;
    cout<<"\nSeat Remains: "<<GL[i][j].res-GL[i][j].seat;
    }
    else
        cout<<"\nFilled Up";
            }
            }

      else if (name=="Hanif")
            {
                if (ch==1)
                    i=0;
                else if (ch==2)
                    i=1;
                else if (ch==3)
                    i=2;
                else if (ch==4)
                    i=3;
                else if (ch==5)
                    i=4;

                    if (HF[i][0].no==0)
                {
                    cout<<"\nSorry! No Buses Are Available.";
                }
                else
                {for (j=0;j<5;j++)
                    HF[i][j].display(type);
                    cout<<"\nSelect Bus No: ";
                    cin>>ch;
                    if (ch==1)
                    j=0;
                else if (ch==2)
                    j=1;
                else if (ch==3)
                    j=2;
                else if (ch==4)
                    j=3;
                else if (ch==5)
                    j=4;

        if (HF[i][j].isFull())
    {   cout<<"\nHow Many Seats You Want to Book?: ";
        cin>>seat;


        HF[i][j].seat=HF[i][j].seat+seat;
    cout<<"\nSeat Remains: "<<HF[i][j].res-HF[i][j].seat;
    }
    else
        cout<<"\nFilled Up";

        }
            }

        else if (name=="BRTC")
            {
                if (ch==1)
                    i=0;
                else if (ch==2)
                    i=1;
                else if (ch==3)
                    i=2;
                else if (ch==4)
                    i=3;
                else if (ch==5)
                    i=4;

                if (BC[i][0].no==0)
                {
                    cout<<"\nSorry! No Buses Are Available.";
                }
                else
                {for (j=0;j<5;j++)
                    BC[i][j].display(type);
                    cout<<"\nSelect Bus No: ";
                    cin>>ch;
                    if (ch==1)
                    j=0;
                else if (ch==2)
                    j=1;
                else if (ch==3)
                    j=2;
                else if (ch==4)
                    j=3;
                else if (ch==5)
                    j=4;

        if (BC[i][j].isFull())
    {   cout<<"\nHow Many Seats You Want to Book?: ";
        cin>>seat;


        BC[i][j].seat=BC[i][j].seat+seat;
    cout<<"\nSeat Remains: "<<BC[i][j].res-BC[i][j].seat;
    }
    else
        cout<<"\nFilled Up";

        }
            }
        }


    else if (ch==2)
    {
        cout<<"Select Your Destination:\n1.Kolkata\n2.Khulna\n3.Rajshahi\n4.Sylhet\n5.Chittagong\n\nSelect Your Choice: ";
        cin>>ch;

        if (ch==1)
        {

            cout<<"\n\nGreen Line Buses:\n";
            for (i=0;i<5;i++)
                GL[0][i].display();

            cout<<"\n\nHanif Buses:\n";
            for (i=0;i<5;i++)
                HF[0][i].display();

            cout<<"\n\nBRTC Buses:\n";
            for (i=0;i<5;i++)
                BC[0][i].display();



        }

        else if (ch==2)
        {

            cout<<"\n\nGreen Line Buses:\n";
            for (i=0;i<5;i++)
                GL[1][i].display();

            cout<<"\n\nHanif Buses:\n";
            for (i=0;i<5;i++)
                HF[1][i].display();

            cout<<"\n\nBRTC Buses:\n";
            for (i=0;i<5;i++)
                BC[1][i].display();



        }

        else if (ch==3)
        {

            cout<<"\n\nGreen Line Buses:\n";
            for (i=0;i<5;i++)
                GL[2][i].display();

            cout<<"\n\nHanif Buses:\n";
            for (i=0;i<5;i++)
                HF[2][i].display();

            cout<<"\n\nBRTC Buses:\n";
            for (i=0;i<5;i++)
                BC[2][i].display();



        }

        else if (ch==4)
        {

            cout<<"\n\nGreen Line Buses:\n";
            for (i=0;i<5;i++)
                GL[3][i].display();

            cout<<"\n\nHanif Buses:\n";
            for (i=0;i<5;i++)
                HF[3][i].display();

            cout<<"\n\nBRTC Buses:\n";
            for (i=0;i<5;i++)
                BC[3][i].display();



        }

        else if (ch==5)
        {

            cout<<"\n\nGreen Line Buses:\n";
            for (i=0;i<5;i++)
                GL[4][i].display();

            cout<<"\n\nHanif Buses:\n";
            for (i=0;i<5;i++)
                HF[4][i].display();

            cout<<"\n\nBRTC Buses:\n";
            for (i=0;i<5;i++)
                BC[4][i].display();



        }



    }
        }
    cout<<"\nAgain?: ";
    cin>>ch2;
    }while (ch2!='n');

}
