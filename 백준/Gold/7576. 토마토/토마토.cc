#include <stdio.h>

struct inf{
    int x,y;
};

int m, n, f = 0, day = 0;
int arr[1001][1001];
inf q[1000000];
int s = 0, e = 0;
int dx[] ={-1,1,0,0};
int dy[] ={0,0,-1,1};

void bfs()
{
    while(s!=e){
        int flag = e;
        for(int i=s; i<flag; i++){
            for(int j=0; j<4; j++){
                int nx = q[i].x + dx[j];
                int ny = q[i].y + dy[j];
                if(nx <0 || nx>=n || ny <0 || ny>=m)continue;
                if(arr[nx][ny])continue;
                arr[nx][ny] = 1;
                q[e++] = {nx,ny};
            }
        }
        day++;
        s=flag;
    }
}

int main()
{
    int yaho = 0;
    scanf("%d %d", &m, &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
            if (arr[i][j] == 1)
            {
                q[e++] = {i,j};
            }
        }
    }
    bfs();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 0) yaho = 1;
        }
    }
    if (yaho == 0) printf("%d", day - 1);
    else printf("-1");
    return 0;
}