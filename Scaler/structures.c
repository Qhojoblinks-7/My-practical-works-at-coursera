#include <stdio.h>
struct Forms
{
	char Full_name[100];
	int Age;
	char Formal_sch[100];
};
void print(struct Forms arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("name: %s\n\nAge: %d\n\nFormal school: %s\n", arr[i].Full_name, arr[i].Age, arr[i].Formal_sch);
	}
}

int main(void)
{
	struct Forms arr[2];
	char buffer[100];

	for (int i = 0; i < 2; i++)
	{
		printf("Enter Your full name: ");
		fgets(arr[i].Full_name, sizeof(arr[i].Full_name), stdin);
		printf("Enter Your Age: ");
		scanf("%d", &arr[i].Age);

		fgets(buffer, sizeof(buffer), stdin);

		printf("Enter Your Formal School: ");
		fgets(arr[i].Formal_sch, sizeof(arr[i].Formal_sch), stdin);
	}
	printf("\n FORM DATA \n");
	print(arr,2);
	return (0);
}
