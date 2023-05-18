#include<bits/stdc++.h>
#include<string.h>
using namespace std;

struct fawber
{
    char name[25];
    int id;
    char sec_tion[10];
    float resu_lt;
    char bl00d[5];
} a[100],tem;

int faw = 0;

void enter ()
{
    int i,x,j,id;
    char n[30],s[10],b[5];
    float r;
    cout<<"\nEnter number of students' information to add?\n\nChoice: "<<endl;
    cin>>x;
    if(x<=0)
    {
        cout<<"\nSorry, Invalid number "<<endl;;
    }

    if(faw >= 200)
    {
        cout<<"\nLimit is 200."<<endl;
    }

    else
    {
        getchar();
        for(i=faw,j=1; i<x+faw; i++,j++)
        {
            cout<<"\n-> Student information for "<<j;
            cout<<"\n-> Enter the name: ";
            gets(n);
            strcpy(a[i].name,n);
            cout<<"\n-> Enter ID(Use only number except (-)): ";
            cin>>id;
            a[i].id=id;
            printf("\n-> sec_tion: ");
            getchar();
            gets(s);
            strcpy(a[i].sec_tion,s);
            printf("\n-> resu_lt: ");
            cin>>r;
            a[i].resu_lt=r;
            printf("\n-> Enter bl00d: ");
            getchar();
            gets(b);
            strcpy(a[i].bl00d,b);


        }
        faw = faw + x;
    }
}

void remove_info()
{
    int d,i,count=0;
    if(faw<=0)
        cout<<"Sorry, no information for remove."<<endl;
    else
    {
        cout<<"Enter the id for remove\n"<<endl;;

        cin>>d;



        for(i=0; i<faw; i++)
        {
            if(a[i].id==d)
            {
                strcpy(a[i].name,a[faw-1].name);
                a[i].id=a[faw-1].id;
                strcpy(a[i].sec_tion,a[faw-1].sec_tion);
                a[i].resu_lt=a[faw-1].resu_lt;
                strcpy(a[i].bl00d,a[faw-1].bl00d);
                faw--;
                cout<<"Successfully removed.\n";
                count++;
                break;
            }

        }
        if(count==0)
            cout<<"\nSorry, ID not found";
    }


}
void edit()
{
    if(faw<=0)
    {
        cout<<"\nSorry, no data to edit";
        return;
    }
    int i,d;
    float r;
    char s[10];
    cout<<"\n-> Enter student ID for Editing information: ";
    cin>>d;
    for(i=0; i<faw; i++)
    {
        if(a[i].id==d)
        {
           cout<<"\n-> Enter New sec_tion\n";
            getchar();
            gets(s);
            strcpy(a[i].sec_tion,s);
            cout<<"\n-> Enter New resu_lt\n";
            cin>>r;
            a[i].resu_lt=r;
            cout<<"\nresu_lt has been updated !!";

        }
    }
}
void see_serial()
{
    int i,j,d,left,right,middle;
    cout<<"\n-> Enter Id for know phosition: ";
    cin>>d;
    for(i=0; i<faw; i++)
    {
        for(j=0; j<faw-1; j++)
        {
            if(a[j].resu_lt<a[j+1].resu_lt)
            {
                strcpy(tem.name,a[j].name);
                strcpy(a[j].name,a[j+1].name);
                strcpy(a[j+1].name,tem.name);
                tem.id=a[j].id;
                a[j].id=a[j+1].id;
                a[j+1].id=tem.id;
                strcpy(tem.sec_tion,a[j].sec_tion);
                strcpy(a[j].sec_tion,a[j+1].sec_tion);
                strcpy(a[j+1].sec_tion,tem.sec_tion);
                tem.resu_lt=a[j].resu_lt;
                a[j].resu_lt=a[j+1].resu_lt;
                a[j+1].resu_lt=tem.resu_lt;
                strcpy(tem.bl00d,a[j].bl00d);
                strcpy(a[j].bl00d,a[j+1].bl00d);
                strcpy(a[j+1].bl00d,tem.bl00d);

            }
        }

    }
    left = 0;
    right = faw-1;
    middle =(left+right)/2;
    while(left<=right)
    {
        if(d<a[middle].id)
        {
            left=middle+1;
        }
        else if(d>a[middle].id)
        {
            right=middle-1;
        }
        else if(d==a[middle].id)
        {
            printf("Name : ");
            puts(a[middle].name);
            printf("\n resu_lt: %.2f\n",a[middle].resu_lt);
            printf("Serial according to resu_lt: %d",middle+1);
            break;
        }
        middle=(left+right)/2;
    }
    if(left>right)
    {
        printf("ID Not Found");
    }
}


