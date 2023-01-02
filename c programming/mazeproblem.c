#include <stdio.h>
int size;
int maze[10][10];
int solution[10][10] = {0};
void accept(int size)
{
    printf("Enter your maze elements\n");
    int i, j;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
            scanf("%d", &maze[i][j]);
    }
}
void display(int a[10][10])
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}
int solvemaze(int r, int c)
{
    if (r == size - 1 && c == size - 1)
    {
        solution[r][c] = 1;
        return 1;
    }
    if (r >= 0 && c >= 0 && r < size && c < size && solution[r][c] == 0 && maze[r][c] == 0)
    {
        solution[r][c] = 1;
        if (solvemaze(r + 1, c))
            return 1;
        if (solvemaze(r, c + 1))
            return 1;
        if (solvemaze(r - 1, c))
            return 1;
        if (solvemaze(r, c - 1))
            return 1;
        solution[r][c] = 0;
        return 0;
    }
    return 0;
}
int main()
{
    int i, j;
    printf("Enter the size of the maze\n");
    scanf("%d", &size);
    accept(size);
    printf("Maze is :\n");
    display(maze);
    if (solvemaze(0, 0))
    {
        printf("Solution is :\n");
        display(solution);
    }
    else
        printf("NO SOLUTION!");
    return 0;
}