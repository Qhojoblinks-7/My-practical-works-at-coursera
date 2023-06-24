#include <stdio.h>

/**
 * this is a structure tha manages a library's book
 * collection
 * @detail: this struct holds the details of the book
 * @category: this struct also put the the books where
 * they belong
 */


/*doughter struct */
struct Category
{
	int cate_code;
	char cate_name[100];
}Cate;

/* Parent struct */
struct Book_details
{
	float Price;
	int Pub_year;
	char Title[100];
	char Author[100];
	char Publisher[100];

	/* embedded structure */
	struct Category* ptr = &Cate;
};

void feedme(void)
{
	int  buffer[1000];

	fgets(Title, 100, stdin);
	fgets(Author, 100, stdin);
	fgets(Publisher, 100, stdin);

/**
 * display - a function that displays the info of the book
 */

int display(struct Book_details arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("Title\tAuthor\tPublisher\tPublication Year\tCategory Name\tCategory Code\tPrice\n");
		printf("%s\t%s\t%s\t%s\t%s\t%d\t%lf\n",Book_details.Title, Book_details.Author, Book_details.Publisher, Book_detials.Pub_year,
		 Book_details.Category->cate_name, Book_details.Category->cate_code, Book_details.Price);
	}
	return (0);
}
