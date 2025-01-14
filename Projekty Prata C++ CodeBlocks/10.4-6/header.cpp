#include <string>
#include <iostream>
#include "header.h"
  Stock::Stock()
  {
      std::cout<<"wywolano konstruktor domyslny\n.";
      company="Bez nazwy";
      shares=0;
      share_val=0;
      total_val=0;


  }
    Stock::Stock(const std::string &co,long n,double pr)
    {
        std::cout<<"wywolano konstruktor z argumentem\n.";
         company=co;
         if(n<0)
         {

         }
      else
        shares=n;
      share_val=pr;
      set_tot();


    }
    Stock::~Stock()
    {

        std::cout<<"Do widzenia "<<company<<std::endl;
    }
    void Stock::buy(long num,double price)
    {
       if(num<0)
       {
             std::cout<<"Liczba nabytych udzialow nie moze byc ujemna; "
             <<" transakcja przerwana w "<<company<<" na 0.\n";

       }
       else
       {

        shares+=num;
       share_val=price;
       set_tot();
       }


    }

    void Stock::sell(long num,double price)
    {
        if(num<0)
       {
             std::cout<<"Liczba sprzedawanych udzialow nie moze byc ujemna; "
             <<" transakcja przerwana w "<<company<<" na 0.\n";

       }
       else if(num>shares)
       {
           std::cerr<<"nie mozesz sprzedac wiecej udzialow niz masz";
       }
       else {

        shares-=num;
       share_val=price;
       set_tot();
       }

    }

    void Stock::update(double price)
    {

        share_val=price;
        set_tot();
    }

    void Stock::show()const
    {
        using std::cout;
        using std::ios_base;
        ios_base::fmtflags orig=cout.setf(ios_base::fixed,ios_base::floatfield);
        std::streamsize prec=cout.precision(3);
        cout<<"spolka: "<<company<<" liczba udzialkow: "<<shares<<'\n';
        cout<<" cena udzialu: "<<share_val<<" zl";
        cout.precision(2);
        cout<<" laczna wartosc udzialow: "<<total_val<<" zl"<<'\n';
        cout.setf(orig,ios_base::floatfield);
        cout.precision(prec);


    }

     const Stock & Stock::topval(const Stock &s) const
     {
         if(s.total_val>total_val)
         {

              return s;
         }

         else
            return *this;

     }

