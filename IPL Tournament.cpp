//IPL IPLCricketIPLCricket  
#include<iostream>
#include<fstream>
#include<conio.h>
#include<process.h>
using namespace std;
class IPLCricket
{
	public:
		int a;
		void main_menu()
		{
			int usern,pasw;
				
		
			cout<<"\t \t \t \t!!!!! IPLCricket Tournament!!!!!"<<endl;
			cout<<"\n\n\n\n\t \t \t \t MAIN MENU";
			cout<<"\n\t \t \t \t ==== ====";
			cout<<"\n\n\n\n\t \t \t \t1. Display Team Names";
			cout<<"\n\n\n\n\t \t \t \t2. Display Tournament Schedule";
			cout<<"\n\n\n\n\t \t \t \t3. Display Tournament Match Results";
			cout<<"\n\n\n\n \t \t \t \t4. Display Top Scorers ";
			cout<<"\n\n\n\n \t \t \t \t5. Display Top Wicket_Takers";
			cout<<"\n\n\n\n \t \t \t \t6. Display Points Table";
			cout<<"\n\n\n\n \t \t \t \t7. Delete Team";
			cout<<"\n\n\n\n \t \t \t \t8. Add Team";
			cout<<"\n\n\n\n\t \t \t \t9. Exit";
			cout<<"\n\n\n\t \t \t \t Please Enter Your Choice::";
			cin>>a;
			switch(a)
			{
			case 1:
				team_names();
				break;
			case 2:
				tournament_schedule();
				break;
			case 3:
				match_results();
				break;
			case 4:
				top_scorers();
				break;
			case 5:
			    Top_WicketTakers();
				break;
				case 6:
			    points();
				break;
				case 7:
			
			cout<<"\n\n\n\t\t\tPlease enter username to update team!!!";
				cout<<"\n\n\n\t\t\tUsername is 11715013\n";
				cin>>usern;
				cout<<"\n\n\n\t\t\t enter password!!!";
				cout<<"\n\n\n\t\t\t password is 12345\n";
				cin>>pasw;
				if(usern==11715013&&pasw==12345)
				{
				
			   delete_team();
							}
			else
			{
			cout<<"\n\n\n\t\t\t wrong username and password";
			cout<<"\n\n\n\t\t\t Try again";
			}
			main_menu();
		break;
			
				case 8:
				cout<<"\n\n\n\t\t\tPlease enter username to update team!!!";
				cout<<"\n\n\n\t\t\tUsername is 11715013\n";
				cin>>usern;
				cout<<"\n\n\n\t\t\t enter password!!!";
				cout<<"\n\n\n\t\t\t password is 12345\n";
				cin>>pasw;
				if(usern==11715013&&pasw==12345)
				{
				
			    add_team();
			    update();
				
			}
			else
			{
			cout<<"\n\n\n\t\t\t wrong username and password";
			cout<<"\n\n\n\t\t\t Try again";
			main_menu();
			
		}
		break;
		
			case 9:
				cout<<"\n\n\n\t\t\tThank You for trying our software!";
				break;	
			default:
				cout<<"Please enter valid choice!!!";
			main_menu();
				
			}
		}
		void team_names()
		{
			
			
			ifstream file("Team_Names.txt");
			string l;
			if(!file)
			{
				cout<<"Can not open file.\n";
				
			}
			else
			{
				while(getline(file,l))
				{
					cout<<l<<endl;
				}
			}
			file.close();
			player_list();
		}
		void player_list()
		{	
			ifstream file;
			string line;
			int b,c;
			cout<<"\n\n\n\n\t \t \t \tEnter team number to see the list of players:";
			cin>>b;
			switch(b)
			{
				case 1:
						
						file.open("CSK.txt");
						if(!file)
						{
							cout<<"Can not open file.\n";
						}
						else
						{
							while(getline(file,line))
							{
								cout<<line<<endl;
							}
						}
						file.close();
						cout<<"\n\n\n\n\t \t \t \tPlease enter 0 for previous menu, 1 for Main Menu";
						cin>>c;
						if(c==0)
						team_names();
						else if(c==1)
						main_menu();
						else
						cout<<"Thank You for trying our software!";
						break;
				
				case 2:
						 
						file.open("DD.txt");

						if(!file)
						{
							cout<<"Can not open file.\n";
						}
						else
						{
							while(getline(file,line))
							{
								cout<<line<<endl;
							}
						}
						file.close();
						cout<<"\n\n\n\n\t \t \t \tPlease enter 0 for previous menu, 1 for Main Menu";
						cin>>c;
						if(c==0)
						team_names();
						else if(c==1)
						main_menu();
						else
						cout<<"Thank You for trying our software!";
						
						break;		
				case 3:
						 
						file.open("KXIP.txt");
						
						if(!file)
						{
							cout<<"Can not open file.\n";
						}
						else
						{
							while(getline(file,line))
							{
								cout<<line<<endl;
							}
						}
						file.close();
						cout<<"\n\n\n\n\t \t \t \tPlease enter 0 for previous menu, 1 for Main Menu";
						cin>>c;
						if(c==0)
						team_names();
						else if(c==1)
						main_menu();
						else
						cout<<"Thank You for trying our software!";
						break;
				case 4:
						 
						file.open("KKR.txt");
					
						if(!file)
						{
							cout<<"Can not open file.\n";
						}
						else
						{
							while(getline(file,line))
							{
								cout<<line<<endl;
							}
						}
						file.close();
						cout<<"\n\n\n\n\t \t \t \tPlease enter 0 for previous menu, 1 for Main Menu";
						cin>>c;
						if(c==0)
						team_names();
						else if(c==1)
						main_menu();
						else
						cout<<"Thank You for trying our software!";
						break;		
				case 5:
						 
						file.open("MI.txt");
						
						if(!file)
						{
							cout<<"Can not open file.\n";
						}
						else
						{
							while(getline(file,line))
							{
								cout<<line<<endl;
							}
						}
						file.close();
						cout<<"\n\n\n\n\t \t \t \tPlease enter 0 for previous menu, 1 for Main Menu";
						cin>>c;
						if(c==0)
						team_names();
						else if(c==1)
						main_menu();
						else
						cout<<"Thank You for trying our software!";
						break;			
				case 6:
						 
						file.open("RR.txt");
						
						if(!file)
						{
							cout<<"Can not open file.\n";
						}
						else
						{
							while(getline(file,line))
							{
								cout<<line<<endl;
							}
						}
						file.close();
						cout<<"\n\n\n\n\t \t \t \tPlease enter 0 for previous menu, 1 for Main Menu";
						cin>>c;
						if(c==0)
						team_names();
						else if(c==1)
						main_menu();
						else
						cout<<"Thank You for trying our software!";
						break;			
				case 7:
						 
						file.open("RCB.txt");
						
						if(!file)
						{
							cout<<"Can not open file.\n";
						}
						else
						{
							while(getline(file,line))
							{
								cout<<line<<endl;
							}
						}
						file.close();
						cout<<"\n\n\n\n\t \t \t \tPlease enter 0 for previous menu, 1 for Main Menu";
						cin>>c;
						if(c==0)
						team_names();
						else if(c==1)
						main_menu();
						else
						cout<<"Thank You for trying our software!";
						break;			
				case 8:
						 
						file.open("SH.txt");
						
						if(!file)
						{
							cout<<"Can not open file.\n";
						}
						else
						{
							while(getline(file,line))
							{
								cout<<line<<endl;
							}
						}
						file.close();
						cout<<"\n\n\n\n\t \t \t \tPlease enter 0 for previous menu, 1 for Main Menu:";
						cin>>c;
						if(c==0)
						team_names();
						else if(c==1)
						main_menu();
						else
						cout<<"Thank You for trying our software!";
						break;			
				default:
						cout<<"Please enter valid choice!";
						player_list();								
												
						
			}
					
		}
		
void delete_team()
{
	int n,c;
    // Initialize String Array
    cout<<		
		
		"1.Chennai Super Kings	(CSK)\n"

		<<"2.Delhi Daredevils	(DD)\n"
		
		<<"3.Kings XI Punjab	(KXIP)\n"

		<<"4.Kolkata Knight Riders	(KKR)\n"
		
		<<"5.Mumbai Indians	(MI)\n"
		
		<<"6.Rajasthan Royals	(RR)\n"

		<<"7.Royal Challengers Bangalore (RCB)\n"

		<<"8.Sunrisers Hyderabad	(SH)\n";
    string a[] = {"Chennai Super Kings(CSK)","Delhi Daredevils(DD)","Kings XI Punjab(KXIP)","Kolkata Knight Riders(KKR)","Mumbai Indians(MI)","Rajasthan Royals	(RR)","Royal Challengers Bangalore (RCB)","Sunrisers Hyderabad	(SH)"};
     string b[8];int k=0;
     cout<<"enter  number corresponding to team which you want to delete\n";
     cin>>n;
     cout<<"Teams after deletion are\n\n";
    // Print Strings
    for (int i = 0; i < n-1; i++) 
        {
        	
		b[k]=a[i];
        k++;
		}
		for (int i=n;i<8;i++) 
		{
				
		b[k]=a[i];
        k++;
		}
        
        for (int i=0;i<k;i++) 
		{
			cout<<(i+1)<<"."<<b[i]<<endl;
		}
		cout<<"\n\n\n\n\t \t \t \tPlease enter 1 for Main Menu and 0 for exit:";
						cin>>c;
						if(c==1)
						main_menu();
						else
						cout<<"Thank You for trying our software!";
}
		void add_team()
		{
			int c;
		string c1;
				cout<<"Enter the name of the Team"<<endl;
			cin>>c1;
			std::ofstream log("newf.txt", std::ios_base::app | std::ios_base::out);
             log <<"\n"<<c1;
             cout<<"succesfull\n";
         }
            
                  
		        
