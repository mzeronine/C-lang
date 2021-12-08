#include <stdio.h>
#include <string.h>
struct Employee
{
   char name[20];
   double basic_salary;
   double net_salary;
   struct Date double a;
   {
      int dd;
      int mm;
      int yyyy;
   }doj;
} e1;
int main()
{
   strcpy(e1.name, "Meghan Vaze");
   e1.doj.dd = 9;
   e1.doj.mm = 3;
   e1.doj.yyyy = 2021;
   e1.basic_salary = 20000;
   e1.a = e1.net_salary = e1.basic_salary * 1.03

  
   printf("employee name : %s\n", e1.name);
   printf("employee date of joining (dd/mm/yyyy) : %d/%d/%d\n", e1.doj.dd, e1.doj.mm, e1.doj.yyyy);
   printf("Final Salary is %lf: ", e1.a);

   return 0;
}
