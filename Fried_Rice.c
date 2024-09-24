#include <stdio.h>
#include <stdlib.h>

int main()
{
	char answer_question;
	
	printf("Today we are making a fried rice!\n");
	printf("Let's prepare the ingredient first!\n");
	
	printf("Can you help me pick the ingredient? (Y/N) \n");
	scanf("%c", &answer_question);
	switch (answer_question)
	{
		case 'Y':
			printf("YEAY! okay let us make some delicous fried rice shall we\n");
			break;
		case 'N':
			printf("Oh okay then :(\n");
			return 0;
		default:
			printf("Invalid answer!\n");
			break;
	}
	
	printf("Let's start with basic ingredient.\nDo you think we should use butter or motor oil (Press B for Butter and M for Motor oil)\n");
	scanf(" %c", &answer_question);
	switch (answer_question)
	{
		case 'B':
			printf("Yeah! that sounds about right\n");
			break;
		case 'M':
			printf("Hmm... okayy i guess we'll go with that one if you say so...\n");
			return 0;
		default:
			printf("Invalid answer!\n");
			break;
	}
	
	printf("Okay let's choose the second ingredient. Which one do you think is for fried rice?\nEggs or Chocolate bar? (Press E for Eggs and press C for Chcocalate bar)\n");
	scanf(" %c", &answer_question);
	switch (answer_question)
	{
		case 'E':
			printf("Yep! i love me some good ol eggs\n");
			break;
		case 'C':
			printf("Hmm... okayy i guess we'll go with that one if you say so...\n");
			return 0;
		default:
			printf("Invalid answer!\n");
			break;
	}
	
	printf("Okay now let's choose the thrid ingredient! Which one do you think is the right one?\nVeggies or Grass? (Press V for Veggies and press G for Grass)\n");
	scanf(" %c", &answer_question);
	switch (answer_question)
	{
		case 'V':
			printf("Yeah! let's make a very healthy fried rice!\n");
			break;
		case 'G':
			printf("Hmm... okayy i guess we'll go with that one if you say so...\n");
			return 0;
		default:
			printf("Invalid answer!\n");
			break;
	}
	
	printf("The fourth ingredient! Okay which one do you think is needed for fried rice?\nRice or Wheat (Press R for Rice and press W for Wheat)\n");
	scanf(" %c", &answer_question);
	switch (answer_question)
	{
		case 'R':
			printf("Yep obviously a fried rice needs a RICE!\n");
			break;
		case 'W':
			printf("Hmm... okayy i guess we'll go with that one if you say so...\n");
			return 0;
		default:
			printf("Invalid answer!\n");
			break;
	}
	
	printf("Okay finally the fifth and last ingredient.\nWhich one do you think is for fried rice? Soy Sauce or Oyster Sauce (Press S for Soy Sauce and press O for Oyster Sauce)\n");
	scanf(" %c", &answer_question);
	printf("(Both are good choices either way)\n");
	switch (answer_question)
	{
		case 'S':
			printf("I really like the saltiness of soy sauce!\n");
			break;
		case 'O':
			printf("Oyster sauce will make the fried rice really sweet and salty!\n");
			break;
		default:
			printf("Invalid answer!\n");
			break;
	}
	
	printf("Yum this fried rice is so good! good think i make you choose the ingredient:)");
	
	return 0;
}
