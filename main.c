#include<stdio.h>
#include<math.h>
int main()
{//猜拳小游戏

	//规则介绍
	printf("***欢迎开始猜拳小游戏！***\n");
	printf("玩家初始分数为6分，输一局扣2分，赢一局奖励2分。平局加1分");
	printf("\n1.石头\n");
	printf("2.剪刀\n");
	printf("3.布\n");
	

	int sum_score = 6;//玩家分数
	int recive_number = 0;//用户输入
	int ran_number = 0;//随机数字
	int count = 0;//猜数次数

	//while循环进行判断
	while (1)
	{
		printf("\n请输入你的选择:\n");
		ran_number = rand() % (7) + 6;//随机生成[0,12],顺序为石头剪刀布
		
		scanf_s("%d", &recive_number);
		if (sum_score <= 1)
		{
			printf("\n玩家分数不足，游戏结束！");
			break;
		}
		else
		{
			
			switch (recive_number)
			{

			case 1://石头
				if (0 <= ran_number && ran_number < 4)
				{
					printf("\n你输入的为：石头\n机器为：石头\n平局！\n");
					sum_score += 1;
					printf("\n当前分数为：%d\n", sum_score);
				}
				else if (4 <= ran_number && ran_number < 9)
				{
					printf("\n你输入的为： 石头\n机器为：剪刀\n你赢了！\n");
					sum_score += 2;
					printf("\n当前分数为：%d\n", sum_score);
				}
				else
				{
					printf("\n你输入的为： 石头\n机器为：布\n你输了！\n");
					sum_score -= 2;
					printf("\n当前分数为：%d\n", sum_score);
				}
				count++;
				break;

			case 2://剪刀
				if (0 <= ran_number && ran_number < 4)
				{
					printf("\n你输入的为：剪刀\n机器为：石头\n你输了！\n");
					sum_score -= 2;
					printf("\n当前分数为：%d\n", sum_score);
				}
				else if (4 <= ran_number && ran_number < 9)
				{
					printf("\n你输入的为：剪刀\n机器为：剪刀\n平局！\n");
					sum_score += 1;
					printf("\n当前分数为：%d\n", sum_score);
				}
				else
				{
					printf("\n你输入的为： 剪刀\n机器为：布\n你赢了！\n");
					sum_score += 2;
					printf("\n当前分数为：%d\n", sum_score);
				}
				count++;
				break;

			case 3://布
				if (0 <= ran_number && ran_number < 4)
				{
					printf("\n你输入的为：布\n机器为：石头\n你赢了！\n");
					sum_score += 2;
					printf("\n当前分数为：%d\n", sum_score);
				}
				else if (4 <= ran_number && ran_number < 9)
				{
					printf("\n你输入的为：布\n机器为：剪刀\n你输了！\n");
					sum_score -= 2;
					printf("\n当前分数为：%d\n", sum_score);
				}
				else
				{
					printf("\n你输入的为：布\n机器为：布\n平局！\n");
					sum_score += 1;
					printf("\n当前分数为：%d\n", sum_score);
				}
				count++;
				break;
				

			//输入其他游戏结束
			default:
				printf("\n游戏结束！\n一共猜了：%d次\n,总分分数为：%d", count, sum_score);
				break;
			}



		}
	}
		return 0;
}