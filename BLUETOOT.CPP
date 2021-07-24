#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<graphics.h>


struct node
{
 char data[45];
 node *next;
}*top=NULL;

class Stack
{

protected:
	 int t;

public:
 Stack()
{
 top=NULL;
}
int status()
{
 if(top==NULL)
 {
  t=0;

 }
 else
 while(top!=NULL)
 {
    cout<<top->data;
    top=top->next;
 }
 return t;
 }

 int peek()
};



class BluetoothAdapter
{
public:
	int i;
	static int S;
	static int State;
	int Action_request_Enable;

public:
    static int support()
    {
    static int S=1;
    if(S==1)
    {
//    cout<<S<<endl;
    ;
    }
    return S;
    }

    BluetoothAdapter()
    {
    if(support()==1)
    {
//    puts("Device supports bluetooth\n");
    }
    else
    {
    cout<<"dont supports"<<endl;
    State=0;
    }
    }

protected:
     int state()
    {
    if(support()==1)
    {
    char ch;
    cout<<"Enable bluetooth?\n";
    cin>>ch;
    if(ch=='y')
    {
    State=1;
    }
    else
    State=0;
    }
    else
    State=0;
    return State;
    }


    public:
    int isEnabled(int ARE,int k)
    {
    State=k;
    if(support()==1)
    {
     if(ARE==1 && State==1)
     {
     cout<<"Bluetooth Enabled"<<endl;
     i=1;
     }
     else if(state()==1)
     {
      cout<<"bluetooth enabled"<<endl;
     i=1;
    }

     else
    {
     cout<<"Bluetooth disabled\n";
     StartActivityForResult();
     i=-1;
    }
     }
     else
     cout<<"disabled"<<endl;
     return i;
     }

  private:
     int StartActivityForResult()
     {
      char a[7]={'A','c','c','e','p','t'};
      char str[7];
      puts("Enable Bluetooth??\n");
      puts("Accept                  Deny\n");
      gets(str);

      if(strcmp(str,a)==0)
     {
      cout<<"Enabling"<<endl;
      Action_request_Enable=1;
      State=1;
      isEnabled(Action_request_Enable,State); //function call
     }
      else
   {
      close();
   }
      return i;
      }


public:
  int showState()
  {
	return State;
  }

  protected:
	 int close()
	{
	 State=0;
	 cout<<"Turning off bluetooth"<<endl;
	 return State;
	}
};


class BluetoothDevice: public BluetoothAdapter
{
public:

   char name[20];
   int class1,c;//one(100m), two(10m) or three(1 meter) or four (-0.5 m)
   //random static address
 protected: static char BD_ADDR[48];
  // uniquely identifies device BD_ADDR
  //(Bluetooth MAC address in bluetooth specification

public:
  int check()
  {
  if(showState()==1)
  {
  c=1;
  }
  else
  c=-1;
  return c;
  }


     BluetoothDevice()
     {
//      cout<<"second";
       if(check()==1)
       {
	State=1;
	strcpy(name,"D_one");
      //	cout<<name;
    //   cout<<BD_ADDR;
       class1=2;
       }
  }
  };


class Device2
 {
//assume this device has turned on bluetooth forever
//open to network
//acts as client only
//slave device
public: int TurnOn;
    static char Dname[20];
	int class2;
	int accept;
	int pairCode;
   static  char Dtype[30];
protected:  static char BD_ADDR_2[48];
public:
int open()
{
 TurnOn=1;
// cout<<Dname;
//BD_ADDR_2[]={'1','1',':','4','4',':','6','8',':','2','B',':','4','0',':','7','7',':','D','D',':','4','D'};
return TurnOn;
}
public:
int About()
{
// cout<<Dname<<endl;
 class2=2;
// strcpy(Dtype,"Mobile");
// cout<<Dname<<endl;
 return 1;
}
protected:
int acceptRequest()
{
 accept=1;
 return accept;
}

int code()
{
pairCode=3491;
return pairCode;
}
 };


