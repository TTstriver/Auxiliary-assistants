#include<stdio.h>
#include<Windows.h>

int main()
{
	int choose;

	printf("С���ָ���������\n");
	Sleep(1500);
	printf( "��ѡ��������\n");
	printf("1.QQ��ը��(�ϰ�QQ����)\n");

	scanf_s("%d",&choose);

	if (choose == 1)
	{
		int oh;
		printf("��ע�⣺��ʹ�ñ�����ǰ��Ҫ��ը�Է������֡�ͼƬ���ƺá������Է��Ĵ��ڴ���ʹ����������������\n");
		Sleep(3000);
		printf("������Ϊʹ�ü򵥴���ʵ�ֵ�С�ű����������˹�����\n");
		printf("��ѡ���Ѿ�Ԥ��õĽű�\n������Ҫ��������ϵ����������)\n");
		printf("1.����***��qq\n");
		printf("2.������***��qqȺ\n");

		scanf_s("%d",&oh);

		if (oh == 1)
		{
			int number;

			HWND hwnd = FindWindow(L"TXGuiFoundation", L"***");
			//��***��������������QQ���ڵı���
			printf("������������Ĵ���(�����������)\n");
			scanf_s("%d",&number);

			for (int i = 0;i < number;i++)
			{
				SendMessage(hwnd, WM_PASTE, 0, 0);
				SendMessage(hwnd, WM_KEYDOWN, VK_RETURN, 0);
			}
		}
		if (oh == 2)
		{
			int number;
			HWND hwnd = FindWindow(L"TXGuiFoundation", L"***");
			//��***��������������QQ���ڵı���
			printf("������������Ĵ���(�����������)\n");
			scanf_s("%d",&number);

			for (int i = 0;i < number;i++)
			{
				SendMessage(hwnd, WM_PASTE, 0, 0);
				SendMessage(hwnd, WM_KEYDOWN, VK_RETURN, 0);
			}
		}
	}

	return 0;
}