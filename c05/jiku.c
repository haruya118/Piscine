int    checks(char *board, int count)
{
    int    i;
    int    j;

    i = 0;
    while (i < count)
    {
        j = i + 1;
        while (j < count)
        {
            if (board[i] == board[j]  board[i] + i == board[j] + j  board[i]

i == board[j] - j)
              return (0);
          j++;}
      i++;}
  return (1);
}

int    solve(char board[10], int count)
{
    int        total;
    char    tmp;
    int        col;

    if (count == 10)
    {
        write(1, board, 10);
        write(1, "\n", 1);
        return (1);
    }
    total = 0;
    col = 0;
    while (col < 10)
    {
        tmp = board[count];
        board[count] = col + '0';
        if (checks(board, count + 1))
            total += solve(board, count + 1);
        board[count] = tmp;
        col++;
    }
    return (total);
}

int    ft_ten_queens_puzzle(void)
{
    char    board[11];
    int        i;

    i = 0;
    while (i < 10)
    {
        board[i] = '-';
        i++;
    }
    board[10] = '\0';
    return (solve(board, 0));
}

// int    main(void)
// {
//     return (ft_ten_queens_puzzle());
// }'
