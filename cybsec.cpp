//#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int c;
    do{ cout<<"\033[2J\033[1;1H";
        cout<<"1.The number of each single digit numbers in a given Number."<<endl;
        cout<<"2.Sum of the digits of the first and the last digits of a four digit number."<<endl;
        cout<<"3.Check whether a given number is a leap year."<<endl;
        cout<<"4.The biggest of three numbers."<<endl;
        cout<<"5.Sum of squares of N numbers."<<endl;
        cout<<"6.Sum and Average of N numbers."<<endl;
        cout<<"7.Retailer Trading System."<<endl;
        cout<<"8.Armstrong numbers in a range."<<endl;
        cout<<"9.Increase of population."<<endl;
        cout<<"10.sum of digits of a number."<<endl;
        cout<<"0.exit."<<endl;
        cout<<""<<endl;
        cout<<">>";
        cin>>c;
        switch(c)
        {
            case 1:cout<<"\033[2J\033[1;1H";

                {
                    int n1,n2,i,j,r,sum0=0,sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,sum6=0,sum7=0,sum8=0,sum9=0;
                cout<<"The range of numbers: \n";
                cin>>n1>>n2;
                for(i=n1;i<=n2;i++)
                {
                    j=i;
                    while(j)
                    {
                        r=j%10;
                        switch(r)
                        {
                            case 1: sum1=sum1+1;
                            break;
                            case 2:sum2=sum2+1;
                            break;
                            case 3: sum3=sum3+1;
                            break;
                            case 4: sum4=sum4+1;
                            break;
                            case 5: sum5=sum5+1;
                            break;
                            case 6: sum6=sum6+1;
                            break;
                            case 7: sum7=sum7+1;
                            break;
                            case 8: sum8=sum8+1;
                            break;
                            case 9: sum9=sum9+1;
                            break;
                            case 0: sum0=sum0+1;
                            break;
                            
                        }
                        j/=10;
                    }
                }
                cout<<"The no of 0s are "<<sum0<<endl;
                cout<<"The no of 1s are "<<sum1<<endl;
                cout<<"The no of 2s are "<<sum2<<endl;
                cout<<"The no of 3s are "<<sum3<<endl;
                cout<<"The no of 4s are "<<sum4<<endl;
                cout<<"The no of 5s are "<<sum5<<endl;
                cout<<"The no of 6s are "<<sum6<<endl;
                cout<<"The no of 7s are "<<sum7<<endl;
                cout<<"The no of 8s are "<<sum8<<endl;
                cout<<"The no of 9s are "<<sum9<<endl;
                }
                break;    
            case 2:cout<<"\033[2J\033[1;1H";
                {                
                int x;
                cout<<"Enter the 4- digit number: ";
                cin>>x;
                cout<<"The sum of the First and Last digits of "<<x<<" is "<<x/1000+x%10<<endl;
                }
            break;
            case 3:cout<<"\033[2J\033[1;1H";
            {
                {
                int year;
                cout<<"Enter the Year:";
                cin>>year;
                if(year%4==0)
                {
                    if(year%100==0 && year%400==0)
                    cout<<"The Year "<<year<<" Leap year"<<endl;
                    else if(year%100==0 && year%400!=0)
                    cout<<"The Year is "<<year<<" is not a leap year"<<endl;
                    else
                    cout<<"The Year "<<year<<" is a Leap year"<<endl;
                }
                else
                {
                    cout<<"The Year is "<<year<<" is not a leap year"<<endl;
                }
                
            }
                    
            }
            break;
            case 4:cout<<"\033[2J\033[1;1H";
                    {
                        {
            int a,b,c;
            cout<<"Enter three numbers:"<<endl;
            cin>>a>>b>>c;
            if(a>=b && a>=c)
            {
                if(a%2==0)
                {
                    cout<<"The biggest of three numbers "<<a<<" is even"<<endl;
                }
                else
                cout<<"The biggest of three numbers "<<a<<" is odd"<<endl;
            }
            if(b>=a && b>=c)
            {
                if(b%2==0)
                {
                    cout<<"The biggest of three numbers "<<b<<" is even"<<endl;
                }
                else
                cout<<"The biggest of three numbers "<<b<<" is odd"<<endl;
            }
            if(c>=b && a<=c)
            {
                if(c%2==0)
                {
                    cout<<"The biggest of three numbers "<<c<<" is even"<<endl;
                }
                else
                cout<<"The biggest of three numbers "<<c<<" is odd"<<endl;
            }		
            
        }
            }
            break;
            case 5:cout<<"\033[2J\033[1;1H";
            {
            {
                int n;
                cout<<"Enter the first n numbers: ";
                cin>>n;
                cout<<"The sum of the squares of the first n numbers is "<<(n*(n+1)*(n+n+1))/6<<endl;
                
            }

            }
            break;
            case 6:cout<<"\033[2J\033[1;1H";
            {
                float n,a,i=0,sum=0;
                    cout<<"Enter the no of numbers: ";
                    cin>>n;
                    cout<<"Enter the numbers :"<<endl;
                    while(i<n)
                    {
                        cin>>a;
                        sum=sum+a;
                        i++;
                    }
                    cout<<"The sum of The "<<n<<" numbers is: "<<sum<<endl;
                    cout<<"The average of The "<<n<<" numbers is: "<<sum/n;
                    
            }
            break;
            case 7:cout<<"\033[2J\033[1;1H";
            {
                float cp,sp,d,nsp;
                cout<<"Enter the Cost price for the retailer:";
                cin>>cp;
                cout<<"Enter the Selling price by the retailer:";
                cin>>sp;
                cout<<"Enter the discount by the retailer in %:";
                cin>>d;
                nsp=sp-(sp*d)/100;
                if(nsp>=cp)
                {
                    cout<<"The retailer is having a profit of "<<nsp-cp<<endl;
                }
                else
                {
                    cout<<"The retailer is suffering a loss of "<<cp-nsp<<endl;
                }
            }
            break;
            case 8:cout<<"\033[2J\033[1;1H";
            {
                int n1,n2,i,digit,sum,num;
                    cout<<"Enter the range of numbers:"<<endl;
                    cin>>n1>>n2;
                    cout<<"The Armstrong numbers are:"<<endl;
                    for(i=n1;i<=n2;i++)
                    {
                        sum=0;
                        num=i;
                        
                        for(;num>0;num/=10)
                        {
                            digit=num%10;
                            sum=sum+digit*digit*digit;
                        }
                        if(sum==i)
                        {
                            cout<<i<<endl;
                        }
                    }
            }
            break;
            case 9:cout<<"\033[2J\033[1;1H";
            {
            float a,p,r,t=1;
                cout<<"Enter the current population";
                cin>>p;
                cout<<"Enter the rate of increase of population per year in %";
                cin>>r;
                cout<<"Enter the final population";
                cin>>a;
                while(p<=a)
                {
                    p=p+(p*r)/100;
                    cout<<"After "<<t<<" year population is "<<p<<endl;
                    t++;
                }
            }
            break;
            case 10:cout<<"\033[2J\033[1;1H";
            {
            int num,n,sum=0;
                cout<<"Enter the number: ";
                cin>>num;
                n=num;
                while(n!=0)
                {
                    sum=sum+n%10;
                    n=n/10;
                }
                cout<<"The sum of digits of the number "<<num<<" is "<<sum<<endl;

            }
            break;
            
                    
        }
        cout<<"press Enter to continue>>";
        cin.ignore().get();

    }while(c);
    return 0;
}