             void update()
             {
             	cout<<"Appended teams\n";
             	int c;
			  fstream a,b;
char ch;
a.open("newf.txt"); //The file from which the content will be copied
b.open("Team_Names.txt"); //The file to which the content will be copied
while (!a.eof())
{
a.get(ch); //reading from file object 'a'
b<<ch; //writing to file
}
a.close();
b.close();

             
            ifstream file("Team_Names.txt");
			string line;
			if(!file)
			{
				cout<<"Can not open file.\n";
				
			}
			else
			{
				while(getline(file,line))
				{
					cout<<line<<endl;
				}
			}
			file.close();
			player_list();
		
             cout<<"\n\n\n\n\t \t \t \tPlease enter 1 for Main Menu and 0 for exit:";
             cin>>c;
						if(c==1)
						main_menu();
						else
						cout<<"Thank You for trying our software!";
	   }

		void tournament_schedule()
		{	int c;
			 
			ifstream file("Tournament_Schedule.txt");
			string nl;
			if(!file)
			{
				cout<<"Can not open file.\n";
				
			}
			else
			{
				while(getline(file,nl))
				{
					cout<<nl<<endl;
				}
			}
			file.close();
			cout<<"\n\n\n\n\t \t \t \tPlease enter 1 for Main Menu and 0 for exit:";
						cin>>c;
						if(c==1)
						main_menu();
						else
						cout<<"Thank You for trying our software!";
			
		}
		void match_results()
		{
			cout<<"Match results";
			int d1;
			 
			ifstream file("results.txt");
			string line;
			if(!file)
			{
				cout<<"Can not open file.\n";
				
			}
			else
			{
				while(getline(file,line))
				{
					cout<<line<<endl;
				}
			}
			file.close();
			cout<<"\n\n\n\n\t \t \t \tPlease enter 1 for Main Menu and 0 for exit:";
						cin>>d1;
						if(d1==1)
						main_menu();
						else
						cout<<"Thank You for trying our software!";
		}
	
