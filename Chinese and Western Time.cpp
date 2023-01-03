#include<iostream>
using namespace std;

int  main()
{
    int h, m;

    while( cin >> h >>m)
    {
        if(( h==23 and m<60 )  or ( h==24 and m<60 ))
        {
            cout << "¤l" << endl;
        }
        if(( h==1  and m<60 )  or ( h==2  and m<60 )) 
        {
            cout << "¤¡" << endl;
        }
        if(( h==3 and m<60 )  or ( h==4 and m<60 ))
        { 
            cout << "±G" << endl;
        }
        if(( h==5  and m<60 )  or ( h==6  and m<60 ))         {
            cout << "¥f"<< endl;
        }
        if(( h==7 and m<60 )  or ( h==8 and m<60 ))
        {
            cout << "¨°"<< endl;
        }
        if(( h==9  and m<60 )  or  (h==10  and m<60 ))
        {
            cout <<"¤x" << endl;
        }    
         if(( h==11 and m<60 )  or  (h==12 and m<60 ))
        {
            cout << "¤È"<< endl;
        }
         if(( h==13 and m<60 )  or  ( h==14 and m<60 ))
        {
            cout << "¥¼"<< endl;
        }    
          if(( h==15 and m<60 )  or ( h==16 and m<60 ))
        {
            cout << "¥Ó"<< endl;
        }
         if(( h==17 and m<60 )  or ( h==18 and m<60 ))
        {
            cout << "¨»"<< endl; 
	    }	  
         if(( h==19 and m<60)  or ( h==20 and m<60))
        {
            cout << "¦¦"<< endl; 
		 }	  
		  if(( h==21 and m<60) or  (h==22 and m<60))        {
            cout << "¥è"<< endl; 
        }	  
       
    }

    return 0;
}
        
