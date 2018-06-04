
#include "libft.h"

t_list *ft_lstnew(void const *content, size_t content_size)
{
	t_list *nlist;
	
	nlist = (t_list *)malloc(sizeof(t_list);		//this is my node's memory an empty box
	if (nlist == NULL)					//we know to protect our stuff
		return (NULL);

	if (content == NULL)					//if there's nothing passed, regardless of
	{							//what's in content_size we still going to 
		nlist -> content = NULL;			//set it to 0 because NULL takes up 0 space
		nlist -> content_size = 0;
	}
	else					
	{
		nlist -> content = malloc(sizeof(content);	//if there's something entered we going to allocate enough space
		if (nlist -> content = NULL)			
			return (NULL);
		ft_memcpy(list->content, content, content_size);
		list->content_size = content_size;
	}
	list->next = NULL;
	return (list);
}