		void points()
		{
			int d2;
			system ("cls");
			ifstream file("points_table.txt");
			string align2;
			if(!file)
			{
				cout<<"cannot open file";
				
			}
			else
			{
				while(getline(file,align2))
				{
					cout<<align2<<endl;
				}
				
			}
			file.close();
			cout<<"\n\n\n\n\t \t \t \tPlease enter 1 for Main Menu and 0 for exit:";
						cin>>d2;
						if(d2==1)
						main_menu();
						else
						cout<<"Thank You for trying our software!";
		}
			
		
		void top_scorers()
		{
			int d1;
			system ("cls");
			ifstream file("top_scorers.txt");
			string align;
			if(!file)
			{
				cout<<"cannot open file";
				
			}
			else
			{
				while(getline(file,align))
				{
					cout<<align<<endl;
				}
				
			}
			file.close();
			cout<<"\n\n\n\n\t \t \t \tPlease enter 1 for Main Menu and 0 for exit:";
						cin>>d1;
						if(d1==1)
						main_menu();
						else
						cout<<"Thank You for trying our software!";
		}
			
		
		void Top_WicketTakers()

		{
			int d1;
			 
			ifstream file("Top_WicketTakers.txt");
			string topw;
			if(!file)
			{
				cout<<"cannot open file";
			}
			else
			{
				while (getline(file,topw))
				{
					cout<<topw<<endl;
				}
			}
			file.close();
			cout<<"\n\n\n\n\t \t \t \tPlease enter 1 for Main Menu and 0 for exit:";
						cin>>d1;
						if(d1==1)
						main_menu();
						else
						cout<<"Thank You for trying our software!";
		}
};
int main()
{
	IPLCricket t1;
	t1.main_menu();
}
