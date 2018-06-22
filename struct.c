#include <stdio.h>
#include <string.h>

struct Person{
	char name[20];
	char gender[10];
	int age;
	float height;
	float weight;
};

//函数声明
void printPerson(struct Person person);

int main(){

	struct Person Jack;
	struct Person Mackle;
        strcpy(Jack.name,"Jack");
	strcpy(Jack.gender,"Man");
	Jack.age = 25;
	Jack.height = 175;
	Jack.weight = 56;
      /*
	printf("Jack-name:%s\n",Jack.name);
	printf("Jack-gender:%s\n",Jack.gender);
	printf("Jack-age:%d\n",Jack.age);
	printf("Jack-height:%f\n",Jack.height);
	printf("Jack-weight:%f\n",Jack.weight);
	
	*/
	printPerson(Jack);
	printf("-----------");
	printPerson(Mackle);

	return 0;
}

//函数实现
void printPerson(struct Person person){
	printf("Person-name:%s\n",person.name);
        printf("Person-gender:%s\n",person.gender);
        printf("Person-age:%d\n",person.age);
        printf("Person-height:%f\n",person.height);
        printf("Person-weight:%f\n",person.weight);

}
