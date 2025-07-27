#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int o;
int main()
{ int a, n, i, u, p, yt;
int b,c,d;
int x,f;
char str1[50];
char str2[50];
char str[50];
char str10[50];
char str12[50];
char str9[50];
int cd;
printf(" Welcome !\n");
start:
printf("What would you like to do ? \n");
printf("\n1. Book a table\n");
printf("2. Order food online ");
scanf("%d", &n);
if (n==1)
{
printf("\n1. For family\n");
printf("2. For friends\n");
printf("3. For Individual ");
scanf("%d", &a);
if(a==1)
{
printf("\n1. AC room \n");
printf("2. Non AC room ");
scanf("%d", &b);
if(b==1||b==2)
{
printf("\nHow many of peoples are coming ? ");
scanf("%d", &c);
printf("\nName a responsible person :- \n\nEnter first name : ");
scanf("%s", &str10);
printf("\nEnter your last name : ");
scanf("%s", str1);
printf("\n\nAre you sure to confirm your booked table ? : \n");
printf("\n1. Yes\n2. No ");
scanf("%d", &d);
if(d==1)
{
printf("\nBooking");
printf(".");
sleep(1);
18
printf(".");
sleep(1);
printf(".");
sleep(1);
printf(".");
sleep(1);
printf(".");
sleep(1);
printf("\nYour table is booked successfully\n");
printf("Your table number will be given to you when you will visit our restaurant\n");
printf("Thank You !");
exit(0);
}}}
if (d==2)
{
exit(0);
}
if (a==2)
{
printf("\n1. AC room\n");
printf("2. Non AC room ");
scanf("%d", &i);
if (i==1 || i==2)
{
printf("\nHow many peoples are coming ? ");
scanf("%d", &u);
printf("\nName a responsible person :- \n\nEnter the first name : ");
scanf("%s", str);
printf("\nEnter the last name : ");
scanf("%s", &str12);
printf("\n\nAre you sure to confirmed your booked table? : \n");
printf("\n1. Yes\n2. No ");
scanf("%d", &p);
if (p==1)
{
printf("\nBooking");
printf(".");
sleep(1);
printf(".");
sleep(1);
printf(".");
sleep(1);
printf(".");
sleep(1);
printf(".");
sleep(1);
printf("\nYour table is booked successfully\n");
printf("Your table number will be given you when en you will visit our restaurant\n");
printf("Thank you !");
exit(0);
}}}}
19
if (p==2)
{
exit(0);
}
if (a==3)
{
printf("\n1. AC room\n2. Non AC room ");
scanf("%d",&x);
if (x==1 || x==2)
{
printf("\nEnter your first name : ");
scanf("%s",&str2);
printf("\nEnter your last name : ");
scanf("%s", &str9);
printf("\n\nAre you sure to confirm your booked table?\n\n1. Yes\n2. No ");
scanf("%d",&f);
}
if (f==1)
{
printf("\nBooking");
printf(".");
sleep(1);
printf(".");
sleep(1);
printf(".");
sleep(1);
printf(".");
sleep(1);
printf(".");
sleep(1);
printf("\nYour table has been booked successfully!\nYour table number will be given to
you when you will visit our restaurant.\n");
printf("Thank you !")
exit(0);
}
if (f==2)
{
int j;
exit(0);
}
}
if (n==2)
{
tab:
printf("\nChoose the meal plan : \n\n");
printf("1. Veg dishes.\n");
printf("2. Non veg dishes. ");
scanf("%d", &j);
if (j==1)
{
int no;
20
printf("\n\n1. Veg Hakka Noodles\t\t200/-\n");
printf("2. Veg Chaat\t\t\t300/-\n");
printf("3. Veg Thali\t\t\t400/-\n");
printf("4. Paneer Tikka Wrap\t\t200/-\n");
printf("5. Pav Bhaji\t\t\t200/-\n");
printf("6. Veg Pulav\t\t\t300/-\n");
printf("7. Veg Fried Rice\t\t400/-\n");
printf("8. Chana Bhatura\t\t200/-\n");
printf("9. Poori Bhaji\t\t\t300/-\n");
printf("10. Vegetable Korma\t\t200/-\n");
printf("11. Tikka Masala\t\t400/-\n");
printf("12. Rajmah\t\t\t200/-\n");
printf("13. Dal Makhani\t\t\t500/-\n");
printf("14. Kadhai Pakora\t\t300/-\n");
printf("15. Dal Tadka\t\t\t200/-\n");
printf("16. Veg Handi\t\t\t400/-\n");
printf("17. Aloo Mutter\t\t\t300/-\n");
printf("18. Veg Kadhai\t\t\t500/-\n");
printf("19. Sev Bhaji\t\t\t400/-\n");
printf("20. Veg Rice\t\t\t200/-\n\n");
printf("Enter the number of your order : ");
scanf("%d",&no);
if (no==1)
{
printf("Your order is: Veg Hakka Noodles\nyour price is: 200/-");
}
if(no==2)
{
printf("Your order is: Veg Chaat\nyour price is: 300/-");
}
if (no==3)
{
printf("Your order is: Veg Thali.\nyour price is: 400/-");
}
if(no==4)
{
printf("Your order is: Paneer Tikka Wrap\nyour price is: 200/-");
}
if (no==5)
{
printf("Your order is: Pav Bhaji\nyour price is: 100/-");
}
if(no==6)
{
printf("Your order is: Veg Pulav\nyour price is: 400/-");
}
if (no==7)
{
printf("Your order is: Veg Fried Rice\nyour price is: 200/-");
}if(no==8)
{
printf("Your order is: Chana Bhatura\nyour price is: 200/-");
}
if (no==9)
{
printf("your order is: PooriBhaji\nyour price is: 300/-");
}
if(no==10)
{
printf("Your order is: Vegetable Korma\nyour price is: 200/-");
}
if (no==11)
{
printf("Your order is: Tikka Masala\nyour price is: 400/-");
}
if(no==12)
{
printf("Your order is: Rajmah\nyour price is: 200/-");
}
if (no==13)
{
printf("Your order is: Dal Makhani\nyour price is: 500/-");
}
if(no==14)
{
printf("Your order is: Kadhai Pakora\nyour price is: 300/-");
}
if (no==15)
{
printf("your order is: Dal Tadka\nyour price is: 200/-");
}
if(no==16)
{
printf("Your order is: Veg Handi\nyour price is: 400/-");
}
if (no==17)
{
printf("Your order is: Aloo Mutter. Dal Makhani\nyour price is: 300/-");
}
if(no==18)
{
printf("Your order is: Veg Kadhai\nyour price is: 500/-");
}
if (no==19)
{
printf("Your order is: Sev Bhaji\nyour price is: 400/-");
}
if(no==20)
{
printf("Your order is: Veg Rice\nyour price is: 200/-");
22
}
}
if (j==2)
{
int dc, fd;
printf("\t\tNon-veg\n");
printf("1. butter chicken\t\t500/-\n");
printf("2. Chicken Lollipop\t\t400/-\n");
printf("3. Chicken Tikka\t\t400/-\n");
printf("4. Chicken Curry\t\t300/-\n");
printf("5. Chicken Shahi Korma\t\t500/-\n");
printf("6. Chicken Tikka Masala\t\t400/-\n");
printf("7. Tandoori Chicken\t\t500/-\n");
printf("8. Seekh Kabab\t\t\t300/-\n");
printf("9. Chicken Biryani\t\t600/-\n");
printf("10. Reshmi Kabab\t\t300/-\n");
printf("11. Chicken Fried Rice\t\t400/-\n");
printf("12. Chicken Curry\t\t500/-\t\t\n");
printf("13. Chicken Butter Masala\t600/-\n");
printf("14. Chicken Dum Biryani\t\t700/-\n");
printf("15. Chicken 65\t\t\t300/-\n");
printf("16. Chicken Pasta\t\t500/-\n");
printf("17. Chilli Chicken\t\t400/-\n");
printf("18. Chicken kabab\t\t200/-\n");
printf("19. Chicken Popcorn\t\t400/-\n");
printf("20. Grilled Chicken\t\t500/-\n");
printf("\nEnter the number of your order : ");
scanf("%d",&dc);
if(dc==1)
{
printf("\nYour Order is : Butter Chicken \nMRP = 500/-");
}
if(dc==2)
{
printf("\nYour Order is : Chicken Lollipop \nMRP = 400/-");
}
if(dc==3)
{
printf("\nYour Order is : Chicken Tikka\nMRP = 400/-");
}
if(dc==4)
{
printf("\nYour Order is : Chicken Curry\nMRP = 300/-");
}
if(dc==5)
{
printf("\nYour Order is : Chicken Shahi Korma \nMRP = 500/-");
}
23
if(dc==6)
{
printf("\nYour Order is : Chicken Tikka Masala \nMRP = 400/-");
}
if(dc==7)
{
printf("\nYour Order is : Tandoori Chicken \nMRP = 500/-");
}
if(dc==8)
{
printf("\nYour Order is : Seekh Kabab \nMRP = 300/-");
}
if(dc==9)
{
printf("\nYour Order is : Chicken Biryani \nMRP = 600/-");
}
if(dc==10)
{
printf("\nYour Order is : Reshmi Kabab \n MRP = 300/-");
}
if (dc==11)
{
printf("\nYour order is : Chicken fried Rice\nMRP = 400/-");
}
if (dc==12)
{
printf("\nYour order is : Chicken Curry\nMRP = 500/-");
}
if (dc==13)
{
printf("\nYour order is : Chicken Butter Masala\nMRP = 600/-");
}
if (dc==14)
{
printf("\nYour order is : Chicken Dum Biryani\nMRP = 700/-");
}
if (dc==15)
{
printf("\nYour order is : Chicken 65\nMRP = 300/-");
}
if (dc==16)
{
printf("\nYour order is : Chicken Pasta\nMRP = 500/-");
}
if (dc==17)
{
printf("\nYour order is : Chicken Chilli\nMRP = 400/-");
}
if (dc==18)
{
printf("\nYour order is : Chicken kabab\nMRP = 200/-");}
if (dc==19)
{
printf("\nYour order is : Chicken popcorns\nMRP = 400/-");
}
if (dc==20)
{
printf("\nYour order is : Grilled Chicken\nMRP = 500/-");
}
}
}
printf("\n\nAny more dishes? \n1. Yes\n2. No ");
scanf("%d",&o);
if(o==1)
{
goto tab;
}
int ko, ok;
printf("\n\nAny desert dishes you want ?\n");
printf("1. Yes\n");
printf("2. No ");
scanf("%d", &ko);
if (ko==1)
{
printf("\n1. Almond Cake\t\t\t850/-\n");
printf("2. Raspberry Cheese Cake\t680/-\n");
printf("3. Classic Tiramisu\t\t650/-\n");
printf("4. Mud Pie\t\t\t450/-\n");
printf("5. Creme Carmel\t\t\t550/-\n");
printf("6. Peach Snap Roll\t\t650/-\n");
printf("7. Gulkand Gulab Jamun\t\t550/-\n");
printf("8. Fresh Fruit Salad\t\t450/-\n");
printf("9. Chocolate brownie\t\t650/-\n");
printf("10. Chocolate Cake\t\t950/-\n");
printf("\nEnter your desert dish number : ");
scanf("%d", &ok);
if(ok==1)
{
printf("\nYour Order is : Almond Cake \n MRP = 850/-");
}
if(ok==2)
{
printf("\nYour Order is : Raspberry Cheese Cake \n MRP = 680/-");
}
25
}
if(ok==4)
{
printf("\nYour Order is : Mud Pie \n MRP = 450/-");
}
if(ok==5)
{
printf("\nYour Order is : Creme Caramel \n MRP = 550/-");
}
if(ok==6)
{
printf("\nYour Order is : Peach Snap Rolls \n MRP = 650/-");
}
if(ok==7)
{
printf("\nYour Order is : Gulkand Gulab Jamun \n MRP = 550/-");
}
if(ok==8)
{
printf("\nYour Order is : Fresh Fruit Salad \n MRP = 450/-");
}
if(ok==9)
{
printf("\nYour Order is : Chocolate brownie \n MRP = 650/-");
}
if(ok==10)
{
printf("\nYour Order is : Chocolate cake \n MRP = 950/-");
}
}
if (ko==1||ko==2)
{
printf("\n\nAny drinks you want ?\n");
}int hu, ju; printf("1.
Yes\n");
printf("2. No ");
scanf("%d", &hu);
if (hu==1)
{
printf("\nChoose the drinks from below :");
printf("\n1. Sprite\t\t\t30/-\n");
printf("2. Banana milkshake\t\t120/-\n");
printf("3. Pepsi\t\t\t40/-\n");
printf("4. Choclate milkshake\t\t200/-\n");
printf("5. Black Tea\t\t\t30/-\n"); printf("6.
Nescafe coffee\t\t80/-\n");
printf("7. Strawberry milkshake\t\t120/-\n");
printf("8. Cola\t\t\t\t70/-\n");
printf("9. Slice\t\t\t50/-\n"); printf("10.
Lemon Juice\t\t\t60/-\n");
printf("\nEnter your juice number : ");scanf("%d", &ju);
if (ju==1)
{
printf("\nYour drink is Sprite.\nMRP : 30/-");
}
if (ju==2)
{
printf("\nYour drink is Banana milkshake.\nMRP : 120/-");
}
if (ju==3)
{
printf("\nYour drink is Pepsi.\nMRP : 40/-");
}
if (ju==4)
{
printf("\nYour drink is Chocalate milkshake.\nMRP : 1200/-");
}
if (ju==5)
{
printf("\nYour drink is Black Tea.\nMRP : 30/-");
}
if (ju==6)
{
printf("\nYour drink is Nescafe coffee.\nMRP : 80/-");
}
if (ju==7)
{
printf("\nYour drink is strawberry milkshake.\nMRP : 120/-");
}
if (ju==8)
{
printf("\nYour drink is Cola.\nMRP : 70/-");
}
if (ju==9)
{
printf("\nYour drink is Slice.\nMRP : 50/-");
}
if (ju==10)
{
printf("\nYour drink is Lemon Juice.\nMRP : 60/-");
}}
if(hu==1||hu==2)
{
char str3[50];
int uk;
char str4[50];
char str8[50];
char str5[50];
char pp[50];
printf("\n\nEnter Your first name : ");
27
scanf("%s", &str4);
printf("\nEnter your last name : ");
scanf("%s", &str8);
printf("\nEnter your city name : ");
scanf("%s", &str3);
printf("\nEnter your pin code : ");
scanf("%s", &str5);
printf("\nEnter your building/house number please : ");
scanf("%s", &pp);
printf("\nEnter your mobile number (Note : It should be working !) : ");
scanf("%d", &yt);
printf("\n\nAre you sure to confirm your order ? \n");
printf("1. Yes\n");
printf("2. No ");
scanf("%d", &uk);
if (uk==1)
{
printf("\nOrdering");
sleep(1);
printf(".");
sleep(1);
printf(".");
sleep(1);
printf(".");
sleep(1);
printf(".");
sleep(1);
printf("\nOrdered successfully !");
printf("\nThanks for ordering from our restuarant !\n");
printf("Your order will be place to you within 20 minutes.");
}
if (uk==2)
{
exit(0); }
}
return 0; 