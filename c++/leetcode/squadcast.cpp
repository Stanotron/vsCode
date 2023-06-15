#include <stdio.h>
#include <math.h>
#include <string.h>
int d[100][100];
#define MIN(x,y) ((x) < (y) ? (x) : (y))
int main()
{
    int i,j,m,n,temp,tracker;
    char s[] = "qchyejb5wjav";
    char t[] = "ubizmfj1sld3";
    m = strlen(s);
    n = strlen(t);
 
    for(i=0;i<=m;i++)
    d[0][i] = i;
    for(j=0;j<=n;j++)
    d[j][0] = j;
 
    for (j=1;j<=m;j++)
    {
        for(i=1;i<=n;i++)
        {
            if(s[i-1] == t[j-1])
            {
                tracker = 0;
            }
            else
            {
                tracker = 1;
            }
            temp = MIN((d[i-1][j]+1),(d[i][j-1]+1));
            d[i][j] = MIN(temp,(d[i-1][j-1]+tracker));
        }
    }
    printf("%d\n",d[n][m]);
    return 0;
}