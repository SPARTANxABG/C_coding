#include<stdio.h>

int main(void)
{ 
   int pay_code, managers = 0, hourly_workers = 0, commission_workers = 0, piece_workers = 0, pieces;
   double manager_salary, hourly_salary, commission_salary, piece_salary, hours, overtime_pay, overtime_hours, pay;

   printf( "Please enter paycode ( -1 to end): " );
   scanf( "%d", &pay_code );

   while ( pay_code != -1 )
   { 
      switch ( pay_code )
      { 
         case 1:
            printf( "Manager selected.\n" );
            printf( "Enter weekly salary: " );
            scanf( "%lf", &manager_salary );
            printf( "The manager's pay is: $%.2f\n", manager_salary );
            ++managers;
            break;

         case 2:
            printf( "Hourly worker selected.\n" );
            printf( "Enter the hourly salary: " );
            scanf( "%lf", &hourly_salary );
            printf( "Enter the total hours worked: " );
            scanf( "%lf", &hours );
            if ( hours > 40.0 )
            { 
               overtime_hours = hours - 40.0;
               overtime_pay = hourly_salary * 1.5 * overtime_hours + hourly_salary * 40.0;
               printf( "Worker has worked %.1f overtime hours.\n", overtime_hours );
               printf( "Workers pay is: $%.2f\n", overtime_pay );
            }
            else
            { 
               pay = hourly_salary * hours;
               printf( "Worker's pay is: $%.2f\n", pay );
            }
            ++hourly_workers;
            break;

         case 3:
            printf( "Commission worker selected.\n" );
            printf( "Enter gross weekly sales: " );
            scanf( "%lf", &commission_salary );
            pay = 250.0 + 0.057 * commission_salary;
            printf( "Commission Worker's pay is: $%.2f\n", pay );
            ++commission_workers;
            break;

         case 4:
            printf( "Piece worker selected.\nEnter number of pieces: " );
            scanf( "%d", &pieces );
            printf( "Enter wage per piece: " );
            scanf( "%lf", &piece_salary );
            pay = pieces * piece_salary;
            printf( "Piece Worker's pay is: $%.2f\n", pay );
            ++piece_workers;
            break;
         default :
            printf( "Invalid pay code.\n" );
            break;
      }

      printf( "\nEnter paycode ( -1 to end ): " );
      scanf( "%d", &pay_code );
   }

   printf( "\n" );
   printf( "Total number of managers paid: %d\n", managers );
   printf( "Total number of hourly workers paid: %d\n", hourly_workers );
   printf( "Total number of commission workers paid: %d\n", commission_workers );
   printf( "Total number of piece workers paid: %d\n", piece_workers );

   return 0;
}