void search()
{
    int i,d,j;
    cout<<"Enter Id for know details : ";
    cin>>d;
    for(j=0; j<faw; j++)
    {
        if(a[j].id==d)
        {
            cout<<"\n Name : ";
            puts(a[j].name);
            printf(" ID : %d",a[j].id);
            cout<<"\n sec_tion : ";
            puts(a[j].sec_tion);
            printf("\n resu_lt : %.2f",a[j].resu_lt);
            cout<<"\n bl00d group : ";
            puts(a[j].bl00d);
            break;
        }

    }
    if(j==faw)
        cout<<"ID not found";

}
void iD_see()
{
    if(faw<=0)
        cout<<"\nEmpty list\n ";
    else
    {
        int i,j,min_idx;
        for (i = 0; i < faw-1; i++)
        {
            min_idx = i;
            for (j = i+1; j < faw; j++)
            {
                if (a[j].id < a[min_idx].id)
                {
                    min_idx = j;
                }
            }
            strcpy(tem.name,a[min_idx].name);
            strcpy(a[min_idx].name,a[i].name);
            strcpy(a[i].name,tem.name);
            tem.id=a[min_idx].id;
            a[min_idx].id=a[i].id;
            a[i].id=tem.id;
            strcpy(tem.sec_tion,a[min_idx].sec_tion);
            strcpy(a[min_idx].sec_tion,a[i].sec_tion);
            strcpy(a[i].sec_tion,tem.sec_tion);
            tem.resu_lt=a[min_idx].resu_lt;
            a[min_idx].resu_lt=a[i].resu_lt;
            a[i].resu_lt=tem.resu_lt;
            strcpy(tem.bl00d,a[min_idx].bl00d);
            strcpy(a[min_idx].bl00d,a[i].bl00d);
            strcpy(a[i].bl00d,tem.bl00d);

        }
        cout<<"\nAll listed Students ID's are : \n";
        for (i=0; i<faw; i++)
        {
            printf("\n%d\n",a[i].id);
        }
    }
}

int main()
{
    int i,x,p;
    cout<<"\n****Welcome to Student Information Management System****\n";
    cout<<"\nDeveloped by ' Team Everest '\nSection: O-3\n\n";
    cout<<"===== Group Members Information =====\n\n";
    cout<<"\nMd. Mahfujur Rahman  ------> ID: 192-15-13207";
    cout<<"\nAbdullah Al Ryan     ------> ID: 192-15-13088";
    cout<<"\nSamiul Arafah Dhrubo ------> ID: 192-15-13051";
    cout<<"\nLamia Binte Iqbal    ------> ID: 192-15-13222";
    cout<<"\nSaima Binta Younus   ------> ID: 192-15-13137\n";


    while(1)
    {


        cout<<"\n\n Press 1 to Enter Students Information \n Press 2 to Remove Information \n Press 3 to Edit Information";
        cout<<"\n Press 4 to Know The position based on their resu_lt\n Press 5 to Search Student Information\n Press 6 for Total number of Listed students";
        cout<<"\n Press 7 to See all listed ID in Ascending order   \n Press 8 to Exit \n";

        cout<<"\nEnter your Choice: ";
        cin>>x;
        system("cls");
        if(x==1)
            enter();
        if(x==2)
            remove_info();
        if(x==3)
            edit();
        if(x==4)
            see_serial();
        {
            if(x==5)
                search();

        }

        if(x==6)
            cout<<"\nTotal student in this list : "<<faw;

        if(x==7)
            iD_see();
        if(x==8)
            break;

    }

}

