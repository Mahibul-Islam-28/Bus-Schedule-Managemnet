#include <iostream>
#include <cstring>
#include <stdio.h>
#include <algorithm>

using namespace std;

class Bus
{
public:
    int dep;
    int seat;
    int reach;
    int no;
    string type;
    //string dest;



    Bus ()
    {
        dep=00;
        seat=25;
        reach=00;
        no=0;
        type="No Info Added Yet";
        //dest="No Info Added Yet";

    }



};

class ticket : public Bus
{
   public:
   int seat;
   int res;
   string tempType;

   ticket()
   {
      seat=0;
      res=25;
   }


   int isFull ()
   {
       if (res-seat==0)
       return 1;
       else
        return 0;
   }

void display (string type2)
    {
        tempType=type;
        transform(tempType.begin(), tempType.end(), tempType.begin(), ::toupper);


        if (tempType==type2)
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
                    cout<<"\n\nEnter Type of Bus "<<j+1<<" (AC/Non-AC): ";
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
                    cout<<"\n\nEnter Type of Bus "<<j+1<<" (AC/Non-AC): ";
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
                    cout<<"\n\nEnter Type of Bus "<<j+1<<" (AC/Non-AC): ";
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

            cout<<"\nSelect Bus:\n1.GreenLine\n2.Hanif\n3.BRTC\nSelect Your Choice: ";
            cin>>ch2;
            cout<<"\nSelect Your Destination:\n1.Kolkata\n2.Khulna\n3.Rajshahi\n4.Sylhet\n5.Chittagong\n\nSelect Your Choice: ";
            cin>>ch;
            cout<<"\nSelect Bus Type(AC/Non-AC): ";
            cin>>type;
            transform(type.begin(), type.end(), type.begin(), ::toupper);
            cout<<type;

            if (ch2=='1')
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

        if (!GL[i][j].isFull())
    {
        do
        {
            cout<<"\nHow Many Seats You Want to Book? (Max 25): ";
            cin>>seat;
        }while (seat<1 || seat>25);



        GL[i][j].seat=GL[i][j].seat+seat;
    cout<<"\nSeat Remains: "<<GL[i][j].res-GL[i][j].seat;
    }
    else
        cout<<"\nFilled Up";
            }
            }

      else if (ch2=='2')
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

        if (!HF[i][j].isFull())
    {   do
        {
            cout<<"\nHow Many Seats You Want to Book? (Max 25): ";
            cin>>seat;
        }while (seat<1 || seat>25);


        HF[i][j].seat=HF[i][j].seat+seat;
    cout<<"\nSeat Remains: "<<HF[i][j].res-HF[i][j].seat;
    }
    else
        cout<<"\nFilled Up";

        }
            }

        else if (ch2=='3')
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

        if (!BC[i][j].isFull())
    {   do
        {
            cout<<"\nHow Many Seats You Want to Book? (Max 25): ";
            cin>>seat;
        }while (seat<1 || seat>25);


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
            if (GL[0][0].no==0)
                cout<<"Not Available\n";
            else
            {
                for (i=0;i<5;i++)
                GL[0][i].display();
            }


            cout<<"\n\nHanif Buses:\n";
            if (HF[0][0].no==0)
                cout<<"Not Available\n";
            else
            {
                for (i=0;i<5;i++)
                HF[0][i].display();
            }


            cout<<"\n\nBRTC Buses:\n";
            if (BC[0][0].no==0)
                cout<<"Not Available\n";
            else
            {
                for (i=0;i<5;i++)
                BC[0][i].display();
            }




        }

        else if (ch==2)
        {

            cout<<"\n\nGreen Line Buses:\n";
            if (GL[1][0].no==0)
                cout<<"Not Available\n";
            else
            {
                for (i=0;i<5;i++)
                GL[1][i].display();
            }


            cout<<"\n\nHanif Buses:\n";
            if (HF[1][0].no==0)
                cout<<"Not Available\n";
            else
            {
                for (i=0;i<5;i++)
                HF[1][i].display();
            }


            cout<<"\n\nBRTC Buses:\n";
            if (BC[1][0].no==0)
                cout<<"Not Available\n";
            else
            {
                for (i=0;i<5;i++)
                BC[1][i].display();
            }



        }

        else if (ch==3)
        {

            cout<<"\n\nGreen Line Buses:\n";
            if (GL[2][0].no==0)
                cout<<"Not Available\n";
            else
            {
                for (i=0;i<5;i++)
                GL[2][i].display();
            }


            cout<<"\n\nHanif Buses:\n";
            if (HF[2][0].no==0)
                cout<<"Not Available\n";
            else
            {
                for (i=0;i<5;i++)
                HF[2][i].display();
            }


            cout<<"\n\nBRTC Buses:\n";
            if (BC[2][0].no==0)
                cout<<"Not Available\n";
            else
            {
                for (i=0;i<5;i++)
                BC[2][i].display();
            }



        }

        else if (ch==4)
        {

            cout<<"\n\nGreen Line Buses:\n";
            if (GL[3][0].no==0)
                cout<<"Not Available\n";
            else
            {
                for (i=0;i<5;i++)
                GL[3][i].display();
            }


            cout<<"\n\nHanif Buses:\n";
            if (HF[3][0].no==0)
                cout<<"Not Available\n";
            else
            {
                for (i=0;i<5;i++)
                HF[3][i].display();
            }


            cout<<"\n\nBRTC Buses:\n";
            if (BC[3][0].no==0)
                cout<<"Not Available\n";
            else
            {
                for (i=0;i<5;i++)
                BC[3][i].display();
            }



        }

        else if (ch==5)
        {

            cout<<"\n\nGreen Line Buses:\n";
            if (GL[4][0].no==0)
                cout<<"Not Available\n";
            else
            {
                for (i=0;i<5;i++)
                GL[4][i].display();
            }


            cout<<"\n\nHanif Buses:\n";
            if (HF[4][0].no==0)
                cout<<"Not Available\n";
            else
            {
                for (i=0;i<5;i++)
                HF[4][i].display();
            }


            cout<<"\n\nBRTC Buses:\n";
            if (BC[4][0].no==0)
                cout<<"Not Available\n";
            else
            {
                for (i=0;i<5;i++)
                BC[4][i].display();
            }



        }



    }
        }
    cout<<"\nDo You Want to Go to Main Menu?\n1.Yes\n2.No\nSelect Your Choice: ";
    cin>>ch2;
    }while (ch2!='2');

}
