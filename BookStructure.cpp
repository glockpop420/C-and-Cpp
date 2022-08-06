#include<stdio.h>
#include<string.h>
struct bookdetail
{
          char title[20];
          char author[20];
          char publisher[20];
          int published_year;
          float price;
          int isbn;
};
void output(struct bookdetail v[],int n);
void main()
{
          struct bookdetail b[3];
          int num,i;
          printf("Enter the Numbers of Books:");
          scanf("%d",&num);
          printf("\n");
          for(i=0;i<num;i++)
          {
                   printf("\t=:Book %d Detail:=\n",i+1);
                   printf("\nEnter the Book Title:\n");
                   scanf("%s",b[i].title);
                   printf("Enter the Author of Book:\n");
                   scanf("%s",b[i].author);
                   printf("Enter the Publisher of Book:\n");
                   scanf("%s",&b[i].publisher);
                   printf("Enter the Published Year of Book:\n");
                   scanf("%d",&b[i].published_year);
                   printf("Enter the price of Book:\n");
                   scanf("%f",&b[i].price);
                   printf("Enter the ISBN number of Book:\n");
                   scanf("%d",&b[i].isbn);
          }
          output(b,num);
}
void output(struct bookdetail v[],int n)j
{
          int i,t=1;
          for(i=0;i<n;i++,t++)
          {
                   printf("\n");
                   printf("Book No.%d\n",t);
                   printf("\t\tBook %d title is=%s \n",t,v[i].title);
                   printf("\t\tBook %d Author is=%s \n",t,v[i].author);
                   printf("\t\tBook %d publisher is=%s \n",t,v[i].publisher);
                   printf("\t\tBook %d published year is=%d \n",t,v[i].published_year);
                   printf("\t\tBook %d price is=%f \n",t,v[i].price);
                   printf("\t\tBook %d ISBN is=%d \n",t,v[i].isbn); 
                   printf("\n");
          }
}
