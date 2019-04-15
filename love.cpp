#include<iostream>
#include<windows.h>
#include<conio.h>
#include <fstream>
#include <string>
using namespace std;

void loading_();
void gotoxy(int x,int y);
void love();

int i,j,k,n,m;

int main()
{
    int result = MessageBox( NULL , TEXT("你可知?") , TEXT("致最爱的人_ZL") , MB_ICONINFORMATION|MB_YESNO);
    switch(result)
	{
    case IDYES:MessageBox(NULL,TEXT("我知道你最懂我心，真如我对你一样。我不要短暂的温存，只想你一世的陪伴。"),TEXT("致最爱的人_ZL"),MB_OK);
		       MessageBox(NULL,TEXT("我希望睡前看到的是你。"),TEXT("致最爱的人_ZL") , MB_OK);
			   MessageBox(NULL,TEXT("寒蝉凄切，对长亭晚，骤雨初歇。"),TEXT("致最爱的人_ZL") , MB_OK);
			   MessageBox(NULL,TEXT("你电脑没有中毒，这是我给你的礼物。"),TEXT("致最爱的人_ZL") , MB_OK);
			   break;
	case IDNO:MessageBox(NULL,TEXT("本该如此吗?"),TEXT("残忍结束"),MB_OK);
			  MessageBox(NULL,TEXT("认识你才知道有一种心情叫做依恋。"),TEXT("致最爱的人_ZL") , MB_OK);
			  MessageBox(NULL,TEXT("无论如何，请收下我给你的礼物。"),TEXT("致最爱的人_ZL") , MB_OK);
              break;
	}
	
	loading_();

	MessageBox(NULL,TEXT("你以为这样就完了吗?我对你的爱何止如此。"),TEXT("致最爱的人_ZL") , MB_OK);

	love();

	system("pause");
	return 0;
}


void gotoxy(int x,int y)
{
    CONSOLE_SCREEN_BUFFER_INFO csbiInfo;                            
    HANDLE hConsoleOut;
    hConsoleOut = GetStdHandle(STD_OUTPUT_HANDLE);
    GetConsoleScreenBufferInfo(hConsoleOut,&csbiInfo);
    csbiInfo.dwCursorPosition.X = x;                                    
    csbiInfo.dwCursorPosition.Y = y;                                    
    SetConsoleCursorPosition(hConsoleOut,csbiInfo.dwCursorPosition);  
}

void loading_()
{
    i=0,m=4,n=3;
    system("color 3F");
	cout<<"╔══════════════════════════════════════╗";
	cout<<"║                                                                            ║";
	cout<<"║  ╱▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▏▔◥║";
 	cout<<"║  ▏                                                                  ▏%%  ║";
 	cout<<"║  ╲▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▏▁◢║";
    cout<<"║                                                                            ║";
    cout<<"║                                                                            ║";
    cout<<"║                                                                            ║";
    cout<<"║                            *   *   *   *                                   ║";
    cout<<"║                           *     * *     *                                  ║";
    cout<<"║                          *  ★   *  ★   *                                 ║";            
    cout<<"║                           *      ★     *                                  ║";
    cout<<"║                   >>>----   I love you!   ---->                            ║";
    cout<<"║                             *         *                                    ║";
    cout<<"║                               *  ★ *      　                              ║";
    cout<<"║                                *   *                                       ║";
    cout<<"║                                 * *                                        ║";
    cout<<"║                                  *                                         ║";
    cout<<"║                                                                            ║";
    cout<<"║                                                                            ║";
    cout<<"║                                                                            ║";
    cout<<"║                                                         软件1502           ║";
    cout<<"║                                                           李敬             ║";
    cout<<"╚══════════════════════════════════════╝";
    while(1)
	{
		  Sleep(30);
		  gotoxy(m+=2,n);
		  cout<<">-";
		  gotoxy(76,n);
	      printf("%2d",i+=3);	 // cout<<i+=3;
		  if(i==99)
		  {Sleep(1000);break;}
	}
	system("cls");
}