class BluetoothSocket: public Device2, protected  BluetoothDevice //,public Stack       //Main operation class
{
public: int chc;
      static int p;
private:
int ConnectAs()
{

  if(check()==1)
{

 cout<<"For connecting as server press 1 and for client press 2"<<endl;
 cin>>chc;
 if(chc==1)
   p=1;
 else if(chc==2)
 {
  p=2;
  }
 else
 close();
}
 return p;
}
public:
int ConnectingAs()
{
//int p;
  if(check()==1)
{
 if(ConnectAs()==1)
 {
  p=1;
 }
 else
 {
 cout<<"Wait for server"<<endl;
 close();
 p=0;
 }
}
return p;
}
//allows to search,exchange data
//uses stack
//matched IDs
// 1 Find device
// 2 Query paired device
// 3 Discover device
// 4 Connect Devices
// 5 Connect as client or server//not to be displayed only ask,
//separate classes for client and server

/*1  because uptill this line bluetooth is on we know, so
// we can move towards searching process assunming we have no search history*/
/*2  before that make another class for second device and keep its
bluetooth turn on */
//use of stack here

public: int i;
protected:
  int FindDevice()
{
   if(check()==1)
   {
       puts("Looking for a device to connect\n");
       puts("...............................................................................\n");
       puts("................................................................................\n");
       gotoxy(30,12);
       cout<<"....................."<<endl;

       if(open()==1)
       {
	 cout<<"Found a device "<<Dname<<endl;
	 i=1;
       }
   }
   return i;

}

struct node GetBondedDevice()
{
 if(top->data==NULL)
 cout<<"SHARE YOUR FILE WITH BLUETOOTH FIRST TIME, CHOOSE THE SLAVE DEVICE"<<endl;
 else
 peek();
return *top;
}


public:
int DiscoverDevice()
{
 int y,reply;
 if(ConnectingAs()==1)
 {
if(check()==1)
{
  //return set of connected devices
  if(FindDevice()==1)
  {
    GetBondedDevice();
    cout<<"Press 1 for connecting to "<<Dname<<endl;
    cin>>y;
    if(y==1)
    {
     cout<<"Connection Request Sent"<<endl;
 
     if(acceptRequest()==1)
     {
       cout<<"Paired successfully For viewing the MAC address of "<<Dname<<" press 1"<<endl;
       cin>>reply;
       if(reply==1)
       {
       cout<<BD_ADDR_2<<endl;
       }

     }
    }
    else
    {
    cout<<"Aborting operations"<<endl;
    close();
    }
    }
}
}
    return y;
    }


};

