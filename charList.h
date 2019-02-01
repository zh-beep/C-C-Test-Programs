typedef struct _Elem
{
  struct _Elem *next;
  char value;
}Elem;

Elem* Create( char c);
