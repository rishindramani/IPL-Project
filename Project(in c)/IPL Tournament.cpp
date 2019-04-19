//IPL tournament 
#include<iostream>
#include<fstream>
#include<conio.h>
#include<process.h>
using namespace std;
class tournament
{
	public:
		int a;
		void main_menu()
		{
				system("cls");
			tournament girish;
			cout<<"\t \t \t \t!!!!!IPL Tournament!!!!!"<<endl;
			cout<<"\n\n\n\n\t \t \t \t MAIN MENU";
			cout<<"\n\t \t \t \t ==== ====";
			cout<<"\n\n\n\n\t \t \t \t1. Display Team Names";
			cout<<"\n\n\n\n\t \t \t \t2. Display Tournament Schedule";
			cout<<"\n\n\n\n\t \t \t \t3. Display Tournament Match Results";
			cout<<"\n\n\n\n \t \t \t \t4. Display Top Scorers ";
			cout<<"\n\n\n\n \t \t \t \t5. Display Top Wicket_Takers";
			cout<<"\n\n\n\n \t \t \t \t6. Display Points Table";
			cout<<"\n\n\n\n \t \t \t \t7. Add team";
			cout<<"\n\n\n\n\t \t \t \t8. Exit";
			cout<<"\n\n\n\t \t \t \t Please Enter Your Choice::";
			cin>>girish.a;
			switch(girish.a)
			{
			case 1:
				girish.team_names();
				break;
			case 2:
				girish.tournament_schedule();
				break;
			case 3:
				girish.match_results();
				break;
			case 4:
				girish.top_scorers();
				break;
			case 5:
			    girish.Top_WicketTakers();
				break;
				case 6:
			    girish.points();
				break;	
				case 7:
			    girish.add_team();
			    
				break;		
			case 8:
				cout<<"\n\n\n\t\t\tThank You For Visiting!";
				break;	
			default:
				cout<<"Please enter valid girish!!!";
				girish.main_menu();
				
			}
		}
		void team_names()
		{
			
			system("cls");
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
						system("cls");
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
						cout<<"Thank You for visiting!";
						break;
				
				case 2:
						system("cls");
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
						cout<<"Thank You for visiting!";
						
						break;		
				case 3:
						system("cls");
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
						cout<<"Thank You for visiting!";
						break;
				case 4:
						system("cls");
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
						cout<<"Thank You for visiting!";
						break;		
				case 5:
						system("cls");
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
						cout<<"Thank You for visiting!";
						break;			
				case 6:
						system("cls");
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
						cout<<"Thank You for visiting!";
						break;			
				case 7:
						system("cls");
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
						cout<<"Thank You for visiting!";
						break;			
				case 8:
						system("cls");
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
						cout<<"Thank You for visiting!";
						break;			
				default:
						cout<<"Please enter valid choice!";
						player_list();								
												
						
			}
					
		}
		void add_team()
		{
			int c;
		string c1;
				cout<<"Enter the name of the Team"<<endl;
			cin>>c1;
			std::ofstream log("Team_Names.txt", std::ios_base::app | std::ios_base::out);
             log <<"\n"<<c1;
             cout<<"succesfull";
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
						cout<<"Thank You for visiting!";
	   }

		void tournament_schedule()
		{	int c;
			system("cls");
			ifstream file("Tournament_Schedule.txt");
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
						cin>>c;
						if(c==1)
						main_menu();
						else
						cout<<"Thank You for visiting!";
			
		}
		void match_results()
		{
			cout<<"Match results";
			int d1;
			system("cls");
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
						cout<<"Thank You for visiting!";
		}
		void man_of_the_match()
		{
			cout<<"Man of the match";
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
						cout<<"Thank You for visiting!";
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
						cout<<"Thank You for visiting!";
		}
			
		
		void Top_WicketTakers()

		{
			int d1;
			system("cls");
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
						cout<<"Thank You for visiting!";
		}
};
int main()
{
	tournament t1;
	t1.main_menu();
}
