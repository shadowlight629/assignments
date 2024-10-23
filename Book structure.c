//c struct
	/*
purity Thuo
23/10/24
*/
#include <stdio.h>
#include<string.h>
struct Book {
	char title[30];
	char author[30];
	int publication_year;
	char ISBN[13];
	float price;
};
int main(){
	struct Book book;
	strcpy(book.title,"introduction to C Programming");
	strcpy(book.author,"John Smith");
	book.publication_year =2022;
strcpy(book.ISBN,"9780131103627");
book.price =49.99;

printf("title: %s\n",book.title);
printf("author: %s\n",book.author);
printf("publcation_year: %d\n",book.publication_year);
printf("ISBN: %s\n",book.ISBN);
printf("price: %f\n",book.price);

return 0;
}		