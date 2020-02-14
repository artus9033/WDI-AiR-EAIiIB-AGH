def Merge(tab1, tab2):
    i=0
    j=0
    w=[]
    while i<len(tab1) and j<len(tab2):
        if(tab1[i]<=tab2[j]):
            w.append(tab1[i])
            i+=1
        else:
            w.append(tab2[j])           
            j+=1
    return w+tab1[i:]+tab2[j:]
def MergeSort(tab):
    if(len(tab))<=1: return tab
    m=int(len(tab)/2)
    return Merge(MergeSort(tab[:m]),MergeSort(tab[m:]))
def MergeSortIt(tab):
    i=2
    while i <= len(tab):
        for j in range(0,len(tab),i):
            m=int(i/2)
            tab[j:j+i]=Merge(tab[j:j+m],tab[j+m:j+i])
           
        i=i*2
    return tab
def main():
    print(MergeSort([7,6,9,3,1,5,712]))
    print(MergeSortIt([7,6,9,3,1,5,7,12]))
   
main()
