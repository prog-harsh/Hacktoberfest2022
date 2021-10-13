// Question : https://www.codechef.com/JULY20B/problems/ADAKING

// Solution
#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        if(k==1)
        {
        	cout<<"........\n";
        	cout<<"........\n";
        	cout<<"........\n";
        	cout<<".XXX....\n";
        	cout<<".XOX....\n";
        	cout<<".XXX....\n";
        	cout<<"........\n";
        	cout<<"........\n";
		}
		else if(k==2)
		{
			cout<<"........\n";
        	cout<<"........\n";
        	cout<<".XXX....\n";
        	cout<<".X.X....\n";
        	cout<<".XOX....\n";
        	cout<<".XXX....\n";
        	cout<<"........\n";
        	cout<<"........\n";
		}
		else if(k==3)
		{
			cout<<"........\n";
        	cout<<"........\n";
        	cout<<".XXX....\n";
        	cout<<".X.X....\n";
        	cout<<".XOX....\n";
        	cout<<".X.X....\n";
        	cout<<".XXX....\n";
        	cout<<"........\n";
		}
		else if(k==4)
		{
			cout<<"........\n";
        	cout<<"........\n";
        	cout<<".XXX....\n";
        	cout<<"XX.X....\n";
        	cout<<"X.OX....\n";
        	cout<<"XX.X....\n";
        	cout<<".XXX....\n";
        	cout<<"........\n";
		}
		else if(k==5)
		{
			cout<<"........\n";
        	cout<<"........\n";
        	cout<<"........\n";
        	cout<<"........\n";
        	cout<<"........\n";
        	cout<<"XXX.....\n";
        	cout<<"..XX....\n";
        	cout<<"O..X....\n";
		}
		else if(k==6)
		{
			cout<<"........\n";
        	cout<<".XXX....\n";
        	cout<<".X.X....\n";
        	cout<<"XX.XX...\n";
        	cout<<"X.O.X...\n";
        	cout<<"XX.XX...\n";
        	cout<<".XXX....\n";
        	cout<<"........\n";
		}
		else if(k==7)
		{
			cout<<".XXX....\n";
        	cout<<".X.X....\n";
        	cout<<".X.X....\n";
        	cout<<"XX.XX...\n";
        	cout<<"X.O.X...\n";
        	cout<<"XX.XX...\n";
        	cout<<".XXX....\n";
        	cout<<"........\n";
		}
		else if(k==8)
		{
			cout<<".XXX....\n";
        	cout<<".X.X....\n";
        	cout<<".X.X....\n";
        	cout<<"XX.XX...\n";
        	cout<<"X.O.X...\n";
        	cout<<"XX.XX...\n";
        	cout<<".X.X....\n";
        	cout<<".XXX....\n";
		}
		else if(k==9)
		{
			cout<<"........\n.XXXXXXX\n.X.O...X\n.X...XXX\n.XXX.X..\n...XXX..\n........\n........\n";
		}
		else if(k==10)
		{
			cout<<"X.X.X...\n";
        	cout<<"XX.XX...\n";
        	cout<<".X.X....\n";
        	cout<<"XX.XX...\n";
        	cout<<"X.O.X...\n";
        	cout<<"XX.XX...\n";
        	cout<<".X.X....\n";
        	cout<<".XXX....\n";
		}
		else if(k==11)
		{
			cout<<"X.X.X...\n";
        	cout<<"XX.XX...\n";
        	cout<<".X.X....\n";
        	cout<<"XX.XX...\n";
        	cout<<"X.O.X...\n";
        	cout<<"XX.XX...\n";
        	cout<<"XX.X....\n";
        	cout<<"X.XX....\n";
		}
		else if(k==12)
		{
			cout<<"X.X.X...\n";
        	cout<<"XX.XX...\n";
        	cout<<".X.X....\n";
        	cout<<"XX.XX...\n";
        	cout<<"X.O.X...\n";
        	cout<<"XX.XX...\n";
        	cout<<"XX.XX...\n";
        	cout<<"X.X.X...\n";
		}
		else if(k==13)
		{
			cout<<"X.X.X...\n";
        	cout<<"XX.XX...\n";
        	cout<<".X.X....\n";
        	cout<<"XX.XXX..\n";
        	cout<<"X.O..X..\n";
        	cout<<"XX.XXX..\n";
        	cout<<"XX.XX...\n";
        	cout<<"X.X.X...\n";
		}
		else if(k==14)
		{
			cout<<"X.X.X...\n";
        	cout<<"XX.XX...\n";
        	cout<<"XX.X....\n";
        	cout<<".X.XXX..\n";
        	cout<<"X.O..X..\n";
        	cout<<"XX.XXX..\n";
        	cout<<"XX.XX...\n";
        	cout<<"X.X.X...\n";
		}
		else if(k==15)
		{
			cout<<"X.X.X...\n";
        	cout<<"XX.XX...\n";
        	cout<<"XX.X....\n";
        	cout<<".X.XXX..\n";
        	cout<<"X.O..X..\n";
        	cout<<"XX.XXX..\n";
        	cout<<"XX.XXX..\n";
        	cout<<"X.X..X..\n";
		}
		else if(k==16)
		{
			cout<<"X.X.X...\n";
        	cout<<"XX.XX...\n";
        	cout<<"XX.X....\n";
        	cout<<".X.XXX..\n";
        	cout<<"X.O..X..\n";
        	cout<<"XX.XXX..\n";
        	cout<<"XX.XXX..\n";
        	cout<<"..X..X..\n";
		}
		else if(k==17)
		{
			cout<<"..X.X...\n";
        	cout<<"XX.XX...\n";
        	cout<<"XX.X....\n";
        	cout<<".X.XXX..\n";
        	cout<<"X.O..X..\n";
        	cout<<"XX.XXX..\n";
        	cout<<"XX.XXX..\n";
        	cout<<"..X..X..\n";
		}
		else if(k==18)
		{
			cout<<"....X...\n";
        	cout<<"XX.XX...\n";
        	cout<<"XX.X....\n";
        	cout<<".X.XXX..\n";
        	cout<<"X.O..X..\n";
        	cout<<"XX.XXX..\n";
        	cout<<"XX.XXX..\n";
        	cout<<"..X..X..\n";
		}
		else if(k==19)
		{
			cout<<"....X...\n";
        	cout<<"X..XX...\n";
        	cout<<"XX.X....\n";
        	cout<<".X.XXX..\n";
        	cout<<"X.O..X..\n";
        	cout<<"XX.XXX..\n";
        	cout<<"XX.XXX..\n";
        	cout<<"..X..X..\n";
		}
		else if(k==20)
		{
			cout<<"....X...\n";
        	cout<<"...XX...\n";
        	cout<<"XX.X....\n";
        	cout<<".X.XXX..\n";
        	cout<<"X.O..X..\n";
        	cout<<"XX.XXX..\n";
        	cout<<"XX.XXX..\n";
        	cout<<"..X..X..\n";
		}
		else if(k==21)
		{
			cout<<"....X...\n";
        	cout<<"...XX...\n";
        	cout<<"XX.X....\n";
        	cout<<".X.XXX..\n";
        	cout<<"X.O..X..\n";
        	cout<<"XX.XXX..\n";
        	cout<<"XX.XXX..\n";
        	cout<<".....X..\n";
		}
		else if(k==22)
		{
			cout<<"....X...\n";
        	cout<<"...XX...\n";
        	cout<<"XX.X....\n";
        	cout<<".X.XXX..\n";
        	cout<<"X.O..X..\n";
        	cout<<"XX.XXX..\n";
        	cout<<"X..XXX..\n";
        	cout<<".....X..\n";
		}
		else if(k==23)
		{
			cout<<"....X...\n";
        	cout<<"...XX...\n";
        	cout<<"XX.X....\n";
        	cout<<".X.XXX..\n";
        	cout<<"X.O..X..\n";
        	cout<<"XX.XXX..\n";
        	cout<<"...XXX..\n";
        	cout<<".....X..\n";
		}
		else if(k==24)
		{
			cout<<"....X...\n";
        	cout<<"...XX...\n";
        	cout<<"XX.X....\n";
        	cout<<".X.XXX..\n";
        	cout<<"X.O..X..\n";
        	cout<<"X..XXX..\n";
        	cout<<"...XXX..\n";
        	cout<<".....X..\n";
		}
		else if(k==25)
		{
			cout<<"....X...\n";
        	cout<<"...XX...\n";
        	cout<<"XX.X....\n";
        	cout<<".X.XXX..\n";
        	cout<<"X.O..X..\n";
        	cout<<"...XXX..\n";
        	cout<<"...XXX..\n";
        	cout<<".....X..\n";
		}
		else if(k==26)
		{
			cout<<"....X...\n";
        	cout<<"...XX...\n";
        	cout<<"XX.X....\n";
        	cout<<".X.XXX..\n";
        	cout<<"..O..X..\n";
        	cout<<"...XXX..\n";
        	cout<<"...XXX..\n";
        	cout<<".....X..\n";
		}
		else if(k==27)
		{
			cout<<"....X...\n";
        	cout<<"...XX...\n";
        	cout<<"XX.X....\n";
        	cout<<"...XXX..\n";
        	cout<<"..O..X..\n";
        	cout<<"...XXX..\n";
        	cout<<"...XXX..\n";
        	cout<<".....X..\n";
		}
		else if(k==28)
		{
			cout<<"....X...\n";
        	cout<<"...XX...\n";
        	cout<<"X..X....\n";
        	cout<<"...XXX..\n";
        	cout<<"..O..X..\n";
        	cout<<"...XXX..\n";
        	cout<<"...XXX..\n";
        	cout<<".....X..\n";
		}
		else if(k==29)
		{
			cout<<"....X...\n";
        	cout<<"...XX...\n";
        	cout<<"...X....\n";
        	cout<<"...XXX..\n";
        	cout<<"..O..X..\n";
        	cout<<"...XXX..\n";
        	cout<<"...XXX..\n";
        	cout<<".....X..\n";
		}
		else if(k==30)
		{
			cout<<"....X...\n";
        	cout<<"...XX...\n";
        	cout<<"....X...\n";
        	cout<<"...XXX..\n";
        	cout<<"..O..X..\n";
        	cout<<"...XXX..\n";
        	cout<<"...XXX..\n";
        	cout<<".....X..\n";
		}
		else if(k==31)
		{
			cout<<"....X...\n";
        	cout<<"...XX...\n";
        	cout<<"....X...\n";
        	cout<<"...XXX..\n";
        	cout<<"..O..X..\n";
        	cout<<"....XX..\n";
        	cout<<"...XXX..\n";
        	cout<<".....X..\n";
		}
		else if(k==32)
		{
			cout<<"....X...\n";
        	cout<<"...XX...\n";
        	cout<<"....X...\n";
        	cout<<"...XXX..\n";
        	cout<<"..O..X..\n";
        	cout<<"....XX..\n";
        	cout<<"....XX..\n";
        	cout<<".....X..\n";
		}
		else if(k==33)
		{
			cout<<"....X...\n";
        	cout<<"...XX...\n";
        	cout<<"....X...\n";
        	cout<<"....XX..\n";
        	cout<<"..O..X..\n";
        	cout<<"....XX..\n";
        	cout<<"....XX..\n";
        	cout<<".....X..\n";
		}
		else if(k==34)
		{
			cout<<"....X...\n";
        	cout<<"...XX...\n";
        	cout<<"....X...\n";
        	cout<<"....XX..\n";
        	cout<<"..O..X..\n";
        	cout<<".....X..\n";
        	cout<<"....XX..\n";
        	cout<<".....X..\n";
		}
		else if(k==35)
		{
			cout<<"....X...\n";
        	cout<<"...XX...\n";
        	cout<<"....XX..\n";
        	cout<<".....X..\n";
        	cout<<"..O..X..\n";
        	cout<<".....X..\n";
        	cout<<"....XX..\n";
        	cout<<".....X..\n";
		}
		else if(k==36)
		{
			cout<<"....X...\n";
        	cout<<"...XX...\n";
        	cout<<"....XX..\n";
        	cout<<".....X..\n";
        	cout<<"..O..X..\n";
        	cout<<".....X..\n";
        	cout<<".....X..\n";
        	cout<<".....X..\n";
		}
		else if(k==37)
		{
			cout<<"....X...\n";
        	cout<<"...XXX..\n";
        	cout<<".....X..\n";
        	cout<<".....X..\n";
        	cout<<"..O..X..\n";
        	cout<<".....X..\n";
        	cout<<".....X..\n";
        	cout<<".....X..\n";
		}
		else if(k==38)
		{
			cout<<"....X...\n";
        	cout<<"....XX..\n";
        	cout<<".....X..\n";
        	cout<<".....X..\n";
        	cout<<"..O..X..\n";
        	cout<<".....X..\n";
        	cout<<".....X..\n";
        	cout<<".....X..\n";
		}
		else if(k==39)
		{
			cout<<"....XX..\n";
        	cout<<".....X..\n";
        	cout<<".....X..\n";
        	cout<<".....X..\n";
        	cout<<"..O..X..\n";
        	cout<<".....X..\n";
        	cout<<".....X..\n";
        	cout<<".....X..\n";
		}
		else if(k==40)
		{
			cout<<".....X..\n";
        	cout<<".....X..\n";
        	cout<<".....X..\n";
        	cout<<".....X..\n";
        	cout<<"..O..X..\n";
        	cout<<".....X..\n";
        	cout<<".....X..\n";
        	cout<<".....X..\n";
		}
		else if(k==41)
		{
			cout<<"......X.\n";
        	cout<<".....XX.\n";
        	cout<<".....X..\n";
        	cout<<".....X..\n";
        	cout<<"..O..X..\n";
        	cout<<".....X..\n";
        	cout<<".....X..\n";
        	cout<<".....X..\n";
		}
		else if(k==42)
		{
			cout<<"......X.\n";
        	cout<<"......X.\n";
        	cout<<".....XX.\n";
        	cout<<".....X..\n";
        	cout<<"..O..X..\n";
        	cout<<".....X..\n";
        	cout<<".....X..\n";
        	cout<<".....X..\n";
		}
		else if(k==43)
		{
			cout<<"......X.\n";
        	cout<<"......X.\n";
        	cout<<"......X.\n";
        	cout<<".....XX.\n";
        	cout<<"..O..X..\n";
        	cout<<".....X..\n";
        	cout<<".....X..\n";
        	cout<<".....X..\n";
		}
		else if(k==44)
		{
			cout<<"......X.\n";
        	cout<<"......X.\n";
        	cout<<"......X.\n";
        	cout<<"......X.\n";
        	cout<<"..O..XX.\n";
        	cout<<".....X..\n";
        	cout<<".....X..\n";
        	cout<<".....X..\n";
		}
		else if(k==45)
		{
			cout<<"......X.\n";
        	cout<<"......X.\n";
        	cout<<"......X.\n";
        	cout<<"......X.\n";
        	cout<<"..O...X.\n";
        	cout<<".....XX.\n";
        	cout<<".....X..\n";
        	cout<<".....X..\n";
		}
		else if(k==46)
		{
			cout<<"......X.\n";
        	cout<<"......X.\n";
        	cout<<"......X.\n";
        	cout<<"......X.\n";
        	cout<<"..O...X.\n";
        	cout<<"......X.\n";
        	cout<<".....XX.\n";
        	cout<<".....X..\n";
		}
		else if(k==47)
		{
			cout<<"......X.\n";
        	cout<<"......X.\n";
        	cout<<"......X.\n";
        	cout<<"......X.\n";
        	cout<<"..O...X.\n";
        	cout<<"......X.\n";
        	cout<<"......X.\n";
        	cout<<".....XX.\n";
		}
		else if(k==48)
		{
			cout<<"......X.\n";
        	cout<<"......X.\n";
        	cout<<"......X.\n";
        	cout<<"......X.\n";
        	cout<<"..O...X.\n";
        	cout<<"......X.\n";
        	cout<<"......X.\n";
        	cout<<"......X.\n";
		}
		else if(k==49)
		{
			cout<<".......X\n";
        	cout<<"......XX\n";
        	cout<<"......X.\n";
        	cout<<"......X.\n";
        	cout<<"..O...X.\n";
        	cout<<"......X.\n";
        	cout<<"......X.\n";
        	cout<<"......X.\n";
		}
		else if(k==50)
		{
			cout<<".......X\n";
        	cout<<".......X\n";
        	cout<<"......XX\n";
        	cout<<"......X.\n";
        	cout<<"..O...X.\n";
        	cout<<"......X.\n";
        	cout<<"......X.\n";
        	cout<<"......X.\n";
		}
		else if(k==51)
		{
			cout<<".......X\n";
        	cout<<".......X\n";
        	cout<<".......X\n";
        	cout<<"......XX\n";
        	cout<<"..O...X.\n";
        	cout<<"......X.\n";
        	cout<<"......X.\n";
        	cout<<"......X.\n";
		}
		else if(k==52)
		{
			cout<<".......X\n";
        	cout<<".......X\n";
        	cout<<".......X\n";
        	cout<<".......X\n";
        	cout<<"..O...XX\n";
        	cout<<"......X.\n";
        	cout<<"......X.\n";
        	cout<<"......X.\n";
		}
		else if(k==53)
		{
			cout<<".......X\n";
        	cout<<".......X\n";
        	cout<<".......X\n";
        	cout<<".......X\n";
        	cout<<"..O....X\n";
        	cout<<"......XX\n";
        	cout<<"......X.\n";
        	cout<<"......X.\n";
		}
		else if(k==54)
		{
			cout<<".......X\n";
        	cout<<".......X\n";
        	cout<<".......X\n";
        	cout<<".......X\n";
        	cout<<"..O....X\n";
        	cout<<".......X\n";
        	cout<<"......XX\n";
        	cout<<"......X.\n";
		}
		else if(k==55)
		{
			cout<<".......X\n";
        	cout<<".......X\n";
        	cout<<".......X\n";
        	cout<<".......X\n";
        	cout<<"..O....X\n";
        	cout<<".......X\n";
        	cout<<".......X\n";
        	cout<<"......XX\n";
		}
		else if(k==56)
		{
			cout<<".......X\n";
        	cout<<".......X\n";
        	cout<<".......X\n";
        	cout<<".......X\n";
        	cout<<"..O....X\n";
        	cout<<".......X\n";
        	cout<<".......X\n";
        	cout<<".......X\n";
		}
		else if(k==57)
		{
			cout<<"........\n";
        	cout<<".......X\n";
        	cout<<".......X\n";
        	cout<<".......X\n";
        	cout<<"..O....X\n";
        	cout<<".......X\n";
        	cout<<".......X\n";
        	cout<<".......X\n";
		}
		else if(k==58)
		{
			cout<<"........\n";
        	cout<<"........\n";
        	cout<<".......X\n";
        	cout<<".......X\n";
        	cout<<"..O....X\n";
        	cout<<".......X\n";
        	cout<<".......X\n";
        	cout<<".......X\n";
		}
		else if(k==59)
		{
			cout<<"........\n";
        	cout<<"........\n";
        	cout<<"........\n";
        	cout<<".......X\n";
        	cout<<"..O....X\n";
        	cout<<".......X\n";
        	cout<<".......X\n";
        	cout<<".......X\n";
		}
		else if(k==60)
		{
			cout<<"........\n";
        	cout<<"........\n";
        	cout<<"........\n";
        	cout<<"........\n";
        	cout<<"..O....X\n";
        	cout<<".......X\n";
        	cout<<".......X\n";
        	cout<<".......X\n";
		}
		else if(k==61)
		{
			cout<<"........\n";
        	cout<<"........\n";
        	cout<<"........\n";
        	cout<<"........\n";
        	cout<<"..O.....\n";
        	cout<<".......X\n";
        	cout<<".......X\n";
        	cout<<".......X\n";
		}
		else if(k==62)
		{
			cout<<"........\n";
        	cout<<"........\n";
        	cout<<"........\n";
        	cout<<"........\n";
        	cout<<"..O.....\n";
        	cout<<"........\n";
        	cout<<".......X\n";
        	cout<<".......X\n";
		}
		else if(k==63)
		{
			cout<<"........\n";
        	cout<<"........\n";
        	cout<<"........\n";
        	cout<<"........\n";
        	cout<<"..O.....\n";
        	cout<<"........\n";
        	cout<<"........\n";
        	cout<<".......X\n";
		}
		else if(k==64)
		{
			cout<<"........\n........\n........\n...O....\n........\n........\n........\n........\n";
		}
    }
	return 0;
}