/*
	int A2DP; //Advanced audio distribution Profile
	int AVRCP; //Audio video remote control profile
     	int BIP,BPP,CIP,CTP,DUN,FAX,FTP,GAVDP,GOEP,HFP;
   	int HSP,HID,ICP,VDP,SYNC,SSP,SDAP,PAN,OPP;        
        int .sms[2010];  //extension
        int .jpg,.png,.jpeg,.mp3,.mp4,.avi,.wmv,.mov,.qt,.docx,.ppt,.exe,.txt;
        int .pdf,.html,
        int SAP,MAP; //SIM access profiles and message access profile
        int PBAP; 
	//phone book access profile
        int OPP; //Object push profile
        int OBEX; //Object exchange over logical link control and Adaptation protocol
        int HFP,HSP; //headset profiles
        int HDF; //Health device profile
        int SPP; //serial port profile  for pairing
        int DIP; //device Id profile

	A2DP=1; //Advanced audio distribution Profile
	AVRCP=1; //Audio video remote control profile
	SAP=0,MAP=0; //SIM access profiles and message access profile
	PBAP=0; //phone book access profile
	OPP=1; //Object push profile
	OBEX=1; //Object exchange over logical link control and Adaptation protocol
	HFP,HSP=1; //headset profiles
	HDF=1; //Health device profile
	SPP=1; //serial port profile  for pairing
	DIP=0; //device Id profile


  */

 class BluetoothServerSocket :private BluetoothDevice, private Device2
  {
 public: int chk;
	 char loc[100];
protected:
	int A2DP; //Advanced audio distribution Profile
	int AVRCP; //Audio video remote control profile
     //	int BIP,BPP,CIP,CTP,DUN,FAX,FTP,GAVDP,GOEP,HFP;
   //	int HSP,HID,ICP,VDP,SYNC,SSP,SDAP,PAN,OPP;        //profiles
     //  int .sms[2010];  //extension
   //    int .jpg,.png,.jpeg,.mp3,.mp4,.avi,.wmv,.mov,.qt,.docx,.ppt,.exe,.txt;
   //    int .pdf,.html,
       int SAP,MAP; //SIM access profiles and message access profile
       int PBAP; //phone book access profile
       int OPP; //Object push profile
       int OBEX; //Object exchange over logical link control and Adaptation protocol
       int HFP,HSP; //headset profiles
       int HDF; //Health device profile
       int SPP; //serial port profile  for pairing
       int DIP; //device Id profile
       int BIP;
       int GAVDP;
       int VDP;
       int GOEP;
       int FTP;
       int PAN;
       int CIP;
       int CTP;
       int DUN;
       int SYNC;
       int img;
       int vd;
       int ad;  //duration or (say)size
       int docs;
       int tether;
       int sms;
       int calls;


public:
   void Function()
{
	 A2DP=1; //Advanced audio distribution Profile
	 AVRCP=1; //Audio video remote control profile
	 BIP=1;
	 GAVDP=1;
	 GOEP=1;
	 VDP=1;
	 FTP=1;
	 PAN=1;
	 CIP=1;
	 DUN=1;
	 CTP=0;
	SAP=0,MAP=0; //SIM access profiles and message access profile
	PBAP=0; //phone book access profile
	OPP=1; //Object push profile
	OBEX=1; //Object exchange over logical link control and Adaptation protocol
	HFP,HSP=1; //headset profiles
	HDF=1; //Health device profile
	SPP=1; //serial port profile  for pairing
	DIP=0; //device Id profile
	SYNC=0;
}
public:
 int see()
 {

   if(check()==1)
   {
   match();
   }
   return 1;
   }

  public:
       int match()
       {


	if(strcmpi(Dtype,"Mobile")==0)
	{
	    chk=1;
	 Abstract();
	}


	 return chk;
       }

  private:
      int Abstract()
  {
      int num;


    int get;
  cout<<"Enter the number corresponding to media type"<<endl;
  cout<<"1. Images"<<endl;
  cout<<"2. Audio files"<<endl;
  cout<<"3. Video files"<<endl;
  cout<<"4. Documents(.txt, .ppt, .html etc)"<<endl;
  cout<<"5. Tethering"<<endl;
  cout<<"6. SMS "<<endl;
  cout<<"7. Phone calls"<<endl;
  cin>>get;
/*   int SAP,MAP; //SIM access profiles and message access profile
       int PBAP; //phone book access profile
       int OPP; //Object push profile
       int OBEX; //Object exchange over logical link control and Adaptation protocol
       int HFP,HSP; //headset profiles
       int HDF; //Health device profile
       int SPP; //serial port profile  for pairing
       int DIP; //device Id profile
 */

  switch(get)
 {
   case 1:
	   sendMedia(img);
	   break;
   case 2:
	   sendMedia1(ad);
	   break;
   case 3: sendMedia2(vd);
	   break;
   case 4: sendMedia3(docs);
	   break;
   case 5: sendMedia4(tether);
	   break;
   case 6: sendMedia5(sms);
	   break;
   case 7: sendMedia6(calls);
	   break;
  default: cout<<"Turning off"<<endl;
	   close();

 }
 return 1;
 }

private:
  int sendMedia( int k)
  {
     cout<<"Write the location from where to select the files\n"<<endl;
	   gets(loc);
     if(OPP==1 && OBEX==1 && BIP==1)
     {
      cout<<"Sending......"<<endl;
       if(acceptRequest()==1)
      {
       cout<<"succesfully transferred 1 0f 1"<<endl;
      }
     }

    return 1;
  }
private:
  int sendMedia1(int k)
  {          
  int dgt;
  abc:  cout<<"Write the location from where to select the files\n"<<endl;
	   gets(loc);
     if(A2DP==1 && AVRCP==1)
     {
      cout<<"Sending......"<<endl;
       if(acceptRequest()==1)
      {
       cout<<"succesfully transferred 1 0f 1"<<endl;
       close();
      }

     }

    return 1;
}

private:
  int sendMedia2( int  k)
  {
     cout<<"Write the location from where to select the files\n"<<endl;
	   gets(loc);
     if(GAVDP==1 && AVRCP==1 && OPP==1 && VDP==1)
     {
      cout<<"Sending......"<<endl;
       if(acceptRequest()==1)
      {
       cout<<"succesfully transferred 1 0f 1"<<endl;
       close();
      }
     }

    return 1;
}
private:
  int sendMedia3( int  k)
  {
     cout<<"Write the location from where to select the files\n"<<endl;
	   gets(loc);
     if(FTP==1 && GOEP==1 && OPP==1)
     {
      cout<<"Sending......"<<endl;
       if(acceptRequest()==1)
      {
       cout<<"succesfully transferred 1 0f 1"<<endl;
       close();
      }
     }

    return 1;
}
private:
  int sendMedia4( int  k)  //tether
  {

     if(DUN==1 && CIP==1 && PAN==1)
     {
      cout<<"Turning On mobile data"<<endl;
       if(acceptRequest()==1)
      {
       cout<<"Bluetooth Tethering turned on "<<endl;
       close();
      }
     }

    return 1;
}

private:
  int sendMedia5( int  k)     //sms
  {
  //sap map pbap dip
     cout<<"Write the location from where to select the files\n"<<endl;
	   gets(loc);
     if(SYNC==1 && SAP ==1 && MAP==1 && DIP==1)
     {
      cout<<"Wait for a moment , tranferring the files"<<endl;
       if(acceptRequest()==1)
      {
       cout<<"succesfully transferred 1 0f 1"<<endl;
       close();
      }
     }
  else
   cout<<"This file type can not be shared"<<endl;
   close();

    return 1;
}

private:
  int sendMedia6( int  k)     //calls
  {
  //sap map pbap dip
     cout<<"Write the location from where to select the files\n"<<endl;
	   gets(loc);
     if(SYNC==1 && SAP==1 && PBAP==1 && DIP==1 && CTP==1 && CIP==1)
     {
      cout<<"Wait for a moment , tranferring the files"<<endl;
       if(acceptRequest()==1)
      {
       cout<<"succesfully transferrred"<<endl;
       close();
      }
     }
      else
      cout<<"This file type can not be shared"<<endl;
      close();

    return 1;
}


  };

  int BluetoothAdapter::S;
  int BluetoothAdapter::State;
  //MAC address
  char BluetoothDevice::BD_ADDR[48] = {'0','0',':','1','1',':','2','2',':','3','3',':','F','F',':','E','E',':','J','J',':','5','5'};
  int BluetoothSocket::p;
  char Device2:: BD_ADDR_2[]={'1','1',':','4','4',':','6','8',':','2','B',':','4','0',':','7','7',':','D','D',':','4','D'};
  char Device2::Dname[]={'D','2'};
  char Device2::Dtype[]={'M','o','b','i','l','e'};
  int main()
  {
    clrscr();
    int ARE,k;
    Stack stk;
    stk.status();
    BluetoothAdapter A;       //first class
    A.isEnabled(ARE,k);
    A.showState();
    BluetoothDevice B;                     //second
    B.check();
    Device2 two;                        //(client) third
    two.open();
    two.About();
    BluetoothSocket S; //fourth

    S.DiscoverDevice();


 BluetoothServerSocket T;
  T.see();
  T.Function();
  getch()
  return 0;
    
