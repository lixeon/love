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
    int result = MessageBox( NULL , TEXT("���֪?") , TEXT("�������_ZL") , MB_ICONINFORMATION|MB_YESNO);
    switch(result)
	{
    case IDYES:MessageBox(NULL,TEXT("��֪��������ģ������Ҷ���һ�����Ҳ�Ҫ���ݵ��´棬ֻ����һ������顣"),TEXT("�������_ZL"),MB_OK);
		       MessageBox(NULL,TEXT("��ϣ��˯ǰ���������㡣"),TEXT("�������_ZL") , MB_OK);
			   MessageBox(NULL,TEXT("�������У��Գ�ͤ�������Ъ��"),TEXT("�������_ZL") , MB_OK);
			   MessageBox(NULL,TEXT("�����û���ж��������Ҹ�������"),TEXT("�������_ZL") , MB_OK);
			   break;
	case IDNO:MessageBox(NULL,TEXT("���������?"),TEXT("���̽���"),MB_OK);
			  MessageBox(NULL,TEXT("��ʶ���֪����һ���������������"),TEXT("�������_ZL") , MB_OK);
			  MessageBox(NULL,TEXT("������Σ��������Ҹ�������"),TEXT("�������_ZL") , MB_OK);
              break;
	}
	
	loading_();

	MessageBox(NULL,TEXT("����Ϊ������������?�Ҷ���İ���ֹ��ˡ�"),TEXT("�������_ZL") , MB_OK);

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
	cout<<"�X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�[";
	cout<<"�U                                                                            �U";
	cout<<"�U  �u�������������������������������������������������������������������������U";
 	cout<<"�U  ��                                                                  ��%%  �U";
 	cout<<"�U  �v�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x���x���U";
    cout<<"�U                                                                            �U";
    cout<<"�U                                                                            �U";
    cout<<"�U                                                                            �U";
    cout<<"�U                            *   *   *   *                                   �U";
    cout<<"�U                           *     * *     *                                  �U";
    cout<<"�U                          *  ��   *  ��   *                                 �U";            
    cout<<"�U                           *      ��     *                                  �U";
    cout<<"�U                   >>>----   I love you!   ---->                            �U";
    cout<<"�U                             *         *                                    �U";
    cout<<"�U                               *  �� *      ��                              �U";
    cout<<"�U                                *   *                                       �U";
    cout<<"�U                                 * *                                        �U";
    cout<<"�U                                  *                                         �U";
    cout<<"�U                                                                            �U";
    cout<<"�U                                                                            �U";
    cout<<"�U                                                                            �U";
    cout<<"�U                                                         ���1502           �U";
    cout<<"�U                                                           �             �U";
    cout<<"�^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a";
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
	cout<<"            *              �������           *                   "<<endl;
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
	cout<<"            *                ���1502          *                    "<<endl;
	Sleep(200);
	cout<<"            *                                 *                     "<<endl;
	Sleep(200);
	cout<<"             *                 �          *                      "<<endl;
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
 
	MessageBox(NULL,TEXT("����������������love"),TEXT("�������_ZL") , MB_OK);

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
