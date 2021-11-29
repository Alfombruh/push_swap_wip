#include "push_swap.h"

void ft_imprimir(t_list *head_a, t_list *head_b)
{
    int i;

    i = 1;
    printf("\n\n///////////////////////////////////////////////////\n\n");
    printf("    \t       A       \t       B       \n");
    printf("    \t|-------------|\t|---------------|\n");
    while (head_a || head_b)
    {
        if ( head_b && !head_a)
            printf("%d   \t|             |\t| %11d-%d |\n", i, (int)head_b->content, head_b->chunk);
        else if (head_a && !head_b)
            printf("%d   \t| %11d-%d |\t|             |\n", i, (int)head_a->content,head_a->chunk);
        else
            printf("%d   \t| %11d-%d | %11d-%d |\n", i, (int)head_a->content, head_a->chunk, (int)head_b->content, head_b->chunk);
        if ( head_a != NULL)
            head_a = head_a->next;
        if (head_b != NULL)
            head_b = head_b->next;
        i++;
    }
    printf("    \t|-------------|\t|---------------|\n");
}
