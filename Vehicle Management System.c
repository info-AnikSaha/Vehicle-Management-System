#include<stdio.h>
#include<conio.h>
#include<string.h>
void head_Message();
void print_Message_in_Center();
void welcome_Message();
void Login(int count);
void menu(int count);
int addVehicleInDataBase(int count);
int searchVehicles(int count);
int viewVehicles(int count);
int deleteVehicles(int count);
int updateCredential();


int main()
{
    int count=0;
    welcome_Message();
    Login(count);
    return 0;
}

//1st Page//
void head_Message( char *message) //*mess="Cse-103 Project" //*mess="Login" //*mess="main menu"
{
    printf("\t\t\t\t\t<~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~>\n");
    printf("\t\t\t\t\t<~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~>\n");
    printf("\t\t\t\t\t<~><~><~><~>                                                   <~><~><~><~>\n");
    printf("\t\t\t\t\t<~><~><~><~>             Vehicle Management System             <~><~><~><~>\n");
    printf("\t\t\t\t\t<~><~><~><~>                                                   <~><~><~><~>\n");
    printf("\t\t\t\t\t<~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~>\n");
    printf("\t\t\t\t\t<~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~>\n");
    printf("\n\n");
    printf("\t\t\t\t\t<~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~>\n");
    printf("\n");
    print_Message_in_Center(message);
    printf("\n\n");
    printf("\t\t\t\t\t<~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~>\n");
    printf("\n\n\n");
}
void print_Message_in_Center( char *message)
{
    int i,b;
    b= (85-strlen(message))/2;
    printf("\t\t\t\t   ");//35
    for(i=0; i<b; i++ )//b=35,
    {
        printf(" ");//35+35 =70 total space-------- design er 5ta tab=40 space, pore design er 30 ta space //--- total use space 70 ---//
    }
    printf("%s",message);
}
void welcome_Message()
{
    head_Message("Cse-103 Project");
    printf("\t\t\t\t\t\t<~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~>\n");
    printf("\n");
    printf("\t\t\t\t\t\t\t<~><~><~><~><~><~><~><~><~><~><~><~><~><~><~>\n");
    printf("\t\t\t\t\t\t\t<~>                 Welcome               <~>\n");
    printf("\t\t\t\t\t\t\t<~>                   To                  <~>\n");
    printf("\t\t\t\t\t\t\t<~>                 Vehicle               <~>\n");
    printf("\t\t\t\t\t\t\t<~>                Management             <~>\n");
    printf("\t\t\t\t\t\t\t<~>                  System               <~>\n");
    printf("\t\t\t\t\t\t\t<~><~><~><~><~><~><~><~><~><~><~><~><~><~><~>\n");
    printf("\n");
    printf("\t\t\t\t\t\t<~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~>\n");
    printf("\n\n\n\n\t\t\t\t\t Enter any key to continue.....");
    getch();
    system("cls");
}
//2nd Page//
void Login(int count)
{
    head_Message("Login");
    int size1,size2;
    char user[]="cse103";
    char pass[]="cse103";
    size1=strlen(user);
    size2=strlen(pass);
    char user_name[size1];
    char user_pass[size2];
    printf("\t\t\t\t\t\tUser Name\t: ");
    gets(user_name);
    printf("\t\t\t\t\t\tUser Password\t: ");
    gets(user_pass);

    if(strcmp(user,user_name)==0)
    {
        if(strcmp(pass,user_pass)==0)
        {
            menu(count);
        }
        else
        {
            printf("\n\n\n\t\t\t\t\t\t\t\t\tIncorrect\n\n\n");

        }
    }
    else
    {
        printf("\n\n\n\t\t\t\t\t\t\t\t  Username doesn't exist\n\n\n");
    }
}
//3rd Page//
void menu(int count)
{
    int num;
    do
    {
        system("cls");
        head_Message("Main Menu");
        printf("\n\t\t\t\t\t1. Add Vehicle");
        printf("\n\t\t\t\t\t2. Search Vehicle");
        printf("\n\t\t\t\t\t3. View Vehicle");
        printf("\n\t\t\t\t\t4. Delete Vehicle");
        printf("\n\t\t\t\t\t5. Update Password");
        printf("\n\t\t\t\t\t6. Exit");
        printf("\n\n");
        printf("\n\t\t\t\t\tEnter your choice: ");
        scanf("%d",&num);
    }
    while(num!=1 && num!=2 && num!=3 && num!=4 && num!=5 && num!=6);

    switch(num)
    {
    case 1:
    {
        system("cls");
        head_Message("Add New Vehicals");
        printf("\t\t\t\t\t>>>>>Enter Vehicle Details Below<<<<<");
        printf("\n\t\t\t\t\t---------------------------------------------------------------------------\n");
        count = addVehicleInDataBase(count);
        break;
    }
    case 2:
    {
        system("cls");
        head_Message("Search Vehicles");
        printf("\t\t\t\t\t>>>>>Search Vehicle<<<<<");
        printf("\n\t\t\t\t\t---------------------------------------------------------------------------\n");
        searchVehicles(count);
        printf("\n\n\n\n\t\t\t\t\t\t\t\tEnter any key to go to main menu..");
        getch();
        menu(count);
        break;
    }
    case 3:
    {
        system("cls");
        head_Message("View Vehicles");
        viewVehicles(count);
        printf("\n\n\n\n\t\t\t\t\t\t\t\tEnter any key to go to main menu..");
        getch();
        menu(count);
        break;
    }
    case 4:
    {
        system("cls");
        head_Message("Delete Vehicles Details");
        deleteVehicles(count);
        printf("\t\t\t\t\tEnter Vehicles Id no: ");
        break;
    }
    case 5:
    {
        system("cls");
        head_Message("Update Passoward");
        updateCredential();
        break;
    }
    case 6:
    {
        printf("\n\n\n\n");
        printf("\t\t\t\t\t\t\t\t\tThank You!");
        printf("\n\n\n\n\n");
        break;
    }
    }
}

