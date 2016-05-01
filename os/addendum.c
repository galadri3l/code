#define MAX 100
#define PAGE_SIZE 4
#define FIFO 0
#define LRU 1
#define LFU 2
#define MODE FIFO

//added from main source file
struct PAGE {
	int data;
	int t_stamp;
	int count;
};
typedef struct PAGE page;

int front = -1,rear = -1,stamp = 0,fake_rear=-1;
page queue[PAGE_SIZE];
int fault=0;
//*************************//

int hist_count=-1;
page hist[MAX];
void backup_old_data(int index)
{
	int i;
	for(i=0;i<MAX;i++)
		if(hist[i].data==queue[index].data)
		{
			hist[i]=queue[index];
			return;
		}
	hist_count++;
	hist[hist_count] = queue[index];
}

void set_old_count(page *new)
{
	int i;
	for(i=0;i<MAX;i++)
		if(hist[i].data == new->data)
			*new = hist[i];
	return;
}
