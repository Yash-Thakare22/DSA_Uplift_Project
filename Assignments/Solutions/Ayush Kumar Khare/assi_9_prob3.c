

char * restoreString(char * s, int* indices, int size){

    char shuffle[size];
    for(int i=0;i<size;i++)
    {
        shuffle[i]=*(s+i);        
    }
    for(int i=0;i<size;i++)
    {
        *(s+*(indices+i))=shuffle[i] ;        
    }
    return s;
    }
