// Question : https://www.codechef.com/problems/UCL

#include<iostream>
#include<unordered_map>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		unordered_map<string,int> mp,points,goal_diff;
		string s1,s2,vs;
		int a,b;
		for(int i=0 ; i<12 ; i++)
		{
			cin>>s1>>a>>vs>>b>>s2;
			if(points.find(s1)==points.end() && points.find(s2)==points.end())
			{
				if(a>b)
				{
					points[s1]=3;
					points[s2]=0;
				}
				else if(a<b)
				{
					points[s2]=3;
					points[s1]=0;
				}
				else
				{
					points[s1]=1;
					points[s2]=1;
				}
				goal_diff[s1]=a-b;
				goal_diff[s2]=b-a;
			}
			else if(points.find(s1)!=points.end() && points.find(s2)==points.end())
			{
				if(a>b)
				{
					points[s1]+=3;
					points[s2]=0;
				}
				else if(a<b)
				{
					points[s2]=3;
					points[s1]+=0;
				}
				else
				{
					points[s1]+=1;
					points[s2]=1;
				}
				goal_diff[s1]+=a-b;
				goal_diff[s2]=b-a;	
			}
			else if(points.find(s1)==points.end() && points.find(s2)!=points.end())
			{
				if(a>b)
				{
					points[s1]=3;
					points[s2]+=0;
				}
				else if(a<b)
				{
					points[s2]+=3;
					points[s1]=0;
				}
				else
				{
					points[s1]=1;
					points[s2]+=1;
				}
				goal_diff[s1]=a-b;
				goal_diff[s2]+=b-a;
			}
			else if(points.find(s1)!=points.end() && points.find(s2)!=points.end())
			{
				if(a>b)
				{
					points[s1]+=3;
					points[s2]+=0;
				}
				else if(a<b)
				{
					points[s2]+=3;
					points[s1]+=0;
				}
				else
				{
					points[s1]+=1;
					points[s2]+=1;
				}
				goal_diff[s1]+=a-b;
				goal_diff[s2]+=b-a;
			}
		}
		string first_name,second_name;
		unordered_map<string,int>::iterator itr;
		int first_point=-1,second_point=-1;
		for(itr=points.begin() ; itr!=points.end() ; itr++)
		{
			if(first_point<itr->second)
			{
				first_point=itr->second;
				first_name=itr->first;
			}
			if(first_point==itr->second)
			{
				if(goal_diff.at(first_name) < goal_diff.at(itr->first))
				{
					first_point=itr->second;
					first_name=itr->first;
				}
			}
		}
		points.erase(first_name);
		goal_diff.erase(first_name);
		for(itr=points.begin() ; itr!=points.end() ; itr++)
		{
			if(second_point<itr->second)
			{
				second_point=itr->second;
				second_name=itr->first;
			}
			if(second_point==itr->second)
			{
				if(goal_diff.at(second_name) < goal_diff.at(itr->first))
				{
					second_point=itr->second;
					second_name=itr->first;
				}
			}
		}
		cout<<first_name<<" "<<second_name<<"\n";
	}
	return 0;
}