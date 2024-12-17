# Registry (nreg)  
Most applications in NekoExperince need a datastore for all sorts of settings  
this application aims to build a fast and simple registry for that purpose  
please note that `nreg` isn't dast by any means and while it is available for 3rd party use it wont be very useful for more complex use cases other than ismple and short data storing, please note that the count of save fields is infinite but the data stored per field is 512 bytes at max  

# Registry Structure  
```
root
|->pck1
|   |->field1 [int::512b]
|   |->field2 [str::512b]
|   ...
|->pck2
|   |->field1 [int::512b]
|   ...
|->pck3
|   |->field1 [str::512b]
|   ...
...
```

# Tek-nick-AL D-tails :3  
you can access/store data into fields categorized by the package name  
please note that `nreg` does not create nor identify package names itself and each app that requires to use `nreg` will have to specify the package name, this allows for apps to access other apps databases tho if the executable name doesn't match the package name it will check if the app has permission to do so, otherwise it will fail, permission has to be manually granted by the root user  
each package contains a technically infinte ammount of fields each field has a unique identifier and accepts a blob of 512 binary slots, aka 512 ones and zeros, the first 4 bytes (characters) are used as an identifier for type (int/str) if its anything other that 0(int) or 1(str) the entire blob gets treated as binary data which allows for custom types or generally the storing of binary data up to 512 bytes per field  
this approach makes this a very barebones registry (and also very c like) while giving the freedom to the developers to use it as they wish however they wish  

# Commands and Syntax  
`nreg` `[OPTIONS]` `[pck.fld]`  
[OPTIONS]:  
| OPTION | INFORMATION                                                             |
| ------ | ----------------------------------------------------------------------- |
|  `-s`  | Save data into pck.fld: `-s [i/s::DATA] pck.fld` including the brackets |
|  `-r`  | Read data from pck.fld: `-r pck.fld`                                    |
|  `-h`  | Shows the help message                                                  |
|  `-v`  | Reads out version and quits                                             |

# Links  
Wanna have a chattie ? This makes me pretty happy :3  
all the links that you'd need are located at @NekoMimiOfficial 's personal repo (right on the profile page, just scroll all the way to the end of the readme)  
Have a nice day :3  
