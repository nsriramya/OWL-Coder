def product(arr,n,mod):
    p=1
    for i in range(n):
        p=(p*arr[i])%mod
    return p
