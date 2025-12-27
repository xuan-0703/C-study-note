#include<stdio.h>
#include<string.h>

typedef struct suydent {
	int id;
	char name[100];
	int score;
}user;

int main()
{
	user u[3];
	for (int i = 0; i < 3; i++)
	{
		scanf_s("&d %s %d", &u[i].id, u[i].name, &u[i].score);

	};
	printf("&d %s %d", u[2].id, u[2].name, u[2].score);
	return 0;
};