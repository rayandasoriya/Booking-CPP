#include<iostream.h>
#include<string.h>
#include<process.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
#include<graphics.h>
#include<stdio.h>
 void frnt();
 void lab();
 void room();
 void hall();
 void labavb();
 void roomavb();
  void hallbook();
 void hallavb();
 void roomte();
 void hallte();
 void labte();
 void labbook();
 void roombook();
 void end();
	  int r11=0;
	  int r12=0;
	  int r13=0;
	  int r14=0;
	  int r21=0;
	  int r22=0;
	  int r23=0;
	  int r24=0;
	  int r31=0;
	  int r32=0;
	  int r33=0;
	  int r34=0;
	  int r41=0;
	  int r42=0;
	  int r43=0;
	  int r44=0;
	  int r51=0;
	  int r52=0;
	  int r53=0;
	  int r54=0;
	  int r61=0;
	  int r62=0;
	  int r63=0;
	  int r64=0;
	  int r71=0;
	  int r72=0;
	  int r73=0;
	  int r74=0;
	  int r81=0;
	  int r82=0;
	  int r83=0;
	  int r84=0;

	  int l11=0;
	  int l12=0;
	  int l13=0;
	  int l14=0;
	  int l21=0;
	  int l22=0;
	  int l23=0;
	  int l24=0;
	  int l31=0;
	  int l32=0;
	  int l33=0;
	  int l34=0;
	  int l41=0;
	  int l42=0;
	  int l43=0;
	  int l44=0;
	  int l51=0;
	  int l52=0;
	  int l53=0;
	  int l54=0;
	  int l61=0;
	  int l62=0;
	  int l63=0;
	  int l64=0;
	  int l71=0;
	  int l72=0;
	  int l73=0;
	  int l74=0;
	  int l81=0;
	  int l82=0;
	  int l83=0;
	  int l84=0;

	  int h11=0;
	  int h12=0;
	  int h13=0;
	  int h14=0;
	  int h21=0;
	  int h22=0;
	  int h23=0;
	  int h24=0;
	  int h31=0;
	  int h32=0;
	  int h33=0;
	  int h34=0;
	  int h41=0;
	  int h42=0;
	  int h43=0;
	  int h44=0;
	  int h51=0;
	  int h52=0;
	  int h53=0;
	  int h54=0;
	  int h61=0;
	  int h62=0;
	  int h63=0;
	  int h64=0;
	  int h71=0;
	  int h72=0;
	  int h73=0;
	  int h74=0;
	  int h81=0;
	  int h82=0;
	  int h83=0;
	  int h84=0;
	  int id=123;
    void main()
      {
	clrscr();
//	frnt();
	int ad;
	char ans;
	int ch,gdriver = EGA, gmode = EGAHI;
	initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
	sup:
	setbkcolor(6);
	cout<<"\t\t\t**********************************";
	cout<<"\n\t\t\t*   Welcome to Booking Services  *";
	cout<<"\n\t\t\t**********************************";
	cout<<"\n\n\n\nEnter 1 for admin and 2 for teacher/student  :";
	cin>>ad;
	if(ad==1)
	{
	 char *pass="Hello";
	 char *ppass;
//	  cout<<"Enter the password :";
	  ppass=getpass("Enter the password  :");
	  if(strcmpi(pass,ppass)!=0)
		{
		   setcolor(GREEN);
		   settextstyle(1,0,4);
		   outtextxy(140,220, "Invalid Password");
		   sleep(3);
		   exit(0);
		   }



	ro:
	cout<<"\t\t\t**********************************";
	cout<<"\n\t\t\t*   Welcome to Booking Services  *";
	cout<<"\n\t\t\t**********************************";
	cout<<"\n\nEnter Your Choice";
	cout<<"\n1). Labs\n2). Rooms\n3). Seminar Halls\n4). Booked Labs\n5). Booked Rooms\n6). Booked Halls\n\n";
	cin>>ch;
	 if(ch>6||ch<1)
	     {
		cout<<"\nYour choice is invalid....!\n";
		goto ro;
	     }
	 for(int i=0;i<=7;i++)
	     {
		delay(100);
		setbkcolor(i);
	     }
	 switch(ch)
	    {
	       case 1:
		 lab();
		 break;

	       case 2:
		room();
		break;

	      case 3:
		hall();
		break;


	      case 4:
		labbook();
		break;
	      case 5:
		roombook();
		break;
	      case 6:
		hallbook();
		break;
	    }
	}

	if(ad==2)
	{
	 char *pass="Hello";
	 char *ppass;
//	  cout<<"Enter the password :";
	  ppass=getpass("Enter the password  :");
	  if(strcmpi(pass,ppass)!=0)
		{
		   setcolor(GREEN);
		   settextstyle(1,0,4);
		   outtextxy(140,220, "Invalid Password");
		   sleep(3);
		   exit(0);
		   }
	ro1:
	cout<<"\t\t\t**********************************";
	cout<<"\n\t\t\t*   Welcome to Booking Services  *";
	cout<<"\n\t\t\t**********************************";
	cout<<"\n\nEnter Your Choice to see the availablility";
	cout<<"\n1). Labs\n2). Rooms\n3). Seminar Halls\n\n";
	cin>>ch;
	 if(ch>3||ch<1)
	     {
		cout<<"\nYour choice is invalid....!\n";
		goto ro1;
	     }
	 for(int i=0;i<=7;i++)
	     {
		delay(100);
		setbkcolor(i);
	     }
	 switch(ch)
	    {
	       case 1:
		 labte();
		 break;

	       case 2:
		roomte();
		break;

	      case 3:
	      hallte();
		break;
	    }

	}
	cout<<"\n\n\nWant to continue?(y/n)\n\n";
	cin>>ans;
	if(ans=='y'||ans=='Y')
	 goto sup;
	else
  //	end();
	getch();
      }


   void frnt()                         //front page
	 {
	   int gm,gd=DETECT,p,i,j,k,q=0;
	   initgraph(&gd,&gm,"c:\\tc\\bgi");
	     delay(2000);
		for(i=0;i<625;i+=20,q+=2)
		   {
		      for(j=0;j<=5;j++)
			  {
			       setcolor(j);
			       circle(i,420,j-1);
			       circle(i,430,j+15);
			       circle(i,450,j+1);
			       circle(i,20,j+1);
			       circle(i,40,j+15);
			       circle(i,60,j+1);
			   }
		      setcolor(i);
			  for(p=135;p<160;p+=3)
			       {
				   delay(5);
				   circle(330,235,p);
				   settextstyle(GOTHIC_FONT,HORIZ_DIR,0);
				   outtextxy(200,205,"WELCOME GUYS");
				}
		   }
	 }


      void lab()
	{
	  clrscr();
	  int gdriver = EGA,n, gmode = EGAHI;
	  initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
	  setbkcolor(1);
	  cout<<"\t\t\t\t%%Labs%%";
	  cout<<"\n\nDo you want to see labs?If yes ,then press 1.\n";
	  cin>>n;
	    if(n==1)
	      labavb();
	    else
	      {
		setcolor(3);
		rectangle(1,55,220,100);
		cout<<"You pressed an invalid key\n\nThanks for visiting....";
	      }
	      char ch1;

	      cout<<"Want to book again?";
	      cin>>ch1;
	      if(ch1=='y'||ch1=='Y')
	      {
	      int ch;
		setbkcolor(6);
	ro:
	cout<<"\t\t\t**********************************";
	cout<<"\n\t\t\t*   Welcome to Booking Services  *";
	cout<<"\n\t\t\t**********************************";
	cout<<"\n\nEnter Your Choice";
	cout<<"\n1). Labs\n2). Rooms\n3). Seminar Halls\n4). Booked Labs\n5). Booked Rooms\n6). Booked Halls\n\n";
	cin>>ch;
	 if(ch>6||ch<1)
	     {
		cout<<"\nYour choice is invalid....!\n";
		goto ro;
	     }
	 for(int i=0;i<=7;i++)
	     {
		delay(100);
		setbkcolor(i);
	     }
	 switch(ch)
	    {
	       case 1:
		 lab();
		 break;

	       case 2:
		room();
		break;

	      case 3:
		hall();
		break;

	      case 4:
		labbook();
		break;
	      case 5:
		roombook();
		break;
	      case 6:
		hallbook();
		break;
	    }

	      }
	  getch();
	}


      void labbook()
      {
	  clrscr();
	  char g,j[30];
	  int gdriver = EGA,n,m,gmode = EGAHI;
	  initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
	  setbkcolor(2);
	  backte:                  //Label created";
	cout<<"\nFrom 8-10";
	  {
	    if(l11==1)
	      cout<<"\nCP Lab 1";
	   if(l21==1)
	      cout<<"\nCP Lab 2";
	   if(l31==1)
	      cout<<"\nImage Processing Lab";
	   if(l41==1)
	      cout<<"\nCAD/CAM Lab";
	   if(l51==1)
	      cout<<"\nDigital Processing Lab";
	   if(l61==1)
	      cout<<"\nSoftware Lab";
	   if(l71==1)
	      cout<<"\nAccentuare lab";
	   if(l81==1)
	      cout<<"\nChemistry Lab";
	  }
cout<<"\nFrom 10-12";
	  {
	    if(l12==1)
	      cout<<"\nCP Lab 1";
	   if(l22==1)
	      cout<<"\nCP Lab 2";
	   if(l32==1)
	      cout<<"\nImage Processing Lab";
	   if(l42==1)
	      cout<<"\nCAD/CAM Lab";
	   if(l52==1)
	      cout<<"\nDigital Processing Lab";
	   if(l62==1)
	      cout<<"\nSoftware Lab";
	   if(l72==1)
	      cout<<"\nAccentuare lab";
	   if(l82==1)
	      cout<<"\nChemistry Lab";
	  }
cout<<"\nFrom 12-2";
	  {
	    if(l13==1)
	      cout<<"\nCP Lab 1";
	   if(l23==1)
	      cout<<"\nCP Lab 2";
	   if(l33==1)
	      cout<<"\nImage Processing Lab";
	   if(l43==1)
	      cout<<"\nCAD/CAM Lab";
	   if(l53==1)
	      cout<<"\nDigital Processing Lab";
	   if(l63==1)
	      cout<<"\nSoftware Lab";
	   if(l73==1)
	      cout<<"\nAccentuare lab";
	   if(l83==1)
	      cout<<"\nChemistry Lab";
	  }
cout<<"\nFrom 2-4";
	  {
	    if(l14==1)
	      cout<<"\nCP Lab 1";
	   if(l24==1)
	      cout<<"\nCP Lab 2";
	   if(l34==1)
	      cout<<"\nImage Processing Lab";
	   if(l44==1)
	      cout<<"\nCAD/CAM Lab";
	   if(l54==1)
	      cout<<"\nDigital Processing Lab";
	   if(l64==1)
	      cout<<"\nSoftware Lab";
	   if(l74==1)
	      cout<<"\nAccentuare lab";
	   if(l84==1)
	      cout<<"\nChemistry Lab";
	  }

	    getch();
      }


      void labte()
      {
	  clrscr();
	  char g,j[30];
	  int gdriver = EGA,n,m,gmode = EGAHI;
	  initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
	  setbkcolor(2);
	  backte:                  //Label created
	  cout<<"\n\nChoose your Slot:";
	  cout<<"\n1).8-10\n2).10-12\n3).12-2\n4).2-4\n\n";
	  cin>>m;
	  if(m==1)
	  {
	    if(l11==0)
	      cout<<"\nCP Lab 1";
	   if(l21==0)
	      cout<<"\nCP Lab 2";
	   if(l31==0)
	      cout<<"\nImage Processing Lab";
	   if(l41==0)
	      cout<<"\nCAD/CAM Lab";
	   if(l51==0)
	      cout<<"\nDigital Processing Lab";
	   if(l61==0)
	      cout<<"\nSoftware Lab";
	   if(l71==0)
	      cout<<"\nAccentuare lab";
	   if(l81==0)
	      cout<<"\nChemistry Lab";
	  }
	  if(m==2)
	  {
	    if(l12==0)
	      cout<<"\nCP Lab 1";
	   if(l22==0)
	      cout<<"\nCP Lab 2";
	   if(l32==0)
	      cout<<"\nImage Processing Lab";
	   if(l42==0)
	      cout<<"\nCAD/CAM Lab";
	   if(l52==0)
	      cout<<"\nDigital Processing Lab";
	   if(l62==0)
	      cout<<"\nSoftware Lab";
	   if(l72==0)
	      cout<<"\nAccentuare lab";
	   if(l82==0)
	      cout<<"\nChemistry Lab";
	  }
      if(m==3)
	  {
	    if(l13==0)
	      cout<<"\nCP Lab 1";
	   if(l23==0)
	      cout<<"\nCP Lab 2";
	   if(l33==0)
	      cout<<"\nImage Processing Lab";
	   if(l43==0)
	      cout<<"\nCAD/CAM Lab";
	   if(l53==0)
	      cout<<"\nDigital Processing Lab";
	   if(l63==0)
	      cout<<"\nSoftware Lab";
	   if(l73==0)
	      cout<<"\nAccentuare lab";
	   if(l83==0)
	      cout<<"\nChemistry Lab";
	  }
	  if(m==4)
	  {
	    if(l14==0)
	      cout<<"\nCP Lab 1";
	   if(l24==0)
	      cout<<"\nCP Lab 2";
	   if(l34==0)
	      cout<<"\nImage Processing Lab";
	   if(l44==0)
	      cout<<"\nCAD/CAM Lab";
	   if(l54==0)
	      cout<<"\nDigital Processing Lab";
	   if(l64==0)
	      cout<<"\nSoftware Lab";
	   if(l74==0)
	      cout<<"\nAccentuare lab";
	   if(l84==0)
	      cout<<"\nChemistry Lab";
	  }
	  if(m>4)
	  {
	  char chte;
	    cout<<"Want to continue?";
	    cin>>chte;
	    if(chte=='y'||'Y')
		    goto backte;
	    }
	    getch();
      }

      void roomte()
      {
	  clrscr();
	  char g,j[30];
	  int gdriver = EGA,n,m,gmode = EGAHI;
	  initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
	  setbkcolor(2);
	  backte:                  //Label created
	  cout<<"\n\nChoose your Slot:";
	  cout<<"\n1).8-10\n2).10-12\n3).12-2\n4).2-4\n\n";
	  cin>>m;
	  if(m==1)
	  {
	    if(r11==0)
	      cout<<"\nCR 1";
	   if(r21==0)
	      cout<<"\nCR 2";
	   if(r31==0)
	      cout<<"\nCR 3";
	   if(r41==0)
	      cout<<"\nCR 4";
	   if(r51==0)
	      cout<<"\nCR 5";
	   if(r61==0)
	      cout<<"\nCR 6";
	   if(r71==0)
	      cout<<"\nCR 7";
	   if(r81==0)
	      cout<<"\nCR 8";
	  }
	  if(m==2)
	  {
	    if(r12==0)
	      cout<<"\nCR 1";
	   if(r22==0)
	      cout<<"\nCR 2";
	   if(r32==0)
	      cout<<"\nCR 3";
	   if(r42==0)
	      cout<<"\nCR 4";
	   if(r52==0)
	      cout<<"\nCR 5";
	   if(r62==0)
	      cout<<"\nCR 6";
	   if(r72==0)
	      cout<<"\nCR 7";
	   if(r82==0)
	      cout<<"\nCR 8";
	  }
	  if(m==3)
	  {
	    if(r13==0)
	      cout<<"\nCR 1";
	   if(r23==0)
	      cout<<"\nCR 2";
	   if(r33==0)
	      cout<<"\nCR 3";
	   if(r43==0)
	      cout<<"\nCR 4";
	   if(r53==0)
	      cout<<"\nCR 5";
	   if(r63==0)
	      cout<<"\nCR 6";
	   if(r73==0)
	      cout<<"\nCR 7";
	   if(r83==0)
	      cout<<"\nCR 8";
	  }
	  if(m==4)
	  {
	    if(r14==0)
	      cout<<"\nCR 1";
	   if(r24==0)
	      cout<<"\nCR 2";
	   if(r34==0)
	      cout<<"\nCR 3";
	   if(r44==0)
	      cout<<"\nCR 4";
	   if(r54==0)
	      cout<<"\nCR 5";
	   if(r64==0)
	      cout<<"\nCR 6";
	   if(r74==0)
	      cout<<"\nCR 7";
	   if(r84==0)
	      cout<<"\nCR 8";
	  }
	  if(m>4)
	  {
	  char chte;
	    cout<<"Want to continue?";
	    cin>>chte;
	    if(chte=='y'||'Y')
		    goto backte;
	    }
	    getch();
      }
	void roombook()
      {
	  clrscr();
	  char g,j[30];
	  int gdriver = EGA,n,m,gmode = EGAHI;
	  initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
	  setbkcolor(2);
	  backte:                  //Label created
	   cout<<"\nFrom 8-10";
	    if(r11==1)
	      cout<<"\nCR 1";
	   if(r21==1)
	      cout<<"\nCR 2";
	   if(r31==1)
	      cout<<"\nCR 3";
	   if(r41==1)
	      cout<<"\nCR 4";
	   if(r51==1)
	      cout<<"\nCR 5";
	   if(r61==1)
	      cout<<"\nCR 6";
	   if(r71==1)
	      cout<<"\nCR 7";
	   if(r81==1)
	      cout<<"\nCR 8";

		   cout<<"\nFrom 10-12";
	  {
	    if(r12==1)
	      cout<<"\nCR 1";
	   if(r22==1)
	      cout<<"\nCR 2";
	   if(r32==1)
	      cout<<"\nCR 3";
	   if(r42==1)
	      cout<<"\nCR 4";
	   if(r52==1)
	      cout<<"\nCR 5";
	   if(r62==1)
	      cout<<"\nCR 6";
	   if(r72==1)
	      cout<<"\nCR 7";
	   if(r82==1)
	      cout<<"\nCR 8";
	  }
		   cout<<"\nFrom 12-2";
	  {
	    if(r13==1)
	      cout<<"\nCR 1";
	   if(r23==1)
	      cout<<"\nCR 2";
	   if(r33==1)
	      cout<<"\nCR 3";
	   if(r43==1)
	      cout<<"\nCR 4";
	   if(r53==1)
	      cout<<"\nCR 5";
	   if(r63==1)
	      cout<<"\nCR 6";
	   if(r73==1)
	      cout<<"\nCR 7";
	   if(r83==1)
	      cout<<"\nCR 8";
	  }
	  cout<<"\nFrom 2-4";
	  {
	    if(r14==1)
	      cout<<"\nCR 1";
	   if(r24==1)
	      cout<<"\nCR 2";
	   if(r34==1)
	      cout<<"\nCR 3";
	   if(r44==1)
	      cout<<"\nCR 4";
	   if(r54==1)
	      cout<<"\nCR 5";
	   if(r64==1)
	      cout<<"\nCR 6";
	   if(r74==1)
	      cout<<"\nCR 7";
	   if(r84==1)
	      cout<<"\nCR 8";
	  }
	    getch();
      }
      void hallbook()

       {
	  clrscr();
	  char g,j[30];
	  int gdriver = EGA,n,m,gmode = EGAHI;
	  initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
	  setbkcolor(2);
	  backte:                  //Label created

	  { cout<<"\nFrom 8-10";
	    if(h11==1)
	      cout<<"\nSH 1";
	   if(h21==1)
	      cout<<"\nSH 2";
	   if(h31==1)
	      cout<<"\nSH 3";
	   if(h41==1)
	      cout<<"\nSH 4";
	   if(h51==1)
	      cout<<"\nSH 5";
	   if(h61==1)
	      cout<<"\nSH 6";
	   if(h71==1)
	      cout<<"\nSH 7";
	   if(h81==1)
	      cout<<"\nSH 8";
	  }

	  {   cout<<"\nFrom 10-12";
	    if(h12==1)
	      cout<<"\nSH 1";
	   if(h22==1)
	      cout<<"\nSH 2";
	   if(h32==1)
	      cout<<"\nSH 3";
	   if(h42==1)
	      cout<<"\nSH 4";
	   if(h52==1)
	      cout<<"\nSH 5";
	   if(h62==1)
	      cout<<"\nSH 6";
	   if(h72==1)
	      cout<<"\nSH 7";
	   if(h82==1)
	      cout<<"\nSH 8";
	  }

	  {  cout<<"\nFrom 12-2";
	    if(h13==1)
	      cout<<"\nSH 1";
	   if(h23==1)
	      cout<<"\nSH 2";
	   if(h33==1)
	      cout<<"\nSH 3";
	   if(h43==1)
	      cout<<"\nSH 4";
	   if(h53==1)
	      cout<<"\nSH 5";
	   if(h63==1)
	      cout<<"\nSH 6";
	   if(h73==1)
	      cout<<"\nSH 7";
	   if(h83==1)
	      cout<<"\nSH 8";
	  }

	  { cout<<"\nFrom 2-4";
	    if(h14==1)
	      cout<<"\nSH 1";
	     if(h24==1)
	      cout<<"\nSH 2";
	   if(h34==1)
	      cout<<"\nSH 3";
	   if(h44==1)
	      cout<<"\nSH 4";
	   if(h54==1)
	      cout<<"\nSH 5";
	   if(h64==1)
	      cout<<"\nSH 6";
	   if(h74==1)
	      cout<<"\nSH 7";
	   if(h84==1)
	      cout<<"\nSH 8";
	  }

	    getch();
      }




      void hallte()
      {
	  clrscr();
	  char g,j[30];
	  int gdriver = EGA,n,m,gmode = EGAHI;
	  initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
	  setbkcolor(2);
	  backte:                  //Label created
	  cout<<"\n\nChoose your Slot:";
	  cout<<"\n1).8-10\n2).10-12\n3).12-2\n4).2-4\n\n";
	  cin>>m;
	  if(m==1)
	  {
	    if(h11==0)
	      cout<<"\nSH 1";
	   if(h21==0)
	      cout<<"\nSH 2";
	   if(h31==0)
	      cout<<"\nSH 3";
	   if(h41==0)
	      cout<<"\nSH 4";
	   if(h51==0)
	      cout<<"\nSH 5";
	   if(h61==0)
	      cout<<"\nSH 6";
	   if(h71==0)
	      cout<<"\nSH 7";
	   if(h81==0)
	      cout<<"\nSH 8";
	  }
	  if(m==2)
	  {
	    if(h12==0)
	      cout<<"\nSH 1";
	   if(h22==0)
	      cout<<"\nSH 2";
	   if(h32==0)
	      cout<<"\nSH 3";
	   if(h42==0)
	      cout<<"\nSH 4";
	   if(h52==0)
	      cout<<"\nSH 5";
	   if(h62==0)
	      cout<<"\nSH 6";
	   if(h72==0)
	      cout<<"\nSH 7";
	   if(h82==0)
	      cout<<"\nSH 8";
	  }
	  if(m==3)
	  {
	    if(h13==0)
	      cout<<"\nSH 1";
	   if(h23==0)
	      cout<<"\nSH 2";
	   if(h33==0)
	      cout<<"\nSH 3";
	   if(h43==0)
	      cout<<"\nSH 4";
	   if(h53==0)
	      cout<<"\nSH 5";
	   if(h63==0)
	      cout<<"\nSH 6";
	   if(h73==0)
	      cout<<"\nSH 7";
	   if(h83==0)
	      cout<<"\nSH 8";
	  }
	  if(m==4)
	  {
	    if(h14==0)
	      cout<<"\nSH 1";
	   if(h24==0)
	      cout<<"\nSH 2";
	   if(h34==0)
	      cout<<"\nSH 3";
	   if(h44==0)
	      cout<<"\nSH 4";
	   if(h54==0)
	      cout<<"\nSH 5";
	   if(h64==0)
	      cout<<"\nSH 6";
	   if(h74==0)
	      cout<<"\nSH 7";
	   if(h84==0)
	      cout<<"\nSH 8";
	  }
	  if(m>4)
	  {
	  char chte;
	    cout<<"Want to continue?";
	    cin>>chte;
	    if(chte=='y'||'Y')
		    goto backte;
	    }
	    getch();
      }


      void labavb()
	{
	  clrscr();
	  char g,j[30];
      //	  int id,bid;
	  int gdriver = EGA,n,m,gmode = EGAHI;
	  initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
	  setbkcolor(2);
	  back:                  //Label created
	  cout<<"\nChoose your option..\n";
	  cout<<"1).CP Lab 1\n2).CP Lab 2\n3).Image Processing Lab\n4).CAD/CAM Lab\n5).Digital Processing Lab\n6).Software Lab\n7).Accenture lab\n8).Chemistry Lab\n\n";
	  cin>>n;
	  cout<<"Choose your Slot:";
	  cout<<"\n1).8-10\n2).10-12\n3).12-2\n4).2-4\n\n";
	  cin>>m;
//	  cout<<"Enter UID(4-digit id)  :";
  //	  cin>>id;;
	  if(n==1)
	    {
		if(m==1)
		  {  //   int id,bid;
			if(l11==0)
			   {
			       l11=1;
			       cout<<"Lab Booked!!";
			       cout<<"Enter UID(3-digit id)  :";
			       cin>>id;
			   }

			else
			  {
			      cout<<"Lab already Booked!!"<<id;
			      goto back;
			  }
//			    bid=id;
		  }
	    }

	  if(n==1)
	    {
		if(m==2)
		  {
			if(l12==0)
			   {
			       l12=1;
			       cout<<"Lab Booked!!";
			   //    bid=id;
			   }
			else
			  {
			      cout<<"Lab already Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			      goto back;
			  }

		  }
	    }
	  if(n==1)
	    {
		if(m==3)
		  {
			if(l13==0)
			   {
			       l13=1;
			       cout<<"Lab Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			     //  bid=id;
			   }
			else
			  {
			      cout<<"Lab already Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			      goto back;
			  }

		  }
	    }
	 if(n==1)
	    {
		if(m==4)
		  {
			if(l14==0)
			   {
			       l14=1;
			       cout<<"Lab Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			       //bid=id;
			   }
			else
			  {
			      cout<<"Lab already Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			      goto back;
			  }

		  }
	    }
	 if(n==2)
	    {
		if(m==1)
		  {
			if(l21==0)
			   {
			       l21=1;
			       cout<<"Lab Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			     //  bid=id;
			   }
			else
			  {
			      cout<<"Lab already Booked!!"<<id;
			      goto back;
			  }

		  }
	    }
	 if(n==2)
	    {
		if(m==2)
		  {
			if(l22==0)
			   {
			       l22=1;
			       cout<<"Lab Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			      // bid=id;
			   }
			else
			  {
			      cout<<"Lab already Booked!!"<<id;
			      goto back;
			  }

		  }
	    }
	 if(n==2)
	    {
		if(m==3)
		  {
			if(l23==0)
			   {
			       l23=1;
			       cout<<"Lab Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			      // bid=id;
			   }
			else
			  {
			      cout<<"Lab already Booked!!"<<id;
			      goto back;
			  }

		  }
	    }
	 if(n==2)
	    {
		if(m==4)
		  {
			if(l24==0)
			   {
			       l24=1;
			       cout<<"Lab Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			      // bid=id;
			   }
			else
			  {
			      cout<<"Lab already Booked!!"<<id;
			      goto back;
			  }

		  }
	    }
	 if(n==3)
	    {
		if(m==1)
		  {
			if(l31==0)
			   {
			       l31=1;
			       cout<<"Lab Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			       //bid=id;
			   }
			else
			  {
			      cout<<"Lab already Booked!!"<<id;
			      goto back;
			  }

		  }
	    }
	 if(n==3)
	    {
		if(m==2)
		  {
			if(l32==0)
			   {
			       l32=1;
			       cout<<"Lab Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
//			       bid=id;
			   }
			else
			  {
			      cout<<"Lab already Booked!!"<<id;
			      goto back;
			  }

		  }
	    }
	 if(n==3)
	    {
		if(m==3)
		  {
			if(l33==0)
			   {
			       l33=1;
			       cout<<"Lab Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
				//bid=id;
			   }
			else
			  {
			      cout<<"Lab already Booked!!"<<id;
			      goto back;
			  }

		  }
	    }
	 if(n==3)
	    {
		if(m==4)
		  {
			if(l34==0)
			   {
			       l34=1;//bid=id;
			       cout<<"Lab Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Lab already Booked!!"<<id;
			      goto back;
			  }

		  }
	    }
	 if(n==4)
	    {
		if(m==1)
		  {
			if(l41==0)
			   {
			       l41=1;//bid=id;
			       cout<<"Lab Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Lab already Booked!!"<<id;
			      goto back;
			  }

		  }
	    }
	 if(n==4)
	    {
		if(m==2)
		  {
			if(l42==0)
			   {
			       l42=1;//bid=id;
			       cout<<"Lab Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Lab already Booked!!"<<id;
			      goto back;
			  }

		  }
	    }
	 if(n==4)
	    {
		if(m==3)
		  {
			if(l43==0)
			   {
			       l43=1;//bid=id;
			       cout<<"Lab Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Lab already Booked!!"<<id;
			      goto back;
			  }

		  }
	    }
	 if(n==4)
	    {
		if(m==4)
		  {
			if(l44==0)
			   {
			       l44=1;//bid=id;
			       cout<<"Lab Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Lab already Booked!!"<<id;
			      goto back;
			  }

		  }
	    }
	 if(n==5)
	    {
		if(m==1)
		  {
			if(l51==0)
			   {
			       l51=1;//bid=id;
			       cout<<"Lab Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Lab already Booked!!"<<id;
			      goto back;
			  }

		  }
	    }
	 if(n==5)
	    {
		if(m==2)
		  {
			if(l52==0)
			   {
			       l52=1;//bid=id;
			       cout<<"Lab Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Lab already Booked!!"<<id;
			      goto back;
			  }

		  }
	    }
	 if(n==5)
	    {
		if(m==3)
		  {
			if(l53==0)
			   {
			       l53=1;//bid=id;
			       cout<<"Lab Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Lab already Booked!!"<<id;
			      goto back;
			  }

		  }
	    }
	 if(n==5)
	    {
		if(m==4)
		  {
			if(l54==0)
			   {
			       l54=1;//bid=id;
			       cout<<"Lab Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Lab already Booked!!"<<id;
			      goto back;
			  }

		  }
	    }
	 if(n==6)
	    {
		if(m==1)
		  {
			if(l61==0)
			   {
			       l61=1;//bid=id;
			       cout<<"Lab Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Lab already Booked!!"<<id;
			      goto back;
			  }

		  }
	    }
	 if(n==6)
	    {
		if(m==2)
		  {
			if(l62==0)
			   {
			       l62=1;//bid=id;
			       cout<<"Lab Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Lab already Booked!!"<<id;
			      goto back;
			  }

		  }
	    }
	 if(n==6)
	    {
		if(m==3)
		  {
			if(l63==0)
			   {
			       l63=1;//bid=id;
			       cout<<"Lab Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Lab already Booked!!"<<id;
			      goto back;
			  }

		  }
	    }
	 if(n==6)
	    {
		if(m==4)
		  {
			if(l64==0)
			   {
			       l64=1;//bid=id;
			       cout<<"Lab Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Lab already Booked!!"<<id;
			      goto back;
			  }

		  }
	    }
	 if(n==7)
	    {
		if(m==1)
		  {
			if(l71==0)
			   {
			       l71=1;//bid=id;
			       cout<<"Lab Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Lab already Booked!!"<<id;
			      goto back;
			  }

		  }
	    }
	 if(n==7)
	    {
		if(m==2)
		  {
			if(l72==0)
			   {
			       l72=1;//bid=id;
			       cout<<"Lab Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Lab already Booked!!"<<id;
			      goto back;
			  }

		  }
	    }
	 if(n==7)
	    {
		if(m==3)
		  {
			if(l73==0)
			   {
			       l73=1;//bid=id;
			       cout<<"Lab Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Lab already Booked!!"<<id;
			      goto back;
			  }

		  }
	    }
	 if(n==7)
	    {
		if(m==4)
		  {
			if(l74==0)
			   {
			       l74=1;//bid=id;
			       cout<<"Lab Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Lab already Booked!!"<<id;
			      goto back;
			  }

		  }
	    }
	 if(n==8)
	    {
		if(m==1)
		  {
			if(l81==0)
			   {
			       l81=1;//bid=id;
			       cout<<"Lab Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Lab already Booked!!"<<id;
			      goto back;
			  }

		  }
	    }
	 if(n==8)
	    {
		if(m==2)
		  {
			if(l82==0)
			   {
			       l82=1;//bid=id;
			       cout<<"Lab Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Lab already Booked!!"<<id;
			      goto back;
			  }

		  }
	    }
	 if(n==8)
	    {
		if(m==3)
		  {
			if(l83==0)
			   {
			       l83=1;//bid=id;
			       cout<<"Lab Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Lab already Booked!!"<<id;
			      goto back;
			  }

		  }
	    }
	 if(n==8)
	    {
		if(m==4)
		  {
			if(l84==0)
			   {
			       l84=1;//bid=id;
			       cout<<"Lab Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Lab already Booked!!"<<id;
			      goto back;
			  }

		  }
	    }
			       //	   //bid=id;
	 if(n>8 || m>4)
		{
			cout<<"Invalid Option";
			goto back;
		}

	   getch();
	}


      void room()
	{
	  clrscr();
	  int gdriver = EGA,n, gmode = EGAHI;
	  initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
	  setbkcolor(1);
	  cout<<"\t\t\t\t%%Class Rooms%%";
	  cout<<"\n\nDo you want to see rooms?If yes ,then press 1.\n";
	  cin>>n;
	    if(n==1)
	      roomavb();
	    else
	      {
		setcolor(3);
		rectangle(1,55,220,100);
		cout<<"You pressed an invalid key\n\nThanks for visiting....";
	      }

	      char ch1;

	      cout<<"Want to book again?";
	      cin>>ch1;
	      if(ch1=='y'||ch1=='Y')
	      {
	      int ch;
		setbkcolor(6);
	ro:
	cout<<"\t\t\t**********************************";
	cout<<"\n\t\t\t*   Welcome to Booking Services  *";
	cout<<"\n\t\t\t**********************************";
	cout<<"\n\nEnter Your Choice";
	cout<<"\n1). Labs\n2). Rooms\n3). Seminar Halls\n4). Booked Labs\n5). Booked Rooms\n6). Booked Halls\n\n";
	cin>>ch;
	 if(ch>6||ch<1)
	     {
		cout<<"\nYour choice is invalid....!\n";
		goto ro;
	     }
	 for(int i=0;i<=7;i++)
	     {
		delay(100);
		setbkcolor(i);
	     }
	 switch(ch)
	    {
	       case 1:
		 lab();
		 break;

	       case 2:
		room();
		break;

	      case 3:
		hall();
		break;


	      case 4:
		labbook();
		break;
	      case 5:
		roombook();
		break;
	      case 6:
		hallbook();
		break;
	    }

	      }
	  getch();
	}

      void roomavb()
	{
    //	int id;
	  clrscr();
	  char g,j[30];
	  int gdriver = EGA,n,m,gmode = EGAHI;
	  initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
	  setbkcolor(2);
	  backroom:                  //Label created
	  cout<<"\nChoose your option..\n";
	  cout<<"1).CR 1\n2).CR 2\n3).CR 3\n4).CR 4\n5).CR 5\n6).CR 6\n7).CR 7\n8).CR 8\n\n";
	  cin>>n;
	  cout<<"Choose your Slot:";
	  cout<<"\n1).8-10\n2).10-12\n3).12-2\n4).2-4\n\n";
	  cin>>m;
	  if(n==1)
	    {
		if(m==1)
		  {
			if(r11==0)
			   {
			       r11=1;
			       cout<<"Room Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Room arready Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			      goto backroom;
			  }

		  }
	    }

	  if(n==1)
	    {
		if(m==2)
		  {
			if(r12==0)
			   {
			       r12=1;
			       cout<<"Room Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Room already Booked!!"<<id;
			      goto backroom;
			  }

		  }
	    }
	  if(n==1)
	    {
		if(m==3)
		  {
			if(r13==0)
			   {
			       r13=1;
			       cout<<"Room Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Room already Booked!!"<<id;
			      goto backroom;
			  }

		  }
	    }
	 if(n==1)
	    {
		if(m==4)
		  {
			if(r14==0)
			   {
			       r14=1;
			       cout<<"Room Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Room already Booked!!"<<id;
			      goto backroom;
			  }

		  }
	    }
	 if(n==2)
	    {
		if(m==1)
		  {
			if(r21==0)
			   {
			       r21=1;
			       cout<<"Room Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Room already Booked!!"<<id;
			      goto backroom;
			  }

		  }
	    }
	 if(n==2)
	    {
		if(m==2)
		  {
			if(r22==0)
			   {
			       r22=1;
			       cout<<"Room Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Room already Booked!!"<<id;
			      goto backroom;
			  }

		  }
	    }
	 if(n==2)
	    {
		if(m==3)
		  {
			if(r23==0)
			   {
			       r23=1;
			       cout<<"Room Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Room already Booked!!"<<id;
			      goto backroom;
			  }

		  }
	    }
	 if(n==2)
	    {
		if(m==4)
		  {
			if(r24==0)
			   {
			       r24=1;
			       cout<<"Room Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Room already Booked!!"<<id;
			      goto backroom;
			  }

		  }
	    }
	 if(n==3)
	    {
		if(m==1)
		  {
			if(r31==0)
			   {
			       r31=1;
			       cout<<"Room Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Room already Booked!!"<<id;
			      goto backroom;
			  }

		  }
	    }
	 if(n==3)
	    {
		if(m==2)
		  {
			if(r32==0)
			   {
			       r32=1;
			       cout<<"Room Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Room already Booked!!"<<id;
			      goto backroom;
			  }

		  }
	    }
	 if(n==3)
	    {
		if(m==3)
		  {
			if(r33==0)
			   {
			       r33=1;
			       cout<<"Room Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Room already Booked!!"<<id;
			      goto backroom;
			  }

		  }
	    }
	 if(n==3)
	    {
		if(m==4)
		  {
			if(r34==0)
			   {
			       r34=1;
			       cout<<"Room Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Room already Booked!!"<<id;
			      goto backroom;
			  }

		  }
	    }
	 if(n==4)
	    {
		if(m==1)
		  {
			if(r41==0)
			   {
			       r41=1;
			       cout<<"Room Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Room already Booked!!"<<id;
			      goto backroom;
			  }

		  }
	    }
	 if(n==4)
	    {
		if(m==2)
		  {
			if(r42==0)
			   {
			       r42=1;
			       cout<<"Room Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Room already Booked!!"<<id;
			      goto backroom;
			  }

		  }
	    }
	 if(n==4)
	    {
		if(m==3)
		  {
			if(r43==0)
			   {
			       r43=1;
			       cout<<"Room Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Room already Booked!!"<<id;
			      goto backroom;
			  }

		  }
	    }
	 if(n==4)
	    {
		if(m==4)
		  {
			if(r44==0)
			   {
			       r44=1;
			       cout<<"Room Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Room already Booked!!"<<id;
			      goto backroom;
			  }

		  }
	    }
	 if(n==5)
	    {
		if(m==1)
		  {
			if(r51==0)
			   {
			       r51=1;
			       cout<<"Room Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Room already Booked!!"<<id;
			      goto backroom;
			  }

		  }
	    }
	 if(n==5)
	    {
		if(m==2)
		  {
			if(r52==0)
			   {
			       r52=1;
			       cout<<"Room Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Room already Booked!!"<<id;
			      goto backroom;
			  }

		  }
	    }
	 if(n==5)
	    {
		if(m==3)
		  {
			if(r53==0)
			   {
			       r53=1;
			       cout<<"Room Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Room already Booked!!"<<id;
			      goto backroom;
			  }

		  }
	    }
	 if(n==5)
	    {
		if(m==4)
		  {
			if(r54==0)
			   {
			       r54=1;
			       cout<<"Room Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Room already Booked!!"<<id;
			      goto backroom;
			  }

		  }
	    }
	 if(n==6)
	    {
		if(m==1)
		  {
			if(r61==0)
			   {
			       r61=1;
			       cout<<"Room Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Room already Booked!!"<<id;
			      goto backroom;
			  }

		  }
	    }
	 if(n==6)
	    {
		if(m==2)
		  {
			if(r62==0)
			   {
			       r62=1;
			       cout<<"Room Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Room already Booked!!"<<id;
			      goto backroom;
			  }

		  }
	    }
	 if(n==6)
	    {
		if(m==3)
		  {
			if(r63==0)
			   {
			       r63=1;
			       cout<<"Room Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Room already Booked!!"<<id;
			      goto backroom;
			  }

		  }
	    }
	 if(n==6)
	    {
		if(m==4)
		  {
			if(r64==0)
			   {
			       r64=1;
			       cout<<"Room Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Room already Booked!!"<<id;
			      goto backroom;
			  }

		  }
	    }
	 if(n==7)
	    {
		if(m==1)
		  {
			if(r71==0)
			   {
			       r71=1;
			       cout<<"Room Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Room already Booked!!"<<id;
			      goto backroom;
			  }

		  }
	    }
	 if(n==7)
	    {
		if(m==2)
		  {
			if(r72==0)
			   {
			       r72=1;
			       cout<<"Room Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Room already Booked!!"<<id;
			      goto backroom;
			  }

		  }
	    }
	 if(n==7)
	    {
		if(m==3)
		  {
			if(r73==0)
			   {
			       r73=1;
			       cout<<"Room Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Room already Booked!!"<<id;
			      goto backroom;
			  }

		  }
	    }
	 if(n==7)
	    {
		if(m==4)
		  {
			if(r74==0)
			   {
			       r74=1;
			       cout<<"Room Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Room already Booked!!"<<id;
			      goto backroom;
			  }

		  }
	    }
	 if(n==8)
	    {
		if(m==1)
		  {
			if(r81==0)
			   {
			       r81=1;
			       cout<<"Room Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Room already Booked!!"<<id;
			      goto backroom;
			  }

		  }
	    }
	 if(n==8)
	    {
		if(m==2)
		  {
			if(r82==0)
			   {
			       r82=1;
			       cout<<"Room Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Room already Booked!!"<<id;
			      goto backroom;
			  }

		  }
	    }
	 if(n==8)
	    {
		if(m==3)
		  {
			if(r83==0)
			   {
			       r83=1;
			       cout<<"Room Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Room already Booked!!"<<id;
			      goto backroom;
			  }

		  }
	    }
	 if(n==8)
	    {
		if(m==4)
		  {
			if(r84==0)
			   {
			       r84=1;
			       cout<<"Room Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Room already Booked!!"<<id;
			      goto backroom;
			  }

		  }
	    }

	 if(n>8 || m>4)
		{
			cout<<"Invalid Option";
			goto backroom;
		}

	   getch();
	}



      void hall()
	{
	  clrscr();
	  int gdriver = EGA,n, gmode = EGAHI;
	  initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
	  setbkcolor(1);
	  cout<<"\t\t\t\t%%Seminar Halls%%";
	  cout<<"\n\nDo you want to see halls?If yes ,then press 1.\n";
	  cin>>n;
	    if(n==1)
	      hallavb();
	    else
	      {
		setcolor(3);
		rectangle(1,55,220,100);
		cout<<"You pressed an invalid key\n\nThanks for visiting....";
	      }

	      char ch1;

	      cout<<"Want to book again?";
	      cin>>ch1;
	      if(ch1=='y'||ch1=='Y')
	      {
	      int ch;
		setbkcolor(6);
	ro:
	cout<<"\t\t\t**********************************";
	cout<<"\n\t\t\t*   Welcome to Booking Services  *";
	cout<<"\n\t\t\t**********************************";
	cout<<"\n\nEnter Your Choice";
	cout<<"\n1). Labs\n2). Rooms\n3). Seminar Halls\n4). Booked Labs\n5). Booked Rooms\n6). Booked Halls\n\n";
	cin>>ch;
	 if(ch>6||ch<1)
	     {
		cout<<"\nYour choice is invalid....!\n";
		goto ro;
	     }
	 for(int i=0;i<=7;i++)
	     {
		delay(100);
		setbkcolor(i);
	     }
	 switch(ch)
	    {
	       case 1:
		 lab();
		 break;

	       case 2:
		room();
		break;

	      case 3:
		hall();
		break;


	      case 4:
		labbook();
		break;
	      case 5:
		roombook();
		break;
	      case 6:
		hallbook();
		break;
	    }

	      }
	  getch();
	}

      void hallavb()
	{
//	  int id;
	  clrscr();
	  char g,j[30];
	  int gdriver = EGA,n,m,gmode = EGAHI;
	  initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
	  setbkcolor(2);
	  backhall:                  //Label created
	  cout<<"\nChoose your option..\n";
	  cout<<"1).SH 1\n2).SH 2\n3).SH 3\n4).SH 4\n5).SH 5\n6).SH 6\n7).SH 7\n8).SH 8\n\n";
	  cin>>n;
	  cout<<"Choose your Slot:";
	  cout<<"\n1).8-10\n2).10-12\n3).12-2\n4).2-4\n\n";
	  cin>>m;
	  if(n==1)
	    {
		if(m==1)
		  {
			if(h11==0)
			   {
			       h11=1;
			       cout<<"hoom Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Hall already Booked!!"<<id;
			      goto backhall;
			  }

		  }
	    }

	  if(n==1)
	    {
		if(m==2)
		  {
			if(h12==0)
			   {
			       h12=1;
			       cout<<"Hall Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Hall alheady Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			      goto backhall;
			  }

		  }
	    }
	  if(n==1)
	    {
		if(m==3)
		  {
			if(h13==0)
			   {
			       h13=1;
			       cout<<"Hall Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Hall already Booked!!"<<id;
			      goto backhall;
			  }

		  }
	    }
	 if(n==1)
	    {
		if(m==4)
		  {
			if(h14==0)
			   {
			       h14=1;
			       cout<<"Hall Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Hall already Booked!!"<<id;
			      goto backhall;
			  }

		  }
	    }
	 if(n==2)
	    {
		if(m==1)
		  {
			if(h21==0)
			   {
			       h21=1;
			       cout<<"Hall Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Hall already Booked!!"<<id;
			      goto backhall;
			  }

		  }
	    }
	 if(n==2)
	    {
		if(m==2)
		  {
			if(h22==0)
			   {
			       h22=1;
			       cout<<"Hall Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Hall already Booked!!"<<id;
			      goto backhall;
			  }

		  }
	    }
	 if(n==2)
	    {
		if(m==3)
		  {
			if(h23==0)
			   {
			       h23=1;
			       cout<<"Hall Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Hall already Booked!!"<<id;
			      goto backhall;
			  }

		  }
	    }
	 if(n==2)
	    {
		if(m==4)
		  {
			if(h24==0)
			   {
			       h24=1;
			       cout<<"Hall Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Hall already Booked!!"<<id;
			      goto backhall;
			  }

		  }
	    }
	 if(n==3)
	    {
		if(m==1)
		  {
			if(h31==0)
			   {
			       h31=1;
			       cout<<"Hall Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Hall already Booked!!"<<id;
			      goto backhall;
			  }

		  }
	    }
	 if(n==3)
	    {
		if(m==2)
		  {
			if(h32==0)
			   {
			       h32=1;
			       cout<<"Hall Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Hall already Booked!!"<<id;
			      goto backhall;
			  }

		  }
	    }
	 if(n==3)
	    {
		if(m==3)
		  {
			if(h33==0)
			   {
			       h33=1;
			       cout<<"Hall Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Hall already Booked!!"<<id;
			      goto backhall;
			  }

		  }
	    }
	 if(n==3)
	    {
		if(m==4)
		  {
			if(h34==0)
			   {
			       h34=1;
			       cout<<"Hall Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Hall already Booked!!"<<id;
			      goto backhall;
			  }

		  }
	    }
	 if(n==4)
	    {
		if(m==1)
		  {
			if(h41==0)
			   {
			       h41=1;
			       cout<<"Hall Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Hall already Booked!!"<<id;
			      goto backhall;
			  }

		  }
	    }
	 if(n==4)
	    {
		if(m==2)
		  {
			if(h42==0)
			   {
			       h42=1;
			       cout<<"Hall Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Hall already Booked!!"<<id;
			      goto backhall;
			  }

		  }
	    }
	 if(n==4)
	    {
		if(m==3)
		  {
			if(h43==0)
			   {
			       h43=1;
			       cout<<"Hall Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Hall already Booked!!"<<id;
			      goto backhall;
			  }

		  }
	    }
	 if(n==4)
	    {
		if(m==4)
		  {
			if(h44==0)
			   {
			       h44=1;
			       cout<<"Hall Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Hall already Booked!!"<<id;
			      goto backhall;
			  }

		  }
	    }
	 if(n==5)
	    {
		if(m==1)
		  {
			if(h51==0)
			   {
			       h51=1;
			       cout<<"Hall Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Hall already Booked!!"<<id;
			      goto backhall;
			  }

		  }
	    }
	 if(n==5)
	    {
		if(m==2)
		  {
			if(h52==0)
			   {
			       h52=1;
			       cout<<"Hall Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Hall already Booked!!"<<id;
			      goto backhall;
			  }

		  }
	    }
	 if(n==5)
	    {
		if(m==3)
		  {
			if(h53==0)
			   {
			       h53=1;
			       cout<<"Hall Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Hall already Booked!!"<<id;
			      goto backhall;
			  }

		  }
	    }
	 if(n==5)
	    {
		if(m==4)
		  {
			if(h54==0)
			   {
			       h54=1;
			       cout<<"Hall Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Hall already Booked!!"<<id;
			      goto backhall;
			  }

		  }
	    }
	 if(n==6)
	    {
		if(m==1)
		  {
			if(h61==0)
			   {
			       h61=1;
			       cout<<"Hall Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Hall already Booked!!"<<id;
			      goto backhall;
			  }

		  }
	    }
	 if(n==6)
	    {
		if(m==2)
		  {
			if(h62==0)
			   {
			       h62=1;
			       cout<<"Hall Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Hall already Booked!!"<<id;
			      goto backhall;
			  }

		  }
	    }
	 if(n==6)
	    {
		if(m==3)
		  {
			if(h63==0)
			   {
			       h63=1;
			       cout<<"Hall Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Hall already Booked!!"<<id;
			      goto backhall;
			  }

		  }
	    }
	 if(n==6)
	    {
		if(m==4)
		  {
			if(h64==0)
			   {
			       h64=1;
			       cout<<"Hall Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Hall already Booked!!"<<id;
			      goto backhall;
			  }

		  }
	    }
	 if(n==7)
	    {
		if(m==1)
		  {
			if(h71==0)
			   {
			       h71=1;
			       cout<<"Hall Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Hall already Booked!!"<<id;
			      goto backhall;
			  }

		  }
	    }
	 if(n==7)
	    {
		if(m==2)
		  {
			if(h72==0)
			   {
			       h72=1;
			       cout<<"Hall Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Hall already Booked!!"<<id;
			      goto backhall;
			  }

		  }
	    }
	 if(n==7)
	    {
		if(m==3)
		  {
			if(h73==0)
			   {
			       h73=1;
			       cout<<"Hall Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Hall already Booked!!"<<id;
			      goto backhall;
			  }

		  }
	    }
	 if(n==7)
	    {
		if(m==4)
		  {
			if(h74==0)
			   {
			       h74=1;
			       cout<<"Hall Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Hall already Booked!!"<<id;
			      goto backhall;
			  }

		  }
	    }
	 if(n==8)
	    {
		if(m==1)
		  {
			if(h81==0)
			   {
			       h81=1;
			       cout<<"Hall Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Hall already Booked!!"<<id;
			      goto backhall;
			  }

		  }
	    }
	 if(n==8)
	    {
		if(m==2)
		  {
			if(h82==0)
			   {
			       h82=1;
			       cout<<"Hall Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Hall already Booked!!"<<id;
			      goto backhall;
			  }

		  }
	    }
	 if(n==8)
	    {
		if(m==3)
		  {
			if(h83==0)
			   {
			       h83=1;
			       cout<<"Hall Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Hall already Booked!!"<<id;
			      goto backhall;
			  }

		  }
	    }
	 if(n==8)
	    {
		if(m==4)
		  {
			if(h84==0)
			   {
			       h84=1;
			       cout<<"Hall Booked!!";cout<<"Enter UID(3-digit no.)";cin>>id;
			   }
			else
			  {
			      cout<<"Hall already Booked!!"<<id;
			      goto backhall;
			  }

		  }
	    }

	 if(n>8 || m>4)
		{
			cout<<"Invalid Option";
			goto backhall;
		}

	   getch();
	}

       void end()                         //last page
	 {
	   int gm,gd=DETECT,p,i,j,k,q=0;
	   initgraph(&gd,&gm,"c:\\tc\\bgi");
	     delay(1000);
		for(i=0;i<625;i+=20,q+=2)
		   {
		      for(j=0;j<=5;j++)
			  {
			       setcolor(j);
			       circle(i,420,j-1);
			       circle(i,430,j+15);
			       circle(i,450,j+1);
			       circle(i,20,j+1);
			       circle(i,40,j+15);
			       circle(i,60,j+1);
			   }
		      setcolor(i);
			  for(p=70;p<100;p+=3)
			       {
				   delay(5);
				   circle(130,235,p);
				   settextstyle(GOTHIC_FONT,HORIZ_DIR,0);
				   outtextxy(90,205,"THANX");
				}
			  for(p=70;p<100;p+=3)
			       {
				   delay(5);
				   circle(300,235,p);
				   settextstyle(GOTHIC_FONT,HORIZ_DIR,0);
				   outtextxy(265,205,"FOR");
				}
			for(p=70;p<100;p+=3)
			       {
				   delay(5);
				   circle(465,235,p);
				   settextstyle(GOTHIC_FONT,HORIZ_DIR,0);
				   outtextxy(420,205,"VISITING");
				}
			for(int r=0;r<90;r++)
			  putpixel(rand()%800,rand()%500,rand());
		   }
		   getch();
		   exit(0);
	 }