/*����һ���������� nums?��һ��Ŀ��ֵ target��
�����ڸ��������ҳ���ΪĿ��ֵ��������������
���������ǵ������±ꡣ
����Լ���ÿ������ֻ���Ӧһ���𰸡�
���ǣ��㲻���ظ��������������ͬ����Ԫ�ء�

ʾ��:
���� nums = [2, 7, 11, 15], target = 9
��Ϊ nums[0] + nums[1] = 2 + 7 = 9
���Է��� [0, 1]
*/
int* twoSum(int* nums, int numsSize, int target, int* returnSize){

	static int a[2] = { 0 };
	*returnSize = 2;
	for (int i = 0; i<numsSize; i++)
	{
		for (int j = i + 1; j<numsSize; j++)
		{
			if (nums[i] + nums[j] == target)
			{
				a[0] = i;
				a[1] = j;
				return a;
			}

		}
	}
	printf("û��������֮�͵�����������");
	return 0;
}