void love(){
	for (i=1; i<=8; i++){			
		cout<<endl;
		Sleep(100);
	}
	cout<<"                       ******************                           "<<endl;
	Sleep(200);
	cout<<"                   ***                   *                          "<<endl;
	Sleep(200);
	cout<<"                  *                        *                        "<<endl;
	Sleep(200);
	cout<<"               ***                          *                       "<<endl;
	Sleep(200);
	cout<<"              *                              *                      "<<endl;
	Sleep(200);
	cout<<"             *                                *                     "<<endl;
	Sleep(200);
	cout<<"            *                                  *                    "<<endl;
	Sleep(200);
	cout<<"            *              致最爱的人           *                   "<<endl;
	Sleep(200);
	cout<<"             *                                   *                  "<<endl;
	Sleep(200);
	cout<<"              *                ZL                 *                 "<<endl;
	Sleep(200);
	cout<<"               *                                  *                 "<<endl;
	Sleep(200);
	cout<<"              *                                  *                  "<<endl;
	Sleep(200);
	cout<<"             *                                  *                   "<<endl;
	Sleep(200);
	cout<<"            *                软件1502          *                    "<<endl;
	Sleep(200);
	cout<<"            *                                 *                     "<<endl;
	Sleep(200);
	cout<<"             *                 李敬          *                      "<<endl;
	Sleep(200);
	cout<<"              *                             *                       "<<endl;
	Sleep(200);
	cout<<"               ****                        *                        "<<endl;
	Sleep(200);
	cout<<"                   *                      *                         "<<endl;
	Sleep(200);
	cout<<"                    ***                  *                          "<<endl;
	Sleep(200);
	cout<<"                       ******************                           "<<endl;


	char c=3;
	
	system("color 3C");

	for (i=1; i<=5; i++){			
		cout<<endl;
		Sleep(180);
	}
	
	for (i=1; i<=3; i++) {	
		for (j=1; j<=28-2*i; j++)		cout<<" ";	
		for (k=1; k<=4*i+1; k++)		cout<<c;
		for (n=1; n<=13-4*i; n++)		cout<<" ";
		for (m=1; m<=4*i+1; m++)	    cout<<c;
		cout<<endl;
		Sleep(200);
	}
	
	for (i=1; i<=3; i++) { 
		for (j=1; j<=20+1; j++)			cout<<" ";
		for (k=1; k<=29; k++)			cout<<c;
		cout<<endl;
		Sleep(200);
	}
	
	for (i=7; i>=1; i--) {
		for (j=1; j<=36-2*i; j++)	 	cout<<" ";
		for (k=1; k<=4*i-1; k++)	    cout<<c;
	    cout<<endl;
		Sleep(200);
	}
	
	for (i=1; i<=35; i++)			
		cout<<" "; 
     	cout<<c;

	for (i=1; i<=8; i++){			
		cout<<endl;
		Sleep(180);
	}


    string strFileName;
 
	MessageBox(NULL,TEXT("宝贝，在这里输上love"),TEXT("致最爱的人_ZL") , MB_OK);

    cin >> strFileName;
 
	ifstream read_file(strFileName.c_str());
    string strLine;

    read_file >> strLine;

    for (string::size_type index = 0; index != strLine.size(); ++index)
     {
		
            cout << strLine[index] << flush;
            Sleep(80);
     }

	for (i=1; i<=4; i++){			
		cout<<endl;
		Sleep(180);
	}

	
	cout<<"          * *   * *   *    * *                  "<<endl;	Sleep(200);
    cout<<"        *     *     *   *      *                "<<endl;	Sleep(200);
    cout<<"     <========      *==        *==<<<<<<        "<<endl;	Sleep(200);
    cout<<"          *       *          *                  "<<endl;	Sleep(200);
    cout<<"           *   *     *    *                     "<<endl;	Sleep(200);
    cout<<"             *         *                        "<<endl<<endl;	Sleep(200);
    cout<<"        The end....."<<endl<<endl<<endl<<endl;


}
