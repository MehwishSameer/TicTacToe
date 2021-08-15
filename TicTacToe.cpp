`#include<iostream>
#include<cstring>
#include<stdlib.h>
using namespace std;

int win(char decide){
	if(decide=='X')
	cout<<"\n\n                                       *********PLAYER 1 WINS*********";
	else
	cout<<"\n\n                                       *********PLAYER 2 WINS*********";
	return 0;
}

int playArea(char box[3][3]){
	char decider=' ';
	int count=0;
	cout<<"\n\n\n";
for(int i=0;i<3;i++){
	cout<<"                                             ";
	if(box[i][0]==box[i][1]&&box[i][1]==box[i][2]&&box[i][0]!='\0')
	decider=box[i][0];
	for(int j=0;j<3;j++){
	if(box[1][j]==box[2][j]&&box[0][j]==box[1][j]&&box[1][j]!='\0')
	decider=box[1][j];
	if(box[i][j]!='\0')
	count++;
	cout<<box[i][j];
	if(j!=2)
	cout<<" | ";
}
if(i==2)
break;
cout<<endl;
cout<<"                                           -------------"<<endl;
}
if(((box[0][0]==box[1][1]&&box[0][0]==box[2][2])||(box[0][2]==box[1][1]&&box[1][1]==box[2][0]))&&box[1][1]!='\0'){
	decider=box[1][1];
	return win(decider);
}

else if(decider!=' ')
	return win(decider);

else if(count==9){
	cout<<"\n                                       *********DRAW :(*********";
	return 0;
}
return 1;
}

void inputCheck(int input,int *row, int *col){
	while(true){
	if(input<4&&input>0){
	*row=0;
	*col=input-1;
	break;
}
else if(input<7&&input>3){
	*row=1;
	*col=input-4;
	break;
}
else if(input<10&&input>6){
	*row=2;
	*col=input-7;
	break;
}
else{
cout<<"\n                                          INVALID INPUT\n\n                                          Enter Again:";
cin>>input;
}
}
}

main(){
char box[3][3],option;
int input,row,col,w=0,end;
box[2][2]='\0';

cout<<"                    =================== WELCOME TO TICTACTOE GAME==================="<<endl;

while(true)
{
	int i=1;
cout<<"\n                                         Player 1's turn(X):";
cin>>input;
inputCheck(input,&row,&col);
if(box[row][col]=='\0')
box[row][col]='X';
else{
cout<<"                                           The box is taken\n                                       Choose any another box";
continue;
}
system("CLS");
end=playArea(box);
cout<<endl;

if(end==0){
cout<<"                                          Hope you enjoyed it :)"<<endl;
cout<<"                                    Want to give it one more shot!!!(Y):";
cin>>option;
if(option=='Y')
memset(box,'\0',9);
else
break;}

while(i==1){
cout<<"\n                                         Player 2's turn(O):";
cin>>input;
inputCheck(input,&row,&col);
if(box[row][col]=='\0')
box[row][col]='O';
else{
cout<<"                                           The box is taken\n                                       Choose any another box";
continue;}
i++;
}
system("CLS");
end=playArea(box);
cout<<endl;

if(end==0){
cout<<"                                          Hope you enjoyed it :)"<<endl;
cout<<"                                    Want to give it one more shot!!!(Y):";
cin>>option;
if(option=='Y')
memset(box,'\0',9);
else
break;
}

}}

