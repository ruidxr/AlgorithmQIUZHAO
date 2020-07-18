学习笔记-Week1
- 



- 作业题：189-旋转数组

	第一想法与官方题解的第一种解法相同，但是写出来提交，结果是“超出时间限制”。看到自己1年前的提交记录（咳咳，十分惭愧），与现在的写法也完全相同，当年还是能通过的。emmmm，官方都进步了，我还停留在一年前，害。
	
	改用反转法，提交后卡在了测试用例：[-1] 2处，忘记考虑k大于数组长度的情况了。将k取余后提交通过。

- 作业题：21-合并两个有序链表
	
	啊又被自己蠢到。方法我都懂，卡在哪了呢，ListNode没有初始化就添加next指针了，报错超时。以后注意。

- C++版priority queue

	//升序队列，小顶堆

	priority_queue <int,vector<int>,greater<int> > q;

    //降序队列，大顶堆

    priority_queue <int,vector<int>,less<int> > q;

- 作业题：1-两数之和

	以前用的暴力法，学习使用哈希完成题目。C++中可用unordered_map。

- 作业题：641-设计循环双端队列

	vector插入元素：v.insert(v.begin()+i,num);
	
	vector删除元素：v.erase(v.end()-i);