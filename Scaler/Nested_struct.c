#include <stdio.h>

struct college
{
	float cgpa;
	int college_id;
	char college_name[50];
};

struct school
{
	float percentage;
	char school_name[50];
};

struct intern
{
	int intern_id;
	char name[50];
	char job_role[30];
	struct school SCH;
	struct college CLG;
};

int main(void)
{
	struct college CLG ={8.7, 100, "University of Ghana"};
	struct school SCH = {96.4, "Mando SHS."};
	struct intern intern = {23, "Immanuel","SE", SCH, CLG};




	/*Data members of outer structure are accessed using a single dot*/
	    printf("Enter name, intern-id and job-role of intern:\n");
	        printf("Name: %s\nIntern-id: %d\nJob-role: %s\n",intern.name, intern.intern_id, intern.job_role);
		    
		    /*Data members of nested structure are accessed using two dots*/
		    printf("Enter school name and school percentage:\n");
		        printf("School Name: %s\nPercentage: %0.1f\n",intern.SCH.school_name, intern.SCH.percentage);
			    printf("Enter college name, college-id and cgpa:\n");
			        printf("College Name: %s\nCollege-id: %d\nCgpa: %0.1f\n",intern.CLG.college_name, intern.CLG.college_id, intern.CLG.cgpa);
				    return 0;
}
