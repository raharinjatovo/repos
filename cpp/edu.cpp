#include<iostream>
#include<fstream>
#include<string.h>
#include<cstring>
#include<bits/stdc++.h>
#include <ctime>


using namespace std;
int mail_validate=0;
int password_validate=0;
// create login and mail information of domain name .cpp


  std::ostringstream oss;
  std::ostringstream oss1;
  std::ostringstream oss2;


string mot;
string firstn;
string lastn;
string pass;
int choice;
//get firstname and lastname
string name(string firstname,string lastname)
{
    string both =firstname+" "+lastname;
    return both;


}
/*
get current date
*/
const std::string currentDateTime()
{
    time_t now = time(0);
    struct tm tstruct;
    char  buf[80];
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf)," %d/%m/%Y at %X",&tstruct);
    return buf;
}
//make lower entered string
string low(string entry)
{
     transform(entry.begin(),entry.end(),entry.begin(),::tolower);

     return entry;
}

//make a mailchoice to user

string mailchoice1(string firstname,string lastname)
{
    string choice1 = low(firstname)+""+low(lastname)+"@cpp.edu";

 return choice1;

}
string mailchoice2(string firstname,string lastname)
{
    oss<<firstname.at(0);

    string me = low(oss.str());





    string choice2 = me+""+low(lastname)+"@cpp.edu";

 return choice2;

}
string mailchoice3(string firstname,string lastname)
{
    string choice3 = low(lastname)+""+low(firstname)+"@cpp.edu";

 return choice3;

}
string mailchoice4(string firstname,string lastname)
{
    oss2<<lastname.at(0);

    string me = low(oss2.str());





    string choice4 = me+""+low(firstname)+"@cpp.edu";

 return choice4;

}

string user_choice(int choice)
{
    switch(choice)
    {
    case 1:
    return mailchoice1(firstn,lastn);
    break;
    case 2:
    return mailchoice2(firstn,lastn);
    break;
    case 3:
    return mailchoice3(firstn,lastn);
    break;
    case 4:
    return mailchoice4(firstn,lastn);
    break;

    default:


    break;
    }
}
string password(string passw)
{
    return passw;
}
main()
{
  cout<<"----Devoir CPP de Mbola, ID :30120----"<<endl;
    cout<<"------EDU.CPP REGISTER FORM-------\n\n"<<endl;
    cout<<"enter your firstname:"<<endl;
  getline(cin,firstn);
  cout<<"enter your lastname:"<<endl;
  getline(cin,lastn);


  cout<<"you are : "<<name(firstn,lastn)<<endl;
  cout<<"\n\n"<<endl;


  cout<<"choose one mail name beetwen mails above"<<endl;
  cout<<"choice 1: "<<mailchoice1(firstn,lastn)<<endl;
  cout<<"choice 2: "<<mailchoice2(firstn,lastn)<<endl;
  cout<<"choice 3: "<<mailchoice3(firstn,lastn)<<endl;
  cout<<"choice 4: "<<mailchoice4(firstn,lastn)<<endl;
  cout<<"\n\n"<<endl;
  cout<<"get choice: pres key 1 for choice 1 "<<endl;
  cout<<"get choice: pres key 2 for choice 2 "<<endl;
  cout<<"get choice: pres key 3 for choice 3 "<<endl;
  cout<<"get choice: pres key 4 for choice 4 "<<endl;


    std::cin >> choice;
    //validation of user mail name choice
    while(mail_validate==0) {
            //if user input is not integer
            if(std::cin.fail())
            {      cout<<" --------\n"<<endl;
                  std::cout << "Error please enter only number" << std::endl;
        std::cin.clear();
        std::cin.ignore(256,'\n');
        std::cin >> choice;

            }
            else
            {
                // if user input is integer

           if(choice>0 && choice<=4)
      {
          mail_validate=1;

      }
      else
      {

          cout<<"---Wrong answer Please enter number beetwen 1 and 4 --"<<endl;
          cout<<" pres key 1 for choice 1 "<<endl;
          cout<<" pres key 2 for choice 2 "<<endl;
          cout<<" pres key 3 for choice 3 "<<endl;
          cout<<" pres key 4 for choice 4 "<<endl;
          cin>>choice;


      }


            }

    }

    //fetch choosen mail


  oss.str("");
  oss1.str("");
  oss2.str("");
  cout<<"your choice is: "<< user_choice(choice)<<endl;
  cout<<"\n\n"<<endl;
    //validation of user in put for password
    cout<<"--- Password ----"<<endl;
    cout<<"--- password have to be more than 3 char and can't be your firstname or your lastname ---"<<endl;

    cout<<"Enter your password: "<<endl;

     cin>>pass;
    /*


    */
     while(password_validate==0)
     {
         if(pass.length()<=3)
         {
             cout<<"--Error--enter char more than 3"<<endl;

             cout<<"Enter your password: "<<endl;

     cin>>pass;


         }
         else
          if(pass==firstn||pass==lastn)
         {
              cout<<"--Error--don't put your firstname or your lastname in password"<<endl;
              cout<<"It will be easy de guess that "<<endl;

              cout<<"Enter your password: "<<endl;

              cin>>pass;

         }
         else
         {
              cout<<"--Success--"<<endl;

              cout<<"Your password has been saved successfully  \n"<<endl;
              password(pass);
              password_validate=1;
         }
     }







     ofstream sortie;
      oss.str("");
  oss1.str("");
  oss2.str("");
     sortie.open("notification.txt");
     sortie<<"---------------------------------------------------"<<endl;
     sortie<<"Notification :"<<endl;
     sortie<<"FROM : CPP.EDU"<<endl;

     sortie<<"TO : "<<name(firstn,lastn)<<"\n"<<endl;
     sortie<<"You have create successfully your mail address at our site:  "<<endl;
     sortie<<"\t\t Your Address:"<<user_choice(choice)<<endl;
     sortie<<"\t\t Your Password:"<<password(pass)<<endl;
     sortie<<"\t\t Creation date:"<<currentDateTime()<<"\n"<<endl;

    sortie<<"Congratulation !!!"<<endl;
      sortie<<"Team cpp.edu"<<endl;
    sortie<<"------------------"<<endl;


    sortie.close();

cout<<"Congratulation  your account has been created successfully"<<endl;

  std::cout<<"curenttime"<<currentDateTime()<<": "<<std::endl;






  return 0;


}

