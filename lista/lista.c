

void almacena_fin(struct direc**, struct direc*);

int main(void)
{
    struct direc* top = NULL;
    struct direc* nuevo = (struct direc*) malloc(sizeof(struct direc));

    almacena_fin(&top, nuevo);

}
