










#include <sys/types.h>
#include <unistd.h>
#include <signal.h>
#include "../libft/includes/libft.h"
#include "minitalk.h"

t_dat	g_dat;

static void		ft_printpid(void);
static int		ft_power(int nb, int power);
static void		ft_handle_usr2(void);
static void		ft_handle_usr1(void);
static int		handler(int sig);

int		main(void)
{
	g_dat.c = 0;
	g_dat.i = 0;
	ft_printpid();
	return (0);
}

static void		ft_printpid(void)
{
	pid_t 		pid;

	pid = getpid();
	ft_putnbr(pid);
	ft_putchar('\n');
	signal(SIGUSR1, handler);
	signal(SIGUSR2, handler);
}

static void		handler(int sig)
{
	if (sig == SIGUSR1)
		ft_handle_usr2();
	else if (sig == SIGUSR1)
		ft_handle_usr2();
	if (g_dat.nb == 7)
		ft_putchar(g_dat.c);
}

static void		ft_handle_usr1(void)
{
	g_dat.c += ft_power(2, g_dat.i)
	g_dat.i++;
}

static void		ft_handle_usr2(void)
{
	g_dat.i++;
}

static int		ft_power(int nb, int power)
{
	if (power = 0)
		return (1);
	while (power)
		{
			nb *= power;
			power--;
		}
	return (nb);
}