#define MAX 100
struct details
{
    int id;
    char Vname[80];
    char Mname[80];
    char date[80];
} detail[MAX];

//----Add Vehicle In Data & Stored----//
int addVehicleInDataBase(count)
{
    int i,dd,mm,yyyy;
    char temp[80];
    for(i=0; i<MAX; i++)
    {
        printf("\t\t\t\t\tVehical id no: ");
        scanf("%d",&detail[count]. id);
        printf("\n");
        printf("\t\t\t\t\tVehical Name: ");
        getchar();
        gets(detail[count]. Vname);
        printf("\n");
        printf("\t\t\t\t\tVehical Manufacture Name: ");
        gets(detail[count]. Mname);
        printf("\n");
        printf("\t\t\t\t\tVehical issued date by manufacturer (dd/mm/yyyy): ");
        gets(detail[count].date);
        printf("\n");
        count++;
        //  menu();

        menu(count);
    }
}
//----Search Vehicles----//
int searchVehicles(count)
{
    int i,found;
    found=0;
    char name[80];
    printf("\t\t\t\t\tEnter Vehicle Name to search: ");
    getchar();
    gets(name);

    for(i=0; i<count; i++)
    {
        if(strcmp(name,detail[i]. Vname)==0)
        {
        printf("\n\n\t\t\t\t\tVehical id no: %d\n\n", detail[i]. id);
        printf("\t\t\t\t\tVehical Name: %s\n\n", detail[i]. Vname);
        printf("\t\t\t\t\tVehical Manufacture Name: %s\n\n", detail[i]. Mname);
        printf("\t\t\t\t\tVehical issued date by manufacturer (dd/mm/yyyy): %s\n\n", detail[i].date);
        found=1;
        }
    }
    if(!found)
    {
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t  Not found\n");
    }
}
//----Display All Data----//
int viewVehicles(count)
{
    int i;
    for(i=0; i<count; i++)
    {
        printf("\t\t\t\t\tCount no :%d",i+1);
        printf("\n\n\n\t\t\t\t\tVehical id no: %d\n\n", detail[i]. id);
        printf("\t\t\t\t\tVehical Name: %s\n\n", detail[i]. Vname);
        printf("\t\t\t\t\tVehical Manufacture Name: %s\n\n", detail[i]. Mname);
        printf("\t\t\t\t\tVehical issued date by manufacturer (dd/mm/yyyy): %s\n\n\n\n", detail[i].date);
    }
}



int deleteVehicles(count)

{
int a,i,tap=0;

printf("\t\t\t\tEnter vehicle ID NO.for delete:");
scanf("%d",&a);

for(i=0;i<=count;i++)

if(a==detail[i].id)

{

tap++;

for(i=a;i<=count;i++)
{
detail[i-1].id=detail[i].id;
strcpy(detail[i-1].Vname,detail[i].Vname);
strcpy(detail[i-1].Mname,detail[i].Mname);
strcpy(detail[i-1].date,detail[i].date);

}


count--;

printf("\n\t\t\t\tRecord deleted sucessfully");
printf("\n\n\t\t\t\tEnter any key for back main menu..."); 
getch();
system("cls");



}



if(tap==0)

{

printf("car id not found");

}


menu(count);

}



//----Password Change----//
int updateCredential(count)
{
    int size1,size2;
    char user[80];
    char pass[80];
    printf("\t\t\t\t\t\tNew Username:");
    getchar();
    gets(user);
    printf("\t\t\t\t\t\tNew Password:");
    gets(pass);
    printf("\n\n\n\t\t\t\t\t\t\tYour password has been changed sucessfully");
    printf("\n\n\n\n\t\t\t\t\t\tLoging Again -->\n");
    getch();
    system("cls");
    head_Message("login");
    size1=strlen(user);
    size2=strlen(pass);
    char user_name[size1];
    char user_pass[size2];
again:
    printf("\t\t\t\t\t\tUser Name\t: ");
    gets(user_name);
    printf("\t\t\t\t\t\tUser Password\t: ");
    gets(user_pass);

    if(strcmp(user,user_name)==0)
    {
        if(strcmp(pass,user_pass)==0)
        {
            menu(count);
        }
        else
        {
            printf("\n\n\n\t\t\t\t\t\t\t\t\tIncorrect\n\n\n");
            printf("\n\n\n\t\t\t\t\t\t\t\t\tEnter any key to try again---->\n\n\n");
            getch();
            system("cls");
            head_Message("login");
            goto again;
        }
    }
    else
    {
        printf("\n\n\n\t\t\t\t\t\t\t\t  Username doesn't exist\n\n\n");
        printf("\n\n\n\t\t\t\t\t\t\t\t\tEnter any key to try again---->\n\n\n");
        getch();
        system("cls");
        head_Message("login");
        goto again;
    }
}
