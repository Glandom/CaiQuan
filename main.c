#include<stdio.h>
#include<math.h>
int main()
{//��ȭС��Ϸ

	//�������
	printf("***��ӭ��ʼ��ȭС��Ϸ��***\n");
	printf("��ҳ�ʼ����Ϊ6�֣���һ�ֿ�2�֣�Ӯһ�ֽ���2�֡�ƽ�ּ�1��");
	printf("\n1.ʯͷ\n");
	printf("2.����\n");
	printf("3.��\n");
	

	int sum_score = 6;//��ҷ���
	int recive_number = 0;//�û�����
	int ran_number = 0;//�������
	int count = 0;//��������

	//whileѭ�������ж�
	while (1)
	{
		printf("\n���������ѡ��:\n");
		ran_number = rand() % (7) + 6;//�������[0,12],˳��Ϊʯͷ������
		
		scanf_s("%d", &recive_number);
		if (sum_score <= 1)
		{
			printf("\n��ҷ������㣬��Ϸ������");
			break;
		}
		else
		{
			
			switch (recive_number)
			{

			case 1://ʯͷ
				if (0 <= ran_number && ran_number < 4)
				{
					printf("\n�������Ϊ��ʯͷ\n����Ϊ��ʯͷ\nƽ�֣�\n");
					sum_score += 1;
					printf("\n��ǰ����Ϊ��%d\n", sum_score);
				}
				else if (4 <= ran_number && ran_number < 9)
				{
					printf("\n�������Ϊ�� ʯͷ\n����Ϊ������\n��Ӯ�ˣ�\n");
					sum_score += 2;
					printf("\n��ǰ����Ϊ��%d\n", sum_score);
				}
				else
				{
					printf("\n�������Ϊ�� ʯͷ\n����Ϊ����\n�����ˣ�\n");
					sum_score -= 2;
					printf("\n��ǰ����Ϊ��%d\n", sum_score);
				}
				count++;
				break;

			case 2://����
				if (0 <= ran_number && ran_number < 4)
				{
					printf("\n�������Ϊ������\n����Ϊ��ʯͷ\n�����ˣ�\n");
					sum_score -= 2;
					printf("\n��ǰ����Ϊ��%d\n", sum_score);
				}
				else if (4 <= ran_number && ran_number < 9)
				{
					printf("\n�������Ϊ������\n����Ϊ������\nƽ�֣�\n");
					sum_score += 1;
					printf("\n��ǰ����Ϊ��%d\n", sum_score);
				}
				else
				{
					printf("\n�������Ϊ�� ����\n����Ϊ����\n��Ӯ�ˣ�\n");
					sum_score += 2;
					printf("\n��ǰ����Ϊ��%d\n", sum_score);
				}
				count++;
				break;

			case 3://��
				if (0 <= ran_number && ran_number < 4)
				{
					printf("\n�������Ϊ����\n����Ϊ��ʯͷ\n��Ӯ�ˣ�\n");
					sum_score += 2;
					printf("\n��ǰ����Ϊ��%d\n", sum_score);
				}
				else if (4 <= ran_number && ran_number < 9)
				{
					printf("\n�������Ϊ����\n����Ϊ������\n�����ˣ�\n");
					sum_score -= 2;
					printf("\n��ǰ����Ϊ��%d\n", sum_score);
				}
				else
				{
					printf("\n�������Ϊ����\n����Ϊ����\nƽ�֣�\n");
					sum_score += 1;
					printf("\n��ǰ����Ϊ��%d\n", sum_score);
				}
				count++;
				break;
				

			//����������Ϸ����
			default:
				printf("\n��Ϸ������\nһ�����ˣ�%d��\n,�ַܷ���Ϊ��%d", count, sum_score);
				break;
			}



		}
	}
		return 0